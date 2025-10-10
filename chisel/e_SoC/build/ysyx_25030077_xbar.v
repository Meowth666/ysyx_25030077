module ysyx_25030077_xbar(
  input         clock,
  input         reset,
  input         io_axi_ar_valid,
  input  [31:0] io_axi_ar_addr,
  input  [2:0]  io_axi_ar_strb,
  output        io_axi_ar_ready,
  input         io_axi_aw_valid,
  input  [31:0] io_axi_aw_addr,
  output        io_axi_aw_ready,
  input         io_axi_w_valid,
  input  [31:0] io_axi_w_data,
  input  [2:0]  io_axi_w_strb,
  output        io_axi_w_ready,
  output        io_axi_r_valid,
  output [31:0] io_axi_r_data,
  input         io_axi_r_ready,
  output        io_axi_b_valid,
  input         io_axi_b_ready,
  output [1:0]  io_axi_b_resp,
  output        io_axi_ar_valid_mem,
  output [31:0] io_axi_ar_addr_mem,
  output [2:0]  io_axi_ar_strb_mem,
  input         io_axi_ar_ready_mem,
  output        io_axi_ar_valid_clint,
  output [31:0] io_axi_ar_addr_clint,
  output [2:0]  io_axi_ar_strb_clint,
  input         io_axi_ar_ready_clint,
  output        io_axi_aw_valid_mem,
  output [31:0] io_axi_aw_addr_mem,
  input         io_axi_aw_ready_mem,
  output        io_axi_w_valid_mem,
  output [31:0] io_axi_w_data_mem,
  output [2:0]  io_axi_w_strb_mem,
  input         io_axi_w_ready_mem,
  output        io_axi_aw_valid_uart,
  output [31:0] io_axi_aw_addr_uart,
  input         io_axi_aw_ready_uart,
  output        io_axi_w_valid_uart,
  output [31:0] io_axi_w_data_uart,
  output [2:0]  io_axi_w_strb_uart,
  input         io_axi_w_ready_uart,
  input         io_axi_r_valid_mem,
  input  [31:0] io_axi_r_data_mem,
  output        io_axi_r_ready_mem,
  input         io_axi_b_valid_mem,
  output        io_axi_b_ready_mem,
  input  [1:0]  io_axi_b_resp_mem,
  input         io_axi_b_valid_clint,
  output        io_axi_b_ready_clint,
  input  [1:0]  io_axi_b_resp_clint,
  input         io_axi_r_valid_clint,
  input  [31:0] io_axi_r_data_clint,
  output        io_axi_r_ready_clint
);
  wire  _io_axi_ar_ready_T_2 = io_axi_ar_addr == 32'ha0000048 | io_axi_ar_addr == 32'ha000004c; // @[ysyx_25030077_xbar.scala 76:64]
  wire  _io_axi_aw_addr_mem_T = io_axi_aw_addr == 32'ha00003f8; // @[ysyx_25030077_xbar.scala 79:47]
  assign io_axi_ar_ready = io_axi_ar_addr == 32'ha0000048 | io_axi_ar_addr == 32'ha000004c ? io_axi_ar_ready_clint :
    io_axi_ar_ready_mem; // @[ysyx_25030077_xbar.scala 76:27]
  assign io_axi_aw_ready = _io_axi_aw_addr_mem_T ? io_axi_aw_ready_uart : io_axi_aw_ready_mem; // @[ysyx_25030077_xbar.scala 113:27]
  assign io_axi_w_ready = _io_axi_aw_addr_mem_T ? io_axi_w_ready_uart : io_axi_w_ready_mem; // @[ysyx_25030077_xbar.scala 112:26]
  assign io_axi_r_valid = io_axi_r_valid_mem | io_axi_r_valid_clint; // @[ysyx_25030077_xbar.scala 75:42]
  assign io_axi_r_data = _io_axi_ar_ready_T_2 ? io_axi_r_data_clint : io_axi_r_data_mem; // @[ysyx_25030077_xbar.scala 77:25]
  assign io_axi_b_valid = io_axi_b_valid_mem | io_axi_b_valid_clint; // @[ysyx_25030077_xbar.scala 108:42]
  assign io_axi_b_resp = 2'h0; // @[ysyx_25030077_xbar.scala 106:19]
  assign io_axi_ar_valid_mem = _io_axi_ar_ready_T_2 ? 1'h0 : io_axi_ar_valid; // @[ysyx_25030077_xbar.scala 88:34]
  assign io_axi_ar_addr_mem = _io_axi_ar_ready_T_2 ? 32'h80000000 : io_axi_ar_addr; // @[ysyx_25030077_xbar.scala 85:33]
  assign io_axi_ar_strb_mem = _io_axi_ar_ready_T_2 ? 3'h0 : io_axi_ar_strb; // @[ysyx_25030077_xbar.scala 91:33]
  assign io_axi_ar_valid_clint = _io_axi_ar_ready_T_2 & io_axi_ar_valid; // @[ysyx_25030077_xbar.scala 89:34]
  assign io_axi_ar_addr_clint = _io_axi_ar_ready_T_2 ? io_axi_ar_addr : 32'h80000000; // @[ysyx_25030077_xbar.scala 86:33]
  assign io_axi_ar_strb_clint = _io_axi_ar_ready_T_2 ? io_axi_ar_strb : 3'h0; // @[ysyx_25030077_xbar.scala 92:33]
  assign io_axi_aw_valid_mem = _io_axi_aw_addr_mem_T ? 1'h0 : io_axi_aw_valid; // @[ysyx_25030077_xbar.scala 82:32]
  assign io_axi_aw_addr_mem = io_axi_aw_addr == 32'ha00003f8 ? 32'h0 : io_axi_aw_addr; // @[ysyx_25030077_xbar.scala 79:31]
  assign io_axi_w_valid_mem = _io_axi_aw_addr_mem_T ? 1'h0 : io_axi_w_valid; // @[ysyx_25030077_xbar.scala 94:31]
  assign io_axi_w_data_mem = _io_axi_aw_addr_mem_T ? 32'h0 : io_axi_w_data; // @[ysyx_25030077_xbar.scala 97:30]
  assign io_axi_w_strb_mem = _io_axi_aw_addr_mem_T ? 3'h0 : io_axi_w_strb; // @[ysyx_25030077_xbar.scala 100:30]
  assign io_axi_aw_valid_uart = _io_axi_aw_addr_mem_T & io_axi_aw_valid; // @[ysyx_25030077_xbar.scala 83:32]
  assign io_axi_aw_addr_uart = _io_axi_aw_addr_mem_T ? 32'ha00003f8 : 32'h0; // @[ysyx_25030077_xbar.scala 80:31]
  assign io_axi_w_valid_uart = _io_axi_aw_addr_mem_T & io_axi_w_valid; // @[ysyx_25030077_xbar.scala 95:31]
  assign io_axi_w_data_uart = _io_axi_aw_addr_mem_T ? io_axi_w_data : 32'h0; // @[ysyx_25030077_xbar.scala 98:30]
  assign io_axi_w_strb_uart = _io_axi_aw_addr_mem_T ? io_axi_w_strb : 3'h0; // @[ysyx_25030077_xbar.scala 101:30]
  assign io_axi_r_ready_mem = io_axi_r_ready; // @[ysyx_25030077_xbar.scala 110:26]
  assign io_axi_b_ready_mem = io_axi_b_ready; // @[ysyx_25030077_xbar.scala 104:26]
  assign io_axi_b_ready_clint = io_axi_b_ready; // @[ysyx_25030077_xbar.scala 103:26]
  assign io_axi_r_ready_clint = io_axi_r_ready; // @[ysyx_25030077_xbar.scala 111:26]
endmodule
