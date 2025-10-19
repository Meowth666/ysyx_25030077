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
  output [2:0]  io_axi_ar_strb,
  input         io_axi_ar_ready,
  output        io_axi_aw_valid,
  output [31:0] io_axi_aw_addr,
  input         io_axi_aw_ready,
  output        io_axi_w_valid,
  output [31:0] io_axi_w_data,
  output [2:0]  io_axi_w_strb,
  input         io_axi_w_ready,
  input         io_axi_r_valid,
  input  [31:0] io_axi_r_data,
  output        io_axi_r_ready,
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
  input         io_r_valid_lsu
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
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
  reg [1:0] state_reg; // @[ysyx_25030077_arbiter.scala 53:28]
  reg [31:0] inst_reg; // @[ysyx_25030077_arbiter.scala 54:27]
  reg  axi_r_valid_delay; // @[ysyx_25030077_arbiter.scala 55:36]
  wire [7:0] canAccept_lo = {canAccept_prng_io_out_7,canAccept_prng_io_out_6,canAccept_prng_io_out_5,
    canAccept_prng_io_out_4,canAccept_prng_io_out_3,canAccept_prng_io_out_2,canAccept_prng_io_out_1,
    canAccept_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _canAccept_T = {canAccept_prng_io_out_15,canAccept_prng_io_out_14,canAccept_prng_io_out_13,
    canAccept_prng_io_out_12,canAccept_prng_io_out_11,canAccept_prng_io_out_10,canAccept_prng_io_out_9,
    canAccept_prng_io_out_8,canAccept_lo}; // @[PRNG.scala 95:17]
  wire [32:0] _io_axi_ar_addr_T = io_rs1_data + io_imm; // @[ysyx_25030077_arbiter.scala 57:44]
  wire  _io_axi_ar_addr_T_2 = state_reg == 2'h0; // @[ysyx_25030077_arbiter.scala 58:42]
  wire  _state_reg_T_2 = io_axi_r_valid & io_axi_r_ready; // @[ysyx_25030077_arbiter.scala 62:60]
  wire  _state_reg_T_4 = state_reg == 2'h1; // @[ysyx_25030077_arbiter.scala 63:20]
  wire [1:0] _state_reg_T_9 = io_axi_r_valid & ~axi_r_valid_delay ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 64:71]
  wire  _state_reg_T_10 = ~io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 65:53]
  wire [1:0] _state_reg_T_11 = _state_reg_T_10 ? 2'h2 : 2'h0; // @[Mux.scala 101:16]
  wire  _state_reg_T_13 = state_reg == 2'h2; // @[ysyx_25030077_arbiter.scala 67:20]
  wire [1:0] _state_reg_T_15 = io_axi_r_valid & io_axi_ar_ready ? 2'h0 : 2'h2; // @[ysyx_25030077_arbiter.scala 67:35]
  wire [2:0] _io_axi_ar_strb_T_2 = _state_reg_T_4 ? io_r_mask : 3'h0; // @[Mux.scala 101:16]
  wire  _inst_reg_T_2 = io_axi_r_valid & _io_axi_ar_addr_T_2; // @[ysyx_25030077_arbiter.scala 111:55]
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
  assign io_axi_ar_valid = _io_axi_ar_addr_T_2 ? io_ifu_valid : _state_reg_T_4 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_ar_addr = _io_axi_ar_addr_T_2 ? io_pc : _io_axi_ar_addr_T[31:0]; // @[Mux.scala 101:16]
  assign io_axi_ar_strb = _io_axi_ar_addr_T_2 ? 3'h6 : _io_axi_ar_strb_T_2; // @[Mux.scala 101:16]
  assign io_axi_aw_valid = _state_reg_T_4 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_aw_addr = _state_reg_T_4 ? _io_axi_ar_addr_T[31:0] : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_w_valid = _state_reg_T_4 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_w_data = _state_reg_T_4 ? io_rs2_data : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_w_strb = _state_reg_T_4 ? io_w_mask : 3'h0; // @[Mux.scala 101:16]
  assign io_axi_r_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 56:29]
  assign io_axi_b_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 56:29]
  assign io_gpr_b_resp = _state_reg_T_13 ? io_axi_b_resp : 2'h0; // @[Mux.scala 101:16]
  assign io_gpr_r_valid = _state_reg_T_13 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_gpr_b_valid = _state_reg_T_13 & io_axi_b_valid; // @[Mux.scala 101:16]
  assign io_gpr_data = _state_reg_T_13 ? io_axi_r_data : 32'h0; // @[Mux.scala 101:16]
  assign io_inst = inst_reg; // @[ysyx_25030077_arbiter.scala 113:21]
  assign io_ifu_ready = _canAccept_T[0]; // @[ysyx_25030077_arbiter.scala 56:29]
  assign canAccept_prng_clock = clock;
  assign canAccept_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 53:28]
      state_reg <= 2'h0; // @[ysyx_25030077_arbiter.scala 53:28]
    end else if (_io_axi_ar_addr_T_2) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _state_reg_T_2};
    end else if (_state_reg_T_4) begin // @[Mux.scala 101:16]
      if (io_r_valid_lsu) begin // @[Mux.scala 101:16]
        state_reg <= _state_reg_T_9;
      end else begin
        state_reg <= _state_reg_T_11;
      end
    end else if (_state_reg_T_13) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_15;
    end else begin
      state_reg <= 2'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 54:27]
      inst_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 54:27]
    end else if (_inst_reg_T_2) begin // @[Mux.scala 101:16]
      inst_reg <= io_axi_r_data;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 55:36]
      axi_r_valid_delay <= 1'h0; // @[ysyx_25030077_arbiter.scala 55:36]
    end else begin
      axi_r_valid_delay <= io_axi_r_valid; // @[ysyx_25030077_arbiter.scala 60:23]
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
  axi_r_valid_delay = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
