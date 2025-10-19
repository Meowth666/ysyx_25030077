ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY 
{
  mrom : ORIGIN = 0x20000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    _text = .;
    *(entry)
    *(.text*)
    _etext = .;
  } > mrom AT >mrom : text
  etext = .;
  
  .rodata : {
    _rodata = .;
    *(.rodata*)
    *(.srodata*)
    _erodata = .;
  } > mrom AT >mrom
  
  .data : {
    _data = .;
    *(.data*)
    *(.sdata*)
    _edata = .;
  } > sram AT >mrom : data

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram

  _stack_top = ALIGN(0x10);
  . = _stack_top + 0x800;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x10);
  _heap_end = 0x0f001fff;
}
