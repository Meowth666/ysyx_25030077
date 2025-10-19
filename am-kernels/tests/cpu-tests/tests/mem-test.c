#include "trap.h"
// 从链接脚本引入堆区地址符号（确保链接脚本中已定义这两个符号）
extern char _heap_start;
extern char _heap_end;

// 错误计数与信息


int main() {
    
    // 将堆区起始/结束地址转换为字节指针（按字节访问）
    uint8_t *heap_start = (uint8_t*)&_heap_start;
    uint8_t *heap_end   = (uint8_t*)&_heap_end;
    uint32_t heap_size  = heap_end - heap_start;

    for (uint32_t i = 0; i < heap_size; i++) {
        // 写入的数据 = 偏移量（0~0xfff），确保每个字节数据唯一且可预测
        heap_start[i] = (uint8_t)(i & 0xff);  // 取低8位，避免溢出
    }

    for (uint32_t i = 0; i < heap_size; i++) {
        uint8_t expected = (uint8_t)(i & 0xff);
        uint8_t actual   = heap_start[i];
        check(actual == expected);
    }

    // uint16_t *heap_16start = (uint16_t*)&_heap_start;
    // // 计算最大可测试的16位数据个数（堆大小整除2，避免越界）
    // uint32_t heap_16count = heap_size / 2;  // 每个16位数据占2字节

    // // 16位写入：写入数据 = 偏移量（0~heap_16count-1）的低16位（可预测）
    // for (uint32_t i = 0; i < heap_16count; i++) {
    //     // 例如：i=0 → 0x0000，i=1→0x0001，i=0x100→0x0100（覆盖16位所有可能值）
    //     heap_16start[i] = (uint16_t)(i & 0xffff);
    // }

    // // 16位读取校验
    // for (uint32_t i = 0; i < heap_16count; i++) {
    //     uint16_t expected = (uint16_t)(i & 0xffff);
    //     uint16_t actual   = heap_16start[i];  // 编译器生成sh/lhu指令
    //     check(actual == expected);
    // }

    // uint32_t *heap_32start = (uint32_t*)&_heap_start;
    // // 计算最大可测试的32位数据个数（堆大小整除4，每个32位数据占4字节）
    // uint32_t heap_32count = heap_size / 4;  // 4096字节 → 1024个32位数据（无越界）

    // // 32位写入：数据=偏移量（0~1023）的完整32位值（可预测，覆盖测试场景）
    // for (uint32_t i = 0; i < heap_32count; i++) {
    //     // 例如：i=0→0x00000000，i=1→0x00000001，i=0x3ff→0x000003ff
    //     heap_32start[i] = (uint32_t)(i & 0xffffffff);
    // }

    // // 32位读取校验：编译器自动生成lw（存储字）/lwu（加载无符号字）指令
    // for (uint32_t i = 0; i < heap_32count; i++) {
    //     uint32_t expected = (uint32_t)(i & 0xffffffff);
    //     uint32_t actual   = heap_32start[i];
    //     check(actual == expected);
    // }

    // ====================== 4. 新增：64位（双字）测试 ======================
    // 关键1：64位访问需64位对齐（地址最低3位为0，因8字节=2^3）
    // 堆起始地址0x0f000000天然满足64位对齐（最低3位=000）
    // uint64_t *heap_64start = (uint64_t*)heap_start;
    // // 关键2：计算64位数据个数（4096字节 / 8字节=512个，无越界）
    // uint32_t heap_64count = heap_size / 8;

    // // 64位写入：数据=偏移量i的64位值（可预测，覆盖测试场景）
    // for (uint32_t i = 0; i < heap_64count; i++) {
    //     // 例如：i=0→0x0000000000000000，i=1→0x0000000000000001，...，i=511→0x00000000000001ff
    //     heap_64start[i] = (uint64_t)i;
    // }

    // // 64位读取校验：RISC-V32通过扩展支持64位加载/存储（需硬件支持）
    // for (uint32_t i = 0; i < heap_64count; i++) {
    //     uint64_t expected = (uint64_t)i;
    //     uint64_t actual   = heap_64start[i];  // 编译器生成ld/sd指令
    //     check(actual == expected);
    // }

    return 0;
}