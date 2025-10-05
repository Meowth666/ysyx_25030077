set work_dir "/home/meowth/ysyx/ysyx-workbench/yosys/yosys-sta/result/ysyx_25030077_top-500MHz"
set_design_workspace $work_dir/rpt
read_netlist $work_dir/ysyx_25030077_top.v
set LIB_FILES $work_dir/example1_slow.lib
read_liberty $LIB_FILES
link_design top
read_sdc  $work_dir/example1.sdc
read_spef $work_dir/example1.spef
report_timing
