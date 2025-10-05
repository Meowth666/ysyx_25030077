# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: Vtop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/usr/include/readline 		 -I  /home/meowth/ysyx/ysyx-workbench/project/0_meopc/tools/capstone/repo/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-lreadline -lncurses \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu_exec \
	elf \
	main \
	memory \
	monitor \
	regs \
	expr \
	sdb \
	disasm \
	dut \
	ftrace \
	itrace \
	logs \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/cpu_exec \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/elf \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/memory \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/monitor \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/regs \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/sdb \
	/home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu_exec.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/cpu_exec/cpu_exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
elf.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/elf/elf.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/memory/memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
regs.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/regs/regs.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils/disasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils/dut.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils/itrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
logs.o: /home/meowth/ysyx/ysyx-workbench/project/0_meopc0/csrc/utils/logs.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vtop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
