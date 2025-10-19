do:	
	riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles -Ttext=0x20000000 -o char-test.elf main.c
	riscv32-unknown-elf-objcopy -O binary -j .text char-test.elf char-test.bin
	riscv32-unknown-elf-objdump -h char-test.elf
	riscv32-unknown-elf-objdump -D -b binary -m riscv:rv32 -M no-aliases -M numeric --adjust-vma=0x20000000 char-test.bin > char-test.dump