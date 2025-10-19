AM_SRCS := riscv/ysyx-soc/start.S \
           riscv/ysyx-soc/trm.c \
           riscv/ysyx-soc/ioe.c \
           riscv/ysyx-soc/timer.c \
           riscv/ysyx-soc/input.c \
           riscv/ysyx-soc/cte.c \
           riscv/ysyx-soc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker-soc.ld
LDFLAGS   += --defsym=_pmem_start=0x20000000  --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

SOC_HOME = /home/meowth/ysyx/ysyx-workbench/project/b_SoC
DIFF_SO = /home/meowth/ysyx/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
run: insert-arg
	@cd $(SOC_HOME) && \
	$(SOC_HOME)/obj_dir/VysyxSoCFull -e $(IMAGE).elf -d $(DIFF_SO) $(IMAGE).bin mainargs=1 \
    gtkwave $(SOC_HOME)/obj_dir/wave.fst

.PHONY: insert-arg
