include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyx-soc.mk
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # overwrite
LDFLAGS       += -melf32lriscv                    # overwrite

AM_SRCS += riscv/ysyx-soc/libgcc/div.S \
           riscv/ysyx-soc/libgcc/muldi3.S \
           riscv/ysyx-soc/libgcc/multi3.c \
           riscv/ysyx-soc/libgcc/ashldi3.c \
           riscv/ysyx-soc/libgcc/unused.c
