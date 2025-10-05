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
module ysyx_25030077_gpr(
  input         clock,
  input         reset,
  output        io_mem_Req_ready,
  input         io_mem_Req_valid,
  output        io_b_ready,
  input         io_b_valid,
  input  [1:0]  io_gpr_b_resp,
  input  [31:0] io_pc_next,
  input  [4:0]  io_waddr_rd,
  input  [31:0] io_wdata_rd,
  input  [4:0]  io_raddr_rs1,
  output [31:0] io_rdata_rs1,
  input  [4:0]  io_raddr_rs2,
  output [31:0] io_rdata_rs2,
  input         io_ifu_Req_ready,
  output        io_ifu_Req_valid,
  output [31:0] io_ifu_Req_bits_addr
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
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
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
  reg [31:0] regs_0; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_1; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_2; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_3; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_4; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_5; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_6; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_7; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_8; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_9; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_10; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_11; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_12; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_13; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_14; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_15; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_16; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_17; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_18; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_19; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_20; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_21; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_22; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_23; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_24; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_25; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_26; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_27; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_28; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_29; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_30; // @[ysyx_25030077_gpr.scala 21:21]
  reg [31:0] regs_31; // @[ysyx_25030077_gpr.scala 21:21]
  reg  validReg; // @[ysyx_25030077_gpr.scala 22:25]
  wire [7:0] canAccept_lo = {canAccept_prng_io_out_7,canAccept_prng_io_out_6,canAccept_prng_io_out_5,
    canAccept_prng_io_out_4,canAccept_prng_io_out_3,canAccept_prng_io_out_2,canAccept_prng_io_out_1,
    canAccept_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _canAccept_T = {canAccept_prng_io_out_15,canAccept_prng_io_out_14,canAccept_prng_io_out_13,
    canAccept_prng_io_out_12,canAccept_prng_io_out_11,canAccept_prng_io_out_10,canAccept_prng_io_out_9,
    canAccept_prng_io_out_8,canAccept_lo}; // @[PRNG.scala 95:17]
  wire  canAccept = _canAccept_T[0]; // @[ysyx_25030077_gpr.scala 23:27]
  reg [31:0] pc_next_reg; // @[ysyx_25030077_gpr.scala 24:28]
  wire  _validReg_T = io_mem_Req_valid & canAccept; // @[ysyx_25030077_gpr.scala 27:36]
  wire  _validReg_T_1 = io_ifu_Req_ready ? 1'h0 : validReg; // @[ysyx_25030077_gpr.scala 28:20]
  wire [31:0] _GEN_1 = 5'h1 == io_raddr_rs1 ? regs_1 : regs_0; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_2 = 5'h2 == io_raddr_rs1 ? regs_2 : _GEN_1; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_3 = 5'h3 == io_raddr_rs1 ? regs_3 : _GEN_2; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_4 = 5'h4 == io_raddr_rs1 ? regs_4 : _GEN_3; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_5 = 5'h5 == io_raddr_rs1 ? regs_5 : _GEN_4; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_6 = 5'h6 == io_raddr_rs1 ? regs_6 : _GEN_5; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_7 = 5'h7 == io_raddr_rs1 ? regs_7 : _GEN_6; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_8 = 5'h8 == io_raddr_rs1 ? regs_8 : _GEN_7; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_9 = 5'h9 == io_raddr_rs1 ? regs_9 : _GEN_8; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_10 = 5'ha == io_raddr_rs1 ? regs_10 : _GEN_9; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_11 = 5'hb == io_raddr_rs1 ? regs_11 : _GEN_10; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_12 = 5'hc == io_raddr_rs1 ? regs_12 : _GEN_11; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_13 = 5'hd == io_raddr_rs1 ? regs_13 : _GEN_12; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_14 = 5'he == io_raddr_rs1 ? regs_14 : _GEN_13; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_15 = 5'hf == io_raddr_rs1 ? regs_15 : _GEN_14; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_16 = 5'h10 == io_raddr_rs1 ? regs_16 : _GEN_15; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_17 = 5'h11 == io_raddr_rs1 ? regs_17 : _GEN_16; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_18 = 5'h12 == io_raddr_rs1 ? regs_18 : _GEN_17; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_19 = 5'h13 == io_raddr_rs1 ? regs_19 : _GEN_18; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_20 = 5'h14 == io_raddr_rs1 ? regs_20 : _GEN_19; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_21 = 5'h15 == io_raddr_rs1 ? regs_21 : _GEN_20; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_22 = 5'h16 == io_raddr_rs1 ? regs_22 : _GEN_21; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_23 = 5'h17 == io_raddr_rs1 ? regs_23 : _GEN_22; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_24 = 5'h18 == io_raddr_rs1 ? regs_24 : _GEN_23; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_25 = 5'h19 == io_raddr_rs1 ? regs_25 : _GEN_24; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_26 = 5'h1a == io_raddr_rs1 ? regs_26 : _GEN_25; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_27 = 5'h1b == io_raddr_rs1 ? regs_27 : _GEN_26; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_28 = 5'h1c == io_raddr_rs1 ? regs_28 : _GEN_27; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_29 = 5'h1d == io_raddr_rs1 ? regs_29 : _GEN_28; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_30 = 5'h1e == io_raddr_rs1 ? regs_30 : _GEN_29; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  wire [31:0] _GEN_33 = 5'h1 == io_raddr_rs2 ? regs_1 : regs_0; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_34 = 5'h2 == io_raddr_rs2 ? regs_2 : _GEN_33; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_35 = 5'h3 == io_raddr_rs2 ? regs_3 : _GEN_34; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_36 = 5'h4 == io_raddr_rs2 ? regs_4 : _GEN_35; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_37 = 5'h5 == io_raddr_rs2 ? regs_5 : _GEN_36; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_38 = 5'h6 == io_raddr_rs2 ? regs_6 : _GEN_37; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_39 = 5'h7 == io_raddr_rs2 ? regs_7 : _GEN_38; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_40 = 5'h8 == io_raddr_rs2 ? regs_8 : _GEN_39; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_41 = 5'h9 == io_raddr_rs2 ? regs_9 : _GEN_40; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_42 = 5'ha == io_raddr_rs2 ? regs_10 : _GEN_41; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_43 = 5'hb == io_raddr_rs2 ? regs_11 : _GEN_42; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_44 = 5'hc == io_raddr_rs2 ? regs_12 : _GEN_43; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_45 = 5'hd == io_raddr_rs2 ? regs_13 : _GEN_44; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_46 = 5'he == io_raddr_rs2 ? regs_14 : _GEN_45; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_47 = 5'hf == io_raddr_rs2 ? regs_15 : _GEN_46; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_48 = 5'h10 == io_raddr_rs2 ? regs_16 : _GEN_47; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_49 = 5'h11 == io_raddr_rs2 ? regs_17 : _GEN_48; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_50 = 5'h12 == io_raddr_rs2 ? regs_18 : _GEN_49; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_51 = 5'h13 == io_raddr_rs2 ? regs_19 : _GEN_50; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_52 = 5'h14 == io_raddr_rs2 ? regs_20 : _GEN_51; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_53 = 5'h15 == io_raddr_rs2 ? regs_21 : _GEN_52; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_54 = 5'h16 == io_raddr_rs2 ? regs_22 : _GEN_53; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_55 = 5'h17 == io_raddr_rs2 ? regs_23 : _GEN_54; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_56 = 5'h18 == io_raddr_rs2 ? regs_24 : _GEN_55; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_57 = 5'h19 == io_raddr_rs2 ? regs_25 : _GEN_56; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_58 = 5'h1a == io_raddr_rs2 ? regs_26 : _GEN_57; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_59 = 5'h1b == io_raddr_rs2 ? regs_27 : _GEN_58; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_60 = 5'h1c == io_raddr_rs2 ? regs_28 : _GEN_59; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_61 = 5'h1d == io_raddr_rs2 ? regs_29 : _GEN_60; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_62 = 5'h1e == io_raddr_rs2 ? regs_30 : _GEN_61; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  wire [31:0] _GEN_65 = 5'h1 == io_waddr_rd ? regs_1 : regs_0; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_66 = 5'h2 == io_waddr_rd ? regs_2 : _GEN_65; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_67 = 5'h3 == io_waddr_rd ? regs_3 : _GEN_66; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_68 = 5'h4 == io_waddr_rd ? regs_4 : _GEN_67; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_69 = 5'h5 == io_waddr_rd ? regs_5 : _GEN_68; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_70 = 5'h6 == io_waddr_rd ? regs_6 : _GEN_69; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_71 = 5'h7 == io_waddr_rd ? regs_7 : _GEN_70; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_72 = 5'h8 == io_waddr_rd ? regs_8 : _GEN_71; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_73 = 5'h9 == io_waddr_rd ? regs_9 : _GEN_72; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_74 = 5'ha == io_waddr_rd ? regs_10 : _GEN_73; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_75 = 5'hb == io_waddr_rd ? regs_11 : _GEN_74; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_76 = 5'hc == io_waddr_rd ? regs_12 : _GEN_75; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_77 = 5'hd == io_waddr_rd ? regs_13 : _GEN_76; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_78 = 5'he == io_waddr_rd ? regs_14 : _GEN_77; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_79 = 5'hf == io_waddr_rd ? regs_15 : _GEN_78; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_80 = 5'h10 == io_waddr_rd ? regs_16 : _GEN_79; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_81 = 5'h11 == io_waddr_rd ? regs_17 : _GEN_80; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_82 = 5'h12 == io_waddr_rd ? regs_18 : _GEN_81; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_83 = 5'h13 == io_waddr_rd ? regs_19 : _GEN_82; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_84 = 5'h14 == io_waddr_rd ? regs_20 : _GEN_83; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_85 = 5'h15 == io_waddr_rd ? regs_21 : _GEN_84; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_86 = 5'h16 == io_waddr_rd ? regs_22 : _GEN_85; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_87 = 5'h17 == io_waddr_rd ? regs_23 : _GEN_86; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_88 = 5'h18 == io_waddr_rd ? regs_24 : _GEN_87; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_89 = 5'h19 == io_waddr_rd ? regs_25 : _GEN_88; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_90 = 5'h1a == io_waddr_rd ? regs_26 : _GEN_89; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_91 = 5'h1b == io_waddr_rd ? regs_27 : _GEN_90; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_92 = 5'h1c == io_waddr_rd ? regs_28 : _GEN_91; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_93 = 5'h1d == io_waddr_rd ? regs_29 : _GEN_92; // @[ysyx_25030077_gpr.scala 35:{27,27}]
  wire [31:0] _GEN_94 = 5'h1e == io_waddr_rd ? regs_30 : _GEN_93; // @[ysyx_25030077_gpr.scala 35:{27,27}]
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
  assign io_mem_Req_ready = _canAccept_T[0]; // @[ysyx_25030077_gpr.scala 23:27]
  assign io_b_ready = _canAccept_T[0]; // @[ysyx_25030077_gpr.scala 23:27]
  assign io_rdata_rs1 = 5'h1f == io_raddr_rs1 ? regs_31 : _GEN_30; // @[ysyx_25030077_gpr.scala 31:{16,16}]
  assign io_rdata_rs2 = 5'h1f == io_raddr_rs2 ? regs_31 : _GEN_62; // @[ysyx_25030077_gpr.scala 32:{16,16}]
  assign io_ifu_Req_valid = validReg; // @[ysyx_25030077_gpr.scala 37:20]
  assign io_ifu_Req_bits_addr = pc_next_reg; // @[ysyx_25030077_gpr.scala 33:24]
  assign canAccept_prng_clock = clock;
  assign canAccept_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_0 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h0 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_0 <= 32'h0;
        end else begin
          regs_0 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_0 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_0 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_1 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_1 <= 32'h0;
        end else begin
          regs_1 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_1 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_1 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_2 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h2 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_2 <= 32'h0;
        end else begin
          regs_2 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_2 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_2 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_3 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h3 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_3 <= 32'h0;
        end else begin
          regs_3 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_3 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_3 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_4 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h4 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_4 <= 32'h0;
        end else begin
          regs_4 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_4 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_4 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_5 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h5 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_5 <= 32'h0;
        end else begin
          regs_5 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_5 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_5 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_6 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h6 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_6 <= 32'h0;
        end else begin
          regs_6 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_6 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_6 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_7 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h7 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_7 <= 32'h0;
        end else begin
          regs_7 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_7 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_7 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_8 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h8 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_8 <= 32'h0;
        end else begin
          regs_8 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_8 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_8 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_9 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h9 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_9 <= 32'h0;
        end else begin
          regs_9 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_9 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_9 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_10 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'ha == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_10 <= 32'h0;
        end else begin
          regs_10 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_10 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_10 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_11 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'hb == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_11 <= 32'h0;
        end else begin
          regs_11 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_11 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_11 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_12 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'hc == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_12 <= 32'h0;
        end else begin
          regs_12 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_12 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_12 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_13 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'hd == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_13 <= 32'h0;
        end else begin
          regs_13 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_13 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_13 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_14 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'he == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_14 <= 32'h0;
        end else begin
          regs_14 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_14 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_14 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_15 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'hf == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_15 <= 32'h0;
        end else begin
          regs_15 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_15 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_15 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_16 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h10 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_16 <= 32'h0;
        end else begin
          regs_16 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_16 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_16 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_17 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h11 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_17 <= 32'h0;
        end else begin
          regs_17 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_17 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_17 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_18 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h12 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_18 <= 32'h0;
        end else begin
          regs_18 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_18 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_18 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_19 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h13 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_19 <= 32'h0;
        end else begin
          regs_19 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_19 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_19 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_20 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h14 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_20 <= 32'h0;
        end else begin
          regs_20 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_20 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_20 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_21 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h15 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_21 <= 32'h0;
        end else begin
          regs_21 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_21 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_21 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_22 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h16 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_22 <= 32'h0;
        end else begin
          regs_22 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_22 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_22 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_23 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h17 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_23 <= 32'h0;
        end else begin
          regs_23 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_23 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_23 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_24 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h18 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_24 <= 32'h0;
        end else begin
          regs_24 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_24 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_24 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_25 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h19 == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_25 <= 32'h0;
        end else begin
          regs_25 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_25 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_25 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_26 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1a == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_26 <= 32'h0;
        end else begin
          regs_26 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_26 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_26 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_27 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1b == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_27 <= 32'h0;
        end else begin
          regs_27 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_27 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_27 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_28 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1c == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_28 <= 32'h0;
        end else begin
          regs_28 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_28 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_28 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_29 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1d == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_29 <= 32'h0;
        end else begin
          regs_29 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_29 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_29 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_30 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1e == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_30 <= 32'h0;
        end else begin
          regs_30 <= io_wdata_rd;
        end
      end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_30 <= regs_31; // @[ysyx_25030077_gpr.scala 35:27]
      end else begin
        regs_30 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 21:21]
      regs_31 <= 32'h0; // @[ysyx_25030077_gpr.scala 21:21]
    end else if (5'h1f == io_waddr_rd) begin // @[ysyx_25030077_gpr.scala 35:21]
      if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 35:27]
        if (io_waddr_rd == 5'h0) begin // @[ysyx_25030077_gpr.scala 26:27]
          regs_31 <= 32'h0;
        end else begin
          regs_31 <= io_wdata_rd;
        end
      end else if (!(5'h1f == io_waddr_rd)) begin // @[ysyx_25030077_gpr.scala 35:27]
        regs_31 <= _GEN_94;
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 22:25]
      validReg <= 1'h0; // @[ysyx_25030077_gpr.scala 22:25]
    end else begin
      validReg <= io_mem_Req_valid & canAccept | _validReg_T_1; // @[ysyx_25030077_gpr.scala 27:12]
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 24:28]
      pc_next_reg <= 32'h80000000; // @[ysyx_25030077_gpr.scala 24:28]
    end else if (_validReg_T) begin // @[ysyx_25030077_gpr.scala 36:21]
      pc_next_reg <= io_pc_next;
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
  regs_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  regs_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  regs_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  regs_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  regs_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  regs_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  regs_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  regs_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  regs_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  regs_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  regs_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  regs_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  regs_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  regs_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  regs_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  regs_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  regs_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  regs_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  regs_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  regs_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  regs_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  regs_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  regs_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  regs_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  regs_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  regs_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  regs_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  regs_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  regs_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  regs_31 = _RAND_31[31:0];
  _RAND_32 = {1{`RANDOM}};
  validReg = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  pc_next_reg = _RAND_33[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
