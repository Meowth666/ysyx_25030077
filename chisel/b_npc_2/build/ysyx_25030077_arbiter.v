module ysyx_25030077_arbiter(
  input         clock,
  input         reset,
  input         io_ifu_valid,
  input  [2:0]  io_delay_cnt_mem,
  input  [2:0]  io_delay_cnt_clint,
  input  [31:0] io_pc,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [31:0] io_imm,
  input  [2:0]  io_r_mask,
  input  [2:0]  io_w_mask,
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
  input         io_axi_r_valid_clint,
  input  [31:0] io_axi_r_data_clint,
  output        io_axi_r_ready_clint,
  input         io_axi_b_valid,
  output        io_axi_b_ready,
  input  [1:0]  io_axi_b_resp,
  output [1:0]  io_gpr_b_resp,
  output        io_gpr_r_valid,
  output        io_gpr_b_valid,
  input         io_gpr_r_ready,
  input         io_gpr_b_ready,
  output [31:0] io_gpr_data,
  output [31:0] io_inst,
  output        io_ifu_ready,
  input         io_r_valid_lsu,
  output        io_is_r
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state_reg; // @[ysyx_25030077_arbiter.scala 73:28]
  reg [31:0] inst_reg; // @[ysyx_25030077_arbiter.scala 74:27]
  wire [32:0] _axi_ar_addr_T = io_rs1_data + io_imm; // @[ysyx_25030077_arbiter.scala 76:44]
  wire  _axi_ar_addr_T_2 = state_reg == 2'h0; // @[ysyx_25030077_arbiter.scala 77:42]
  wire [31:0] axi_ar_addr = _axi_ar_addr_T_2 ? io_pc : _axi_ar_addr_T[31:0]; // @[Mux.scala 101:16]
  wire  _delay_cnt_T_2 = axi_ar_addr == 32'ha0000048 | axi_ar_addr == 32'ha000004c; // @[ysyx_25030077_arbiter.scala 80:58]
  wire [2:0] delay_cnt = axi_ar_addr == 32'ha0000048 | axi_ar_addr == 32'ha000004c ? io_delay_cnt_clint :
    io_delay_cnt_mem; // @[ysyx_25030077_arbiter.scala 80:24]
  wire  axi_r_valid = io_axi_r_valid_mem | io_axi_r_valid_clint; // @[ysyx_25030077_arbiter.scala 81:42]
  wire  axi_ar_ready = _delay_cnt_T_2 ? io_axi_ar_ready_clint : io_axi_ar_ready_mem; // @[ysyx_25030077_arbiter.scala 82:27]
  wire [31:0] axi_r_data = _delay_cnt_T_2 ? io_axi_r_data_clint : io_axi_r_data_mem; // @[ysyx_25030077_arbiter.scala 83:25]
  wire  _state_reg_T_1 = delay_cnt == 3'h1; // @[ysyx_25030077_arbiter.scala 86:46]
  wire  _state_reg_T_3 = state_reg == 2'h1; // @[ysyx_25030077_arbiter.scala 87:20]
  wire [1:0] _state_reg_T_6 = _state_reg_T_1 ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 88:71]
  wire  _state_reg_T_7 = ~io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 89:53]
  wire [1:0] _state_reg_T_10 = axi_r_valid & (io_axi_ar_ready_clint | io_axi_ar_ready_mem) ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 89:72]
  wire [1:0] _state_reg_T_11 = _state_reg_T_7 ? _state_reg_T_10 : 2'h0; // @[Mux.scala 101:16]
  wire  _state_reg_T_13 = state_reg == 2'h2; // @[ysyx_25030077_arbiter.scala 91:20]
  wire [1:0] _state_reg_T_15 = axi_r_valid & axi_ar_ready ? 2'h0 : 2'h2; // @[ysyx_25030077_arbiter.scala 91:35]
  wire [31:0] axi_aw_addr = _state_reg_T_3 ? _axi_ar_addr_T[31:0] : 32'h0; // @[Mux.scala 101:16]
  wire  _io_axi_aw_addr_mem_T = axi_aw_addr == 32'ha00003f8; // @[ysyx_25030077_arbiter.scala 97:44]
  wire  axi_aw_valid = _state_reg_T_3 & axi_r_valid; // @[Mux.scala 101:16]
  wire  axi_ar_valid = _axi_ar_addr_T_2 ? io_ifu_valid : axi_aw_valid; // @[Mux.scala 101:16]
  wire [2:0] _axi_ar_strb_T_2 = _state_reg_T_3 ? io_r_mask : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] axi_ar_strb = _axi_ar_addr_T_2 ? 3'h6 : _axi_ar_strb_T_2; // @[Mux.scala 101:16]
  wire [31:0] axi_w_data = _state_reg_T_3 ? io_rs2_data : 32'h0; // @[Mux.scala 101:16]
  wire [2:0] axi_w_strb = _state_reg_T_3 ? io_w_mask : 3'h0; // @[Mux.scala 101:16]
  wire  _inst_reg_T_2 = _state_reg_T_1 & _axi_ar_addr_T_2; // @[ysyx_25030077_arbiter.scala 159:50]
  assign io_axi_ar_valid_mem = _delay_cnt_T_2 ? 1'h0 : axi_ar_valid; // @[ysyx_25030077_arbiter.scala 113:34]
  assign io_axi_ar_addr_mem = _delay_cnt_T_2 ? 32'h80000000 : axi_ar_addr; // @[ysyx_25030077_arbiter.scala 106:33]
  assign io_axi_ar_strb_mem = _delay_cnt_T_2 ? 3'h0 : axi_ar_strb; // @[ysyx_25030077_arbiter.scala 120:33]
  assign io_axi_ar_valid_clint = _delay_cnt_T_2 & axi_ar_valid; // @[ysyx_25030077_arbiter.scala 114:34]
  assign io_axi_ar_addr_clint = _delay_cnt_T_2 ? axi_ar_addr : 32'h80000000; // @[ysyx_25030077_arbiter.scala 107:33]
  assign io_axi_ar_strb_clint = _delay_cnt_T_2 ? axi_ar_strb : 3'h0; // @[ysyx_25030077_arbiter.scala 121:33]
  assign io_axi_aw_valid_mem = _io_axi_aw_addr_mem_T ? 1'h0 : axi_aw_valid; // @[ysyx_25030077_arbiter.scala 103:32]
  assign io_axi_aw_addr_mem = axi_aw_addr == 32'ha00003f8 ? 32'h0 : axi_aw_addr; // @[ysyx_25030077_arbiter.scala 97:31]
  assign io_axi_w_valid_mem = _io_axi_aw_addr_mem_T ? 1'h0 : axi_aw_valid; // @[ysyx_25030077_arbiter.scala 126:31]
  assign io_axi_w_data_mem = _io_axi_aw_addr_mem_T ? 32'h0 : axi_w_data; // @[ysyx_25030077_arbiter.scala 132:30]
  assign io_axi_w_strb_mem = _io_axi_aw_addr_mem_T ? 3'h0 : axi_w_strb; // @[ysyx_25030077_arbiter.scala 138:30]
  assign io_axi_aw_valid_uart = _io_axi_aw_addr_mem_T & axi_aw_valid; // @[ysyx_25030077_arbiter.scala 104:32]
  assign io_axi_aw_addr_uart = _io_axi_aw_addr_mem_T ? 32'ha00003f8 : 32'h0; // @[ysyx_25030077_arbiter.scala 98:31]
  assign io_axi_w_valid_uart = _io_axi_aw_addr_mem_T & axi_aw_valid; // @[ysyx_25030077_arbiter.scala 127:31]
  assign io_axi_w_data_uart = _io_axi_aw_addr_mem_T ? axi_w_data : 32'h0; // @[ysyx_25030077_arbiter.scala 133:30]
  assign io_axi_w_strb_uart = _io_axi_aw_addr_mem_T ? axi_w_strb : 3'h0; // @[ysyx_25030077_arbiter.scala 139:30]
  assign io_axi_r_ready_mem = io_gpr_r_ready; // @[ysyx_25030077_arbiter.scala 142:27]
  assign io_axi_r_ready_clint = io_gpr_r_ready; // @[ysyx_25030077_arbiter.scala 141:27]
  assign io_axi_b_ready = io_gpr_b_ready; // @[ysyx_25030077_arbiter.scala 143:21]
  assign io_gpr_b_resp = _state_reg_T_13 ? io_axi_b_resp : 2'h0; // @[Mux.scala 101:16]
  assign io_gpr_r_valid = _state_reg_T_13 & axi_r_valid; // @[Mux.scala 101:16]
  assign io_gpr_b_valid = _state_reg_T_13 & io_axi_b_valid; // @[Mux.scala 101:16]
  assign io_gpr_data = _state_reg_T_13 ? axi_r_data : 32'h0; // @[Mux.scala 101:16]
  assign io_inst = inst_reg; // @[ysyx_25030077_arbiter.scala 161:21]
  assign io_ifu_ready = io_axi_ar_ready_mem; // @[ysyx_25030077_arbiter.scala 144:21]
  assign io_is_r = _axi_ar_addr_T_2 | _state_reg_T_3 & io_r_valid_lsu; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 73:28]
      state_reg <= 2'h0; // @[ysyx_25030077_arbiter.scala 73:28]
    end else if (_axi_ar_addr_T_2) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _state_reg_T_1};
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      if (io_r_valid_lsu) begin // @[Mux.scala 101:16]
        state_reg <= _state_reg_T_6;
      end else begin
        state_reg <= _state_reg_T_11;
      end
    end else if (_state_reg_T_13) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_15;
    end else begin
      state_reg <= 2'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 74:27]
      inst_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 74:27]
    end else if (_inst_reg_T_2) begin // @[Mux.scala 101:16]
      if (_delay_cnt_T_2) begin // @[ysyx_25030077_arbiter.scala 83:25]
        inst_reg <= io_axi_r_data_clint;
      end else begin
        inst_reg <= io_axi_r_data_mem;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  inst_reg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
