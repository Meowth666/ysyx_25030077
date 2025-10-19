module MaxPeriodFibonacciLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1,
  output  io_out_2,
  output  io_out_3,
  output  io_out_4,
  output  io_out_5,
  output  io_out_6,
  output  io_out_7,
  output  io_out_8,
  output  io_out_9,
  output  io_out_10,
  output  io_out_11,
  output  io_out_12,
  output  io_out_13,
  output  io_out_14,
  output  io_out_15
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 55:49]
  reg  state_1; // @[PRNG.scala 55:49]
  reg  state_2; // @[PRNG.scala 55:49]
  reg  state_3; // @[PRNG.scala 55:49]
  reg  state_4; // @[PRNG.scala 55:49]
  reg  state_5; // @[PRNG.scala 55:49]
  reg  state_6; // @[PRNG.scala 55:49]
  reg  state_7; // @[PRNG.scala 55:49]
  reg  state_8; // @[PRNG.scala 55:49]
  reg  state_9; // @[PRNG.scala 55:49]
  reg  state_10; // @[PRNG.scala 55:49]
  reg  state_11; // @[PRNG.scala 55:49]
  reg  state_12; // @[PRNG.scala 55:49]
  reg  state_13; // @[PRNG.scala 55:49]
  reg  state_14; // @[PRNG.scala 55:49]
  reg  state_15; // @[PRNG.scala 55:49]
  wire  _T_2 = state_15 ^ state_13 ^ state_12 ^ state_10; // @[LFSR.scala 15:41]
  assign io_out_0 = state_0; // @[PRNG.scala 78:10]
  assign io_out_1 = state_1; // @[PRNG.scala 78:10]
  assign io_out_2 = state_2; // @[PRNG.scala 78:10]
  assign io_out_3 = state_3; // @[PRNG.scala 78:10]
  assign io_out_4 = state_4; // @[PRNG.scala 78:10]
  assign io_out_5 = state_5; // @[PRNG.scala 78:10]
  assign io_out_6 = state_6; // @[PRNG.scala 78:10]
  assign io_out_7 = state_7; // @[PRNG.scala 78:10]
  assign io_out_8 = state_8; // @[PRNG.scala 78:10]
  assign io_out_9 = state_9; // @[PRNG.scala 78:10]
  assign io_out_10 = state_10; // @[PRNG.scala 78:10]
  assign io_out_11 = state_11; // @[PRNG.scala 78:10]
  assign io_out_12 = state_12; // @[PRNG.scala 78:10]
  assign io_out_13 = state_13; // @[PRNG.scala 78:10]
  assign io_out_14 = state_14; // @[PRNG.scala 78:10]
  assign io_out_15 = state_15; // @[PRNG.scala 78:10]
  always @(posedge clock) begin
    state_0 <= reset | _T_2; // @[PRNG.scala 55:{49,49}]
    if (reset) begin // @[PRNG.scala 55:49]
      state_1 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_1 <= state_0;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_2 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_2 <= state_1;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_3 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_3 <= state_2;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_4 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_4 <= state_3;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_5 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_5 <= state_4;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_6 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_6 <= state_5;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_7 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_7 <= state_6;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_8 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_8 <= state_7;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_9 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_9 <= state_8;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_10 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_10 <= state_9;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_11 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_11 <= state_10;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_12 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_12 <= state_11;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_13 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_13 <= state_12;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_14 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_14 <= state_13;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_15 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_15 <= state_14;
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
  state_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  state_1 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  state_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state_3 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  state_4 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state_5 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  state_6 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  state_7 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  state_8 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  state_9 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  state_10 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  state_11 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  state_12 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  state_13 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  state_14 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  state_15 = _RAND_15[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_arbiter(
  input         clock,
  input         reset,
  input         io_ifu_valid,
  input  [31:0] io_pc,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [31:0] io_imm,
  input  [2:0]  io_r_mask,
  input  [2:0]  io_w_mask,
  output        io_axi_ar_valid,
  output [31:0] io_axi_ar_addr,
  input         io_axi_ar_ready,
  output [3:0]  io_axi_ar_id,
  output [7:0]  io_axi_ar_len,
  output [2:0]  io_axi_ar_size,
  output [1:0]  io_axi_ar_burst,
  output        io_axi_aw_valid,
  output [31:0] io_axi_aw_addr,
  input         io_axi_aw_ready,
  output [3:0]  io_axi_aw_id,
  output [7:0]  io_axi_aw_len,
  output [2:0]  io_axi_aw_size,
  output [1:0]  io_axi_aw_burst,
  output        io_axi_w_valid,
  output [31:0] io_axi_w_data,
  output [3:0]  io_axi_w_strb,
  input         io_axi_w_ready,
  output        io_axi_w_last,
  input         io_axi_r_valid,
  input  [31:0] io_axi_r_data,
  output        io_axi_r_ready,
  input  [1:0]  io_axi_r_resp,
  input  [3:0]  io_axi_r_id,
  input         io_axi_r_last,
  input         io_axi_b_valid,
  output        io_axi_b_ready,
  input  [1:0]  io_axi_b_resp,
  input  [3:0]  io_axi_b_id,
  output [1:0]  io_gpr_b_resp,
  output        io_gpr_r_valid,
  output        io_gpr_b_valid,
  input         io_gpr_r_ready,
  input         io_gpr_b_ready,
  output [31:0] io_gpr_data,
  output [31:0] io_inst,
  output        io_ifu_ready,
  input         io_r_valid_lsu
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire  canAccept_prng_clock; // @[PRNG.scala 91:22]
  wire  canAccept_prng_reset; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  canAccept_prng_io_out_15; // @[PRNG.scala 91:22]
  reg [1:0] state_reg; // @[ysyx_25030077_arbiter.scala 73:28]
  reg [31:0] inst_reg; // @[ysyx_25030077_arbiter.scala 74:27]
  wire [7:0] canAccept_lo = {canAccept_prng_io_out_7,canAccept_prng_io_out_6,canAccept_prng_io_out_5,
    canAccept_prng_io_out_4,canAccept_prng_io_out_3,canAccept_prng_io_out_2,canAccept_prng_io_out_1,
    canAccept_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _canAccept_T = {canAccept_prng_io_out_15,canAccept_prng_io_out_14,canAccept_prng_io_out_13,
    canAccept_prng_io_out_12,canAccept_prng_io_out_11,canAccept_prng_io_out_10,canAccept_prng_io_out_9,
    canAccept_prng_io_out_8,canAccept_lo}; // @[PRNG.scala 95:17]
  wire  canAccept = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 76:29]
  reg  validReg_aw1; // @[ysyx_25030077_arbiter.scala 77:31]
  reg  validReg_ar0; // @[ysyx_25030077_arbiter.scala 78:31]
  reg  validReg_ar1; // @[ysyx_25030077_arbiter.scala 79:31]
  reg  validReg_gpr; // @[ysyx_25030077_arbiter.scala 80:31]
  reg  validReg_w1; // @[ysyx_25030077_arbiter.scala 81:31]
  reg [31:0] rdata_reg; // @[ysyx_25030077_arbiter.scala 82:28]
  wire  _validReg_ar0_T_1 = io_axi_ar_ready ? 1'h0 : validReg_ar0; // @[ysyx_25030077_arbiter.scala 85:32]
  wire  _validReg_ar1_T = io_axi_r_valid & canAccept; // @[ysyx_25030077_arbiter.scala 86:42]
  wire  _validReg_ar1_T_1 = io_axi_ar_ready ? 1'h0 : validReg_ar1; // @[ysyx_25030077_arbiter.scala 87:32]
  wire  _validReg_aw1_T_1 = io_axi_aw_ready ? 1'h0 : validReg_aw1; // @[ysyx_25030077_arbiter.scala 89:32]
  wire  _validReg_w1_T_1 = io_axi_w_ready ? 1'h0 : validReg_w1; // @[ysyx_25030077_arbiter.scala 91:32]
  wire  _validReg_gpr_T = io_r_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 93:39]
  wire  _validReg_gpr_T_2 = io_gpr_r_ready ? 1'h0 : validReg_gpr; // @[ysyx_25030077_arbiter.scala 93:97]
  wire  _validReg_gpr_T_3 = _validReg_ar1_T | _validReg_gpr_T_2; // @[ysyx_25030077_arbiter.scala 93:54]
  wire  _validReg_gpr_T_4 = io_r_mask == 3'h0; // @[ysyx_25030077_arbiter.scala 94:39]
  wire  _validReg_gpr_T_5 = state_reg == 2'h2; // @[ysyx_25030077_arbiter.scala 94:66]
  wire  _validReg_gpr_T_8 = state_reg == 2'h2 & canAccept | _validReg_gpr_T_2; // @[ysyx_25030077_arbiter.scala 94:54]
  wire [32:0] _r_addr1_T = io_rs1_data + io_imm; // @[ysyx_25030077_arbiter.scala 96:32]
  wire [31:0] r_addr1 = _r_addr1_T[31:0]; // @[ysyx_25030077_arbiter.scala 96:42]
  wire  _io_axi_ar_addr_T = state_reg == 2'h1; // @[ysyx_25030077_arbiter.scala 98:42]
  wire  _io_axi_ar_addr_T_2 = state_reg == 2'h1 & io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 98:50]
  wire  _state_reg_T = state_reg == 2'h0; // @[ysyx_25030077_arbiter.scala 102:20]
  wire  _state_reg_T_4 = io_w_mask == 3'h0; // @[ysyx_25030077_arbiter.scala 104:67]
  wire  _state_reg_T_5 = io_r_valid_lsu & io_w_mask == 3'h0; // @[ysyx_25030077_arbiter.scala 104:53]
  wire [1:0] _state_reg_T_7 = _validReg_ar1_T ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 104:84]
  wire  _state_reg_T_8 = ~io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 105:54]
  wire  _state_reg_T_9 = io_w_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 105:81]
  wire  _state_reg_T_10 = ~io_r_valid_lsu & io_w_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 105:67]
  wire [1:0] _state_reg_T_11 = io_axi_aw_ready ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 105:97]
  wire  _state_reg_T_14 = _state_reg_T_8 & _state_reg_T_4; // @[ysyx_25030077_arbiter.scala 106:67]
  wire [1:0] _state_reg_T_15 = canAccept ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 106:97]
  wire [1:0] _state_reg_T_16 = _state_reg_T_14 ? _state_reg_T_15 : 2'h1; // @[Mux.scala 101:16]
  wire [1:0] _state_reg_T_17 = _state_reg_T_10 ? _state_reg_T_11 : _state_reg_T_16; // @[Mux.scala 101:16]
  wire [1:0] _state_reg_T_21 = validReg_gpr & io_gpr_r_ready ? 2'h0 : 2'h2; // @[ysyx_25030077_arbiter.scala 108:35]
  wire  _io_axi_aw_valid_T_2 = _io_axi_ar_addr_T & _state_reg_T_9; // @[ysyx_25030077_arbiter.scala 116:50]
  wire  _io_axi_ar_valid_T_3 = _io_axi_ar_addr_T & _validReg_gpr_T; // @[ysyx_25030077_arbiter.scala 120:49]
  wire  _w_data_T = io_w_mask == 3'h1; // @[ysyx_25030077_arbiter.scala 130:40]
  wire  _w_data_T_1 = io_w_mask == 3'h2; // @[ysyx_25030077_arbiter.scala 131:40]
  wire  _w_data_T_3 = ~r_addr1[1]; // @[ysyx_25030077_arbiter.scala 132:65]
  wire [31:0] _w_data_T_5 = {16'h0,io_rs2_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_9 = {io_rs2_data[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_10 = r_addr1[1] ? _w_data_T_9 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_11 = _w_data_T_3 ? _w_data_T_5 : _w_data_T_10; // @[Mux.scala 101:16]
  wire  _w_data_T_12 = io_w_mask == 3'h3; // @[ysyx_25030077_arbiter.scala 135:40]
  wire  _w_data_T_14 = r_addr1[1:0] == 2'h0; // @[ysyx_25030077_arbiter.scala 136:68]
  wire [31:0] _w_data_T_16 = {24'h0,io_rs2_data[7:0]}; // @[Cat.scala 31:58]
  wire  _w_data_T_18 = r_addr1[1:0] == 2'h1; // @[ysyx_25030077_arbiter.scala 137:68]
  wire [31:0] _w_data_T_20 = {16'h0,io_rs2_data[7:0],8'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_22 = r_addr1[1:0] == 2'h2; // @[ysyx_25030077_arbiter.scala 138:68]
  wire [31:0] _w_data_T_24 = {8'h0,io_rs2_data[7:0],16'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_26 = r_addr1[1:0] == 2'h3; // @[ysyx_25030077_arbiter.scala 139:68]
  wire [31:0] _w_data_T_28 = {io_rs2_data[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_29 = _w_data_T_26 ? _w_data_T_28 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_30 = _w_data_T_22 ? _w_data_T_24 : _w_data_T_29; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_31 = _w_data_T_18 ? _w_data_T_20 : _w_data_T_30; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_32 = _w_data_T_14 ? _w_data_T_16 : _w_data_T_31; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_33 = _w_data_T_12 ? _w_data_T_32 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_34 = _w_data_T_1 ? _w_data_T_11 : _w_data_T_33; // @[Mux.scala 101:16]
  wire [31:0] w_data = _w_data_T ? io_rs2_data : _w_data_T_34; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_6 = r_addr1[1] ? 4'hc : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_7 = _w_data_T_3 ? 4'h3 : _strb_T_6; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_17 = _w_data_T_26 ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_18 = _w_data_T_22 ? 4'h4 : _strb_T_17; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_19 = _w_data_T_18 ? 4'h2 : _strb_T_18; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_20 = _w_data_T_14 ? 4'h1 : _strb_T_19; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_21 = _w_data_T_12 ? _strb_T_20 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_22 = _w_data_T_1 ? _strb_T_7 : _strb_T_21; // @[Mux.scala 101:16]
  wire [3:0] strb = _w_data_T ? 4'hf : _strb_T_22; // @[Mux.scala 101:16]
  wire [1:0] wsize = _w_data_T ? 2'h2 : {{1'd0}, _w_data_T_1}; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_aw_size_T_1 = _io_axi_ar_addr_T ? wsize : 2'h0; // @[Mux.scala 101:16]
  wire  _rsize_T = io_r_mask == 3'h1; // @[ysyx_25030077_arbiter.scala 184:42]
  wire  _rsize_T_1 = io_r_mask == 3'h2; // @[ysyx_25030077_arbiter.scala 185:42]
  wire  _rsize_T_2 = io_r_mask == 3'h3; // @[ysyx_25030077_arbiter.scala 186:42]
  wire  _rsize_T_3 = io_r_mask == 3'h4; // @[ysyx_25030077_arbiter.scala 187:42]
  wire  _rsize_T_4 = io_r_mask == 3'h5; // @[ysyx_25030077_arbiter.scala 188:42]
  wire  _rsize_T_8 = _rsize_T_1 ? 1'h0 : _rsize_T_2 | _rsize_T_3; // @[Mux.scala 101:16]
  wire [1:0] rsize = _rsize_T ? 2'h2 : {{1'd0}, _rsize_T_8}; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_ar_size_T_4 = _io_axi_ar_valid_T_3 ? rsize : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_ar_size_T_5 = _state_reg_T ? 2'h2 : _io_axi_ar_size_T_4; // @[Mux.scala 101:16]
  wire  is_sram = io_axi_ar_addr >= 32'hf000000 & io_axi_ar_addr < 32'hf001fff; // @[ysyx_25030077_arbiter.scala 194:54]
  wire [31:0] _rdata_sram_T_5 = {24'h0,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_9 = {24'h0,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_13 = {24'h0,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_17 = {24'h0,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_18 = _w_data_T_26 ? _rdata_sram_T_17 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_19 = _w_data_T_22 ? _rdata_sram_T_13 : _rdata_sram_T_18; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_20 = _w_data_T_18 ? _rdata_sram_T_9 : _rdata_sram_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_21 = _w_data_T_14 ? _rdata_sram_T_5 : _rdata_sram_T_20; // @[Mux.scala 101:16]
  wire [15:0] _rdata_sram_T_27 = io_axi_r_data[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_29 = {_rdata_sram_T_27,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [15:0] _rdata_sram_T_34 = io_axi_r_data[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_36 = {_rdata_sram_T_34,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_37 = r_addr1[1] ? _rdata_sram_T_36 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_38 = _w_data_T_3 ? _rdata_sram_T_29 : _rdata_sram_T_37; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_43 = {16'h0,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_47 = {16'h0,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_48 = r_addr1[1] ? _rdata_sram_T_47 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_49 = _w_data_T_3 ? _rdata_sram_T_43 : _rdata_sram_T_48; // @[Mux.scala 101:16]
  wire [23:0] _rdata_sram_T_55 = io_axi_r_data[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_57 = {_rdata_sram_T_55,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_62 = io_axi_r_data[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_64 = {_rdata_sram_T_62,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_69 = io_axi_r_data[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_71 = {_rdata_sram_T_69,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_76 = io_axi_r_data[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_78 = {_rdata_sram_T_76,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_79 = _w_data_T_26 ? _rdata_sram_T_78 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_80 = _w_data_T_22 ? _rdata_sram_T_71 : _rdata_sram_T_79; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_81 = _w_data_T_18 ? _rdata_sram_T_64 : _rdata_sram_T_80; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_82 = _w_data_T_14 ? _rdata_sram_T_57 : _rdata_sram_T_81; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_83 = _rsize_T_4 ? _rdata_sram_T_82 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_84 = _rsize_T_3 ? _rdata_sram_T_49 : _rdata_sram_T_83; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_85 = _rsize_T_2 ? _rdata_sram_T_38 : _rdata_sram_T_84; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_86 = _rsize_T_1 ? _rdata_sram_T_21 : _rdata_sram_T_85; // @[Mux.scala 101:16]
  wire [31:0] rdata_sram = _rsize_T ? io_axi_r_data : _rdata_sram_T_86; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_19 = _rsize_T_4 ? _rdata_sram_T_57 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_20 = _rsize_T_3 ? _rdata_sram_T_43 : _rdata_mrom_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_21 = _rsize_T_2 ? _rdata_sram_T_29 : _rdata_mrom_T_20; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_22 = _rsize_T_1 ? _rdata_sram_T_5 : _rdata_mrom_T_21; // @[Mux.scala 101:16]
  wire [31:0] rdata_mrom = _rsize_T ? io_axi_r_data : _rdata_mrom_T_22; // @[Mux.scala 101:16]
  wire  _io_gpr_data_T_1 = io_r_valid_lsu & _validReg_gpr_T_5; // @[ysyx_25030077_arbiter.scala 233:47]
  wire  _inst_reg_T_2 = _validReg_ar1_T & _state_reg_T; // @[ysyx_25030077_arbiter.scala 236:62]
  MaxPeriodFibonacciLFSR canAccept_prng ( // @[PRNG.scala 91:22]
    .clock(canAccept_prng_clock),
    .reset(canAccept_prng_reset),
    .io_out_0(canAccept_prng_io_out_0),
    .io_out_1(canAccept_prng_io_out_1),
    .io_out_2(canAccept_prng_io_out_2),
    .io_out_3(canAccept_prng_io_out_3),
    .io_out_4(canAccept_prng_io_out_4),
    .io_out_5(canAccept_prng_io_out_5),
    .io_out_6(canAccept_prng_io_out_6),
    .io_out_7(canAccept_prng_io_out_7),
    .io_out_8(canAccept_prng_io_out_8),
    .io_out_9(canAccept_prng_io_out_9),
    .io_out_10(canAccept_prng_io_out_10),
    .io_out_11(canAccept_prng_io_out_11),
    .io_out_12(canAccept_prng_io_out_12),
    .io_out_13(canAccept_prng_io_out_13),
    .io_out_14(canAccept_prng_io_out_14),
    .io_out_15(canAccept_prng_io_out_15)
  );
  assign io_axi_ar_valid = _state_reg_T ? validReg_ar0 : _io_axi_ar_valid_T_3 & validReg_ar1; // @[Mux.scala 101:16]
  assign io_axi_ar_addr = _io_axi_ar_addr_T_2 ? r_addr1 : io_pc; // @[Mux.scala 101:16]
  assign io_axi_ar_id = 4'h0; // @[ysyx_25030077_arbiter.scala 67:18]
  assign io_axi_ar_len = 8'h0; // @[ysyx_25030077_arbiter.scala 68:19]
  assign io_axi_ar_size = {{1'd0}, _io_axi_ar_size_T_5}; // @[ysyx_25030077_arbiter.scala 190:21]
  assign io_axi_ar_burst = 2'h0; // @[ysyx_25030077_arbiter.scala 70:21]
  assign io_axi_aw_valid = _io_axi_aw_valid_T_2 & validReg_aw1; // @[Mux.scala 101:16]
  assign io_axi_aw_addr = _io_axi_ar_addr_T ? r_addr1 : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_aw_id = 4'h0; // @[ysyx_25030077_arbiter.scala 60:18]
  assign io_axi_aw_len = 8'h0; // @[ysyx_25030077_arbiter.scala 61:19]
  assign io_axi_aw_size = {{1'd0}, _io_axi_aw_size_T_1}; // @[ysyx_25030077_arbiter.scala 166:21]
  assign io_axi_aw_burst = 2'h0; // @[ysyx_25030077_arbiter.scala 63:21]
  assign io_axi_w_valid = _io_axi_aw_valid_T_2 & validReg_w1; // @[Mux.scala 101:16]
  assign io_axi_w_data = _io_axi_ar_addr_T ? w_data : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_w_strb = _io_axi_ar_addr_T ? strb : 4'h0; // @[Mux.scala 101:16]
  assign io_axi_w_last = 1'h1; // @[ysyx_25030077_arbiter.scala 65:19]
  assign io_axi_r_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 76:29]
  assign io_axi_b_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 76:29]
  assign io_gpr_b_resp = _validReg_gpr_T_5 ? io_axi_b_resp : 2'h0; // @[Mux.scala 101:16]
  assign io_gpr_r_valid = _validReg_gpr_T_5 & validReg_gpr; // @[Mux.scala 101:16]
  assign io_gpr_b_valid = _validReg_gpr_T_5 & validReg_gpr; // @[Mux.scala 101:16]
  assign io_gpr_data = _io_gpr_data_T_1 ? rdata_reg : 32'h0; // @[Mux.scala 101:16]
  assign io_inst = inst_reg; // @[ysyx_25030077_arbiter.scala 238:21]
  assign io_ifu_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 76:29]
  assign canAccept_prng_clock = clock;
  assign canAccept_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 73:28]
      state_reg <= 2'h0; // @[ysyx_25030077_arbiter.scala 73:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _validReg_ar1_T};
    end else if (_io_axi_ar_addr_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_5) begin // @[Mux.scala 101:16]
        state_reg <= _state_reg_T_7;
      end else begin
        state_reg <= _state_reg_T_17;
      end
    end else if (_validReg_gpr_T_5) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_21;
    end else begin
      state_reg <= 2'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 74:27]
      inst_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 74:27]
    end else if (_inst_reg_T_2) begin // @[Mux.scala 101:16]
      inst_reg <= io_axi_r_data;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 77:31]
      validReg_aw1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 77:31]
    end else begin
      validReg_aw1 <= _validReg_ar1_T | _validReg_aw1_T_1; // @[ysyx_25030077_arbiter.scala 88:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 78:31]
      validReg_ar0 <= 1'h0; // @[ysyx_25030077_arbiter.scala 78:31]
    end else begin
      validReg_ar0 <= io_ifu_valid & canAccept | _validReg_ar0_T_1; // @[ysyx_25030077_arbiter.scala 84:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 79:31]
      validReg_ar1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 79:31]
    end else begin
      validReg_ar1 <= io_axi_r_valid & canAccept | _validReg_ar1_T_1; // @[ysyx_25030077_arbiter.scala 86:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 80:31]
      validReg_gpr <= 1'h0; // @[ysyx_25030077_arbiter.scala 80:31]
    end else if (_validReg_gpr_T) begin // @[Mux.scala 101:16]
      validReg_gpr <= _validReg_gpr_T_3;
    end else if (_validReg_gpr_T_4) begin // @[Mux.scala 101:16]
      validReg_gpr <= _validReg_gpr_T_8;
    end else begin
      validReg_gpr <= 1'h1;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 81:31]
      validReg_w1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 81:31]
    end else begin
      validReg_w1 <= _validReg_ar1_T | _validReg_w1_T_1; // @[ysyx_25030077_arbiter.scala 90:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 82:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 82:28]
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (_validReg_ar1_T) begin // @[ysyx_25030077_arbiter.scala 229:62]
        if (is_sram) begin // @[ysyx_25030077_arbiter.scala 227:20]
          rdata_reg <= rdata_sram;
        end else begin
          rdata_reg <= rdata_mrom;
        end
      end
    end else begin
      rdata_reg <= 32'h0;
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
  _RAND_2 = {1{`RANDOM}};
  validReg_aw1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  validReg_ar0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  validReg_ar1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  validReg_gpr = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  validReg_w1 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  rdata_reg = _RAND_7[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
