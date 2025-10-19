#include <am.h>
#include <klib-macros.h>
#include "ysyx-soc.h"

extern char _heap_start;
extern char _heap_end;
int main(const char *args);

extern char _pmem_start;
extern char _erodata;
extern char _data;
extern char _edata;

extern char _bss_start;
extern char _bss_end;
// #define HEAP_SIZE 0xfff
// #define HEAP_END  ((uintptr_t)&_heap_start + HEAP_SIZE)
#define UART_BASE 0x10000000L
#define UART_TX   0x0

Area heap = RANGE(&_heap_start, &_heap_end);

#define UART_LCR     3
#define UART_DLL     0
#define UART_DLM     1
#define UART_LSR     5      // 线路状态寄存器（Line Status Register）
#define LSR_THRE     0x20   // LSR第5位：发送保持寄存器为空（1=空闲）

void uart_set_baud_rate(void) {
    // 1. 使能DLAB
    volatile uint8_t *lcr = (volatile uint8_t *)(UART_BASE + UART_LCR);
    *lcr = 0x80;  // DLAB = 1
    // 2. 配置除数（假设系统时钟1843200Hz，波特率115200 → 除数=1）
    volatile uint8_t *dll = (volatile uint8_t *)(UART_BASE + UART_DLL);
    volatile uint8_t *dlm = (volatile uint8_t *)(UART_BASE + UART_DLM);
    *dll = 0x01;  // 除数低字节
    *dlm = 0x00;  // 除数高字节
    // 3. 禁用DLAB，配置线路为8N1（8数据位、无校验、1停止位）
    *lcr = 0x03;
}

void bootloader_load() {
  // 步骤 1：复制 .data 段（从 Flash LMA 到 SRAM VMA）
  uint8_t *src = (uint8_t*)&_erodata;
  uint8_t *dest = (uint8_t*)&_data;
  uint32_t _data_len = (uint32_t)(&_edata - &_data);

  for (uint32_t i = 0; i < _data_len; i++) {
      dest[i] = src[i];  // 逐字节复制（或用 memcpy，需确保其在 Bootloader 中可用） 
  }

  uint32_t _bss_len = (uint32_t)(&_bss_end - &_bss_start);
  uint8_t *bss = (uint8_t*)&_bss_start;
  for (uint32_t i = 0; i < _bss_len; i++) {
    bss[i] = 0;  // 逐字节清零
  }
}

// Area heap = RANGE(&_heap_start, HEAP_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  volatile uint8_t *lsr = (volatile uint8_t *)(UART_BASE + UART_LSR);
    while ((*lsr & LSR_THRE) == 0) {
        // 空循环：等待发送队列空闲
    }

    volatile uint8_t *tx = (volatile uint8_t *)(UART_BASE + UART_TX);
    *tx = (uint8_t)ch;
}

void halt(int code) {
  (void)code; 
  asm volatile("ebreak");
  while (1) { }
}

void _trm_init() {
  bootloader_load();
  uart_set_baud_rate();
  int ret = main(mainargs);
  halt(ret);
}
