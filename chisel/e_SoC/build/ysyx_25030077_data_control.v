module ysyx_25030077_data_control(
  input         clock,
  input         reset,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [31:0] io_imm,
  input  [31:0] io_mem_data,
  input  [31:0] io_pc_count,
  input  [2:0]  io_data_control,
  output [31:0] io_data_1,
  output [31:0] io_data_2
);
  wire  control1 = io_data_control == 3'h1; // @[ysyx_25030077_data_control.scala 18:34]
  wire  control2 = io_data_control == 3'h2; // @[ysyx_25030077_data_control.scala 19:34]
  wire  control3 = io_data_control == 3'h3; // @[ysyx_25030077_data_control.scala 20:34]
  wire [31:0] _io_data_1_T = control2 ? io_mem_data : io_rs1_data; // @[Mux.scala 101:16]
  wire [31:0] _io_data_2_T = control3 ? io_rs2_data : io_imm; // @[Mux.scala 101:16]
  assign io_data_1 = control1 ? io_pc_count : _io_data_1_T; // @[Mux.scala 101:16]
  assign io_data_2 = control2 ? 32'h0 : _io_data_2_T; // @[Mux.scala 101:16]
endmodule
