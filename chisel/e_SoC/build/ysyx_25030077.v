module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [31:0] io_enq_bits_addr,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits_addr
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram_addr [0:0]; // @[Decoupled.scala 259:95]
  wire  ram_addr_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire  ram_addr_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_addr_MPORT_data; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_en; // @[Decoupled.scala 259:95]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 264:28]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
  assign ram_addr_io_deq_bits_MPORT_en = 1'h1;
  assign ram_addr_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_addr_io_deq_bits_MPORT_data = ram_addr[ram_addr_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_addr_MPORT_data = io_enq_bits_addr;
  assign ram_addr_MPORT_addr = 1'h0;
  assign ram_addr_MPORT_mask = 1'h1;
  assign ram_addr_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~maybe_full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits_addr = ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  always @(posedge clock) begin
    if (ram_addr_MPORT_en & ram_addr_MPORT_mask) begin
      ram_addr[ram_addr_MPORT_addr] <= ram_addr_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Decoupled.scala 262:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 262:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 279:27]
      maybe_full <= do_enq; // @[Decoupled.scala 280:16]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_addr[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  maybe_full = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_IFU(
  input         clock,
  input         reset,
  output        io_rd_Req_ready,
  input         io_rd_Req_valid,
  input  [31:0] io_rd_Req_bits_addr,
  input         io_ar_ready,
  output        io_ar_valid,
  output [31:0] io_ar_bits_addr
);
  wire  reqQ_clock; // @[Decoupled.scala 361:21]
  wire  reqQ_reset; // @[Decoupled.scala 361:21]
  wire  reqQ_io_enq_ready; // @[Decoupled.scala 361:21]
  wire  reqQ_io_enq_valid; // @[Decoupled.scala 361:21]
  wire [31:0] reqQ_io_enq_bits_addr; // @[Decoupled.scala 361:21]
  wire  reqQ_io_deq_ready; // @[Decoupled.scala 361:21]
  wire  reqQ_io_deq_valid; // @[Decoupled.scala 361:21]
  wire [31:0] reqQ_io_deq_bits_addr; // @[Decoupled.scala 361:21]
  Queue reqQ ( // @[Decoupled.scala 361:21]
    .clock(reqQ_clock),
    .reset(reqQ_reset),
    .io_enq_ready(reqQ_io_enq_ready),
    .io_enq_valid(reqQ_io_enq_valid),
    .io_enq_bits_addr(reqQ_io_enq_bits_addr),
    .io_deq_ready(reqQ_io_deq_ready),
    .io_deq_valid(reqQ_io_deq_valid),
    .io_deq_bits_addr(reqQ_io_deq_bits_addr)
  );
  assign io_rd_Req_ready = reqQ_io_enq_ready; // @[Decoupled.scala 365:17]
  assign io_ar_valid = reqQ_io_deq_valid; // @[ysyx_25030077_IFU.scala 13:15]
  assign io_ar_bits_addr = reqQ_io_deq_bits_addr; // @[ysyx_25030077_IFU.scala 14:19]
  assign reqQ_clock = clock;
  assign reqQ_reset = reset;
  assign reqQ_io_enq_valid = io_rd_Req_valid; // @[Decoupled.scala 363:22]
  assign reqQ_io_enq_bits_addr = io_rd_Req_bits_addr; // @[Decoupled.scala 364:21]
  assign reqQ_io_deq_ready = io_ar_ready; // @[ysyx_25030077_IFU.scala 15:14]
endmodule
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
module ysyx_25030077_IDU(
  input  [31:0] io_instruction,
  output [2:0]  io_imm_type,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [2:0]  io_data_control,
  output [3:0]  io_ALU_ctrl,
  output [3:0]  io_pc_next_type,
  output [2:0]  io_r_mask,
  output [2:0]  io_w_mask,
  output        io_r_valid
);
  wire [4:0] addi_Rs1 = io_instruction[19:15]; // @[ysyx_25030077_IDU.scala 30:32]
  wire [4:0] addi_Rd = io_instruction[11:7]; // @[ysyx_25030077_IDU.scala 31:32]
  wire [4:0] sltu_Rs2 = io_instruction[24:20]; // @[ysyx_25030077_IDU.scala 96:33]
  wire [9:0] _isaddi_T_2 = {io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  isaddi = _isaddi_T_2 == 10'h13; // @[ysyx_25030077_IDU.scala 294:64]
  wire  isxori = _isaddi_T_2 == 10'h213; // @[ysyx_25030077_IDU.scala 295:64]
  wire  isori = _isaddi_T_2 == 10'h313; // @[ysyx_25030077_IDU.scala 296:64]
  wire  isandi = _isaddi_T_2 == 10'h393; // @[ysyx_25030077_IDU.scala 297:64]
  wire [15:0] _issrai_T_3 = {io_instruction[31:26],io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  issrai = _issrai_T_3 == 16'h4293; // @[ysyx_25030077_IDU.scala 298:87]
  wire  issrli = _issrai_T_3 == 16'h293; // @[ysyx_25030077_IDU.scala 299:87]
  wire  isslli = _issrai_T_3 == 16'h93; // @[ysyx_25030077_IDU.scala 300:87]
  wire  issra = _issrai_T_3 == 16'h42b3; // @[ysyx_25030077_IDU.scala 301:87]
  wire  issrl = _issrai_T_3 == 16'h2b3; // @[ysyx_25030077_IDU.scala 302:87]
  wire  isbeq = _isaddi_T_2 == 10'h63; // @[ysyx_25030077_IDU.scala 303:64]
  wire  isbne = _isaddi_T_2 == 10'he3; // @[ysyx_25030077_IDU.scala 304:64]
  wire [16:0] _isadd_T_3 = {io_instruction[31:25],io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  isadd = _isadd_T_3 == 17'h33; // @[ysyx_25030077_IDU.scala 305:87]
  wire  isxor = _isadd_T_3 == 17'h233; // @[ysyx_25030077_IDU.scala 306:87]
  wire  isand = _isadd_T_3 == 17'h3b3; // @[ysyx_25030077_IDU.scala 307:87]
  wire  isor = _isadd_T_3 == 17'h333; // @[ysyx_25030077_IDU.scala 308:87]
  wire  issub = _isadd_T_3 == 17'h8033; // @[ysyx_25030077_IDU.scala 309:87]
  wire  islui = io_instruction[6:0] == 7'h37; // @[ysyx_25030077_IDU.scala 310:36]
  wire  isauipc = io_instruction[6:0] == 7'h17; // @[ysyx_25030077_IDU.scala 311:38]
  wire  isjal = io_instruction[6:0] == 7'h6f; // @[ysyx_25030077_IDU.scala 312:36]
  wire  isjalr = _isaddi_T_2 == 10'h67; // @[ysyx_25030077_IDU.scala 313:65]
  wire  issw = _isaddi_T_2 == 10'h123; // @[ysyx_25030077_IDU.scala 314:63]
  wire  isbge = _isaddi_T_2 == 10'h2e3; // @[ysyx_25030077_IDU.scala 315:63]
  wire  isblt = _isaddi_T_2 == 10'h263; // @[ysyx_25030077_IDU.scala 316:63]
  wire  isbltu = _isaddi_T_2 == 10'h363; // @[ysyx_25030077_IDU.scala 317:63]
  wire  isbgeu = _isaddi_T_2 == 10'h3e3; // @[ysyx_25030077_IDU.scala 318:63]
  wire  issb = _isaddi_T_2 == 10'h23; // @[ysyx_25030077_IDU.scala 319:63]
  wire  issh = _isaddi_T_2 == 10'ha3; // @[ysyx_25030077_IDU.scala 320:63]
  wire  islbu = _isaddi_T_2 == 10'h203; // @[ysyx_25030077_IDU.scala 321:63]
  wire  islb = _isaddi_T_2 == 10'h3; // @[ysyx_25030077_IDU.scala 322:63]
  wire  islw = _isaddi_T_2 == 10'h103; // @[ysyx_25030077_IDU.scala 323:63]
  wire  islh = _isaddi_T_2 == 10'h83; // @[ysyx_25030077_IDU.scala 324:63]
  wire  islhu = _isaddi_T_2 == 10'h283; // @[ysyx_25030077_IDU.scala 325:63]
  wire  issll = _isadd_T_3 == 17'hb3; // @[ysyx_25030077_IDU.scala 326:86]
  wire  isslt = _isadd_T_3 == 17'h133; // @[ysyx_25030077_IDU.scala 327:88]
  wire  issltu = _isadd_T_3 == 17'h1b3; // @[ysyx_25030077_IDU.scala 328:88]
  wire  issltiu = _isaddi_T_2 == 10'h193; // @[ysyx_25030077_IDU.scala 329:65]
  wire  isslti = _isaddi_T_2 == 10'h113; // @[ysyx_25030077_IDU.scala 330:65]
  wire  iscsrrw = _isaddi_T_2 == 10'hf3; // @[ysyx_25030077_IDU.scala 331:67]
  wire  iscsrrs = _isaddi_T_2 == 10'h173; // @[ysyx_25030077_IDU.scala 332:67]
  wire  isebreak = io_instruction == 32'h100073; // @[ysyx_25030077_IDU.scala 333:34]
  wire  isecall = io_instruction == 32'h73; // @[ysyx_25030077_IDU.scala 334:34]
  wire  ismret = io_instruction == 32'h30200073; // @[ysyx_25030077_IDU.scala 335:34]
  wire [2:0] _io_imm_type_T = islb ? 3'h1 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_1 = islbu ? 3'h1 : _io_imm_type_T; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_2 = islhu ? 3'h1 : _io_imm_type_T_1; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_3 = islh ? 3'h1 : _io_imm_type_T_2; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_4 = islw ? 3'h1 : _io_imm_type_T_3; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_5 = issh ? 3'h4 : _io_imm_type_T_4; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_6 = issb ? 3'h4 : _io_imm_type_T_5; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_7 = issw ? 3'h4 : _io_imm_type_T_6; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_8 = isjalr ? 3'h3 : _io_imm_type_T_7; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_9 = isjal ? 3'h3 : _io_imm_type_T_8; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_10 = isauipc ? 3'h2 : _io_imm_type_T_9; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_11 = islui ? 3'h2 : _io_imm_type_T_10; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_12 = isslti ? 3'h1 : _io_imm_type_T_11; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_13 = issltiu ? 3'h1 : _io_imm_type_T_12; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_14 = isslli ? 3'h5 : _io_imm_type_T_13; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_15 = issrli ? 3'h5 : _io_imm_type_T_14; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_16 = issrai ? 3'h5 : _io_imm_type_T_15; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_17 = iscsrrs ? 3'h6 : _io_imm_type_T_16; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_18 = iscsrrw ? 3'h6 : _io_imm_type_T_17; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_19 = isandi ? 3'h1 : _io_imm_type_T_18; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_20 = isori ? 3'h1 : _io_imm_type_T_19; // @[Mux.scala 101:16]
  wire [2:0] _io_imm_type_T_21 = isxori ? 3'h1 : _io_imm_type_T_20; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T = isslt ? addi_Rs1 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_1 = issltu ? addi_Rs1 : _io_rs1_T; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_2 = isbne ? addi_Rs1 : _io_rs1_T_1; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_3 = isbgeu ? addi_Rs1 : _io_rs1_T_2; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_4 = isbltu ? addi_Rs1 : _io_rs1_T_3; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_5 = isblt ? addi_Rs1 : _io_rs1_T_4; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_6 = isbge ? addi_Rs1 : _io_rs1_T_5; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_7 = isbeq ? addi_Rs1 : _io_rs1_T_6; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_8 = issub ? addi_Rs1 : _io_rs1_T_7; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_9 = isor ? addi_Rs1 : _io_rs1_T_8; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_10 = isxor ? addi_Rs1 : _io_rs1_T_9; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_11 = issrl ? addi_Rs1 : _io_rs1_T_10; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_12 = issra ? addi_Rs1 : _io_rs1_T_11; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_13 = issll ? addi_Rs1 : _io_rs1_T_12; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_14 = isand ? addi_Rs1 : _io_rs1_T_13; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_15 = isadd ? addi_Rs1 : _io_rs1_T_14; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_16 = islb ? addi_Rs1 : _io_rs1_T_15; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_17 = islbu ? addi_Rs1 : _io_rs1_T_16; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_18 = islhu ? addi_Rs1 : _io_rs1_T_17; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_19 = islh ? addi_Rs1 : _io_rs1_T_18; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_20 = islw ? addi_Rs1 : _io_rs1_T_19; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_21 = issh ? addi_Rs1 : _io_rs1_T_20; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_22 = issb ? addi_Rs1 : _io_rs1_T_21; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_23 = issw ? addi_Rs1 : _io_rs1_T_22; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_24 = isjalr ? addi_Rs1 : _io_rs1_T_23; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_25 = isslti ? addi_Rs1 : _io_rs1_T_24; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_26 = issltiu ? addi_Rs1 : _io_rs1_T_25; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_27 = isslli ? addi_Rs1 : _io_rs1_T_26; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_28 = issrli ? addi_Rs1 : _io_rs1_T_27; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_29 = issrai ? addi_Rs1 : _io_rs1_T_28; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_30 = iscsrrs ? addi_Rs1 : _io_rs1_T_29; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_31 = iscsrrw ? addi_Rs1 : _io_rs1_T_30; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_32 = isandi ? addi_Rs1 : _io_rs1_T_31; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_33 = isori ? addi_Rs1 : _io_rs1_T_32; // @[Mux.scala 101:16]
  wire [4:0] _io_rs1_T_34 = isxori ? addi_Rs1 : _io_rs1_T_33; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T = isslt ? sltu_Rs2 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_1 = issltu ? sltu_Rs2 : _io_rs2_T; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_2 = isbne ? sltu_Rs2 : _io_rs2_T_1; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_3 = isbgeu ? sltu_Rs2 : _io_rs2_T_2; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_4 = isbltu ? sltu_Rs2 : _io_rs2_T_3; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_5 = isblt ? sltu_Rs2 : _io_rs2_T_4; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_6 = isbge ? sltu_Rs2 : _io_rs2_T_5; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_7 = isbeq ? sltu_Rs2 : _io_rs2_T_6; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_8 = issub ? sltu_Rs2 : _io_rs2_T_7; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_9 = isor ? sltu_Rs2 : _io_rs2_T_8; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_10 = isxor ? sltu_Rs2 : _io_rs2_T_9; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_11 = issrl ? sltu_Rs2 : _io_rs2_T_10; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_12 = issra ? sltu_Rs2 : _io_rs2_T_11; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_13 = issll ? sltu_Rs2 : _io_rs2_T_12; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_14 = isand ? sltu_Rs2 : _io_rs2_T_13; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_15 = isadd ? sltu_Rs2 : _io_rs2_T_14; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_16 = issh ? sltu_Rs2 : _io_rs2_T_15; // @[Mux.scala 101:16]
  wire [4:0] _io_rs2_T_17 = issb ? sltu_Rs2 : _io_rs2_T_16; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T = isslt ? addi_Rd : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_1 = issltu ? addi_Rd : _io_rd_T; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_2 = issub ? addi_Rd : _io_rd_T_1; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_3 = isor ? addi_Rd : _io_rd_T_2; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_4 = isxor ? addi_Rd : _io_rd_T_3; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_5 = issrl ? addi_Rd : _io_rd_T_4; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_6 = issra ? addi_Rd : _io_rd_T_5; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_7 = issll ? addi_Rd : _io_rd_T_6; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_8 = isand ? addi_Rd : _io_rd_T_7; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_9 = isadd ? addi_Rd : _io_rd_T_8; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_10 = islb ? addi_Rd : _io_rd_T_9; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_11 = islbu ? addi_Rd : _io_rd_T_10; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_12 = islhu ? addi_Rd : _io_rd_T_11; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_13 = islh ? addi_Rd : _io_rd_T_12; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_14 = islw ? addi_Rd : _io_rd_T_13; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_15 = isjalr ? addi_Rd : _io_rd_T_14; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_16 = isjal ? addi_Rd : _io_rd_T_15; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_17 = isauipc ? addi_Rd : _io_rd_T_16; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_18 = islui ? addi_Rd : _io_rd_T_17; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_19 = isslti ? addi_Rd : _io_rd_T_18; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_20 = issltiu ? addi_Rd : _io_rd_T_19; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_21 = isslli ? addi_Rd : _io_rd_T_20; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_22 = issrli ? addi_Rd : _io_rd_T_21; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_23 = issrai ? addi_Rd : _io_rd_T_22; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_24 = iscsrrs ? addi_Rd : _io_rd_T_23; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_25 = iscsrrw ? addi_Rd : _io_rd_T_24; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_26 = isandi ? addi_Rd : _io_rd_T_25; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_27 = isori ? addi_Rd : _io_rd_T_26; // @[Mux.scala 101:16]
  wire [4:0] _io_rd_T_28 = isxori ? addi_Rd : _io_rd_T_27; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T = issltu ? 5'h2 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_1 = isslt ? 5'ha : _io_ALU_ctrl_T; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_2 = isbne ? 5'h0 : _io_ALU_ctrl_T_1; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_3 = isbgeu ? 5'h0 : _io_ALU_ctrl_T_2; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_4 = isbltu ? 5'h0 : _io_ALU_ctrl_T_3; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_5 = isblt ? 5'h0 : _io_ALU_ctrl_T_4; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_6 = isbge ? 5'h0 : _io_ALU_ctrl_T_5; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_7 = isbeq ? 5'h0 : _io_ALU_ctrl_T_6; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_8 = issub ? 5'h1 : _io_ALU_ctrl_T_7; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_9 = isor ? 5'h3 : _io_ALU_ctrl_T_8; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_10 = isxor ? 5'h4 : _io_ALU_ctrl_T_9; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_11 = issrl ? 5'h9 : _io_ALU_ctrl_T_10; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_12 = issra ? 5'h5 : _io_ALU_ctrl_T_11; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_13 = issll ? 5'h8 : _io_ALU_ctrl_T_12; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_14 = isand ? 5'h6 : _io_ALU_ctrl_T_13; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_15 = isadd ? 5'h0 : _io_ALU_ctrl_T_14; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_16 = islb ? 5'h0 : _io_ALU_ctrl_T_15; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_17 = islbu ? 5'h0 : _io_ALU_ctrl_T_16; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_18 = islhu ? 5'h0 : _io_ALU_ctrl_T_17; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_19 = islh ? 5'h0 : _io_ALU_ctrl_T_18; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_20 = islw ? 5'h0 : _io_ALU_ctrl_T_19; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_21 = issh ? 5'h0 : _io_ALU_ctrl_T_20; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_22 = issb ? 5'h0 : _io_ALU_ctrl_T_21; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_23 = issw ? 5'h0 : _io_ALU_ctrl_T_22; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_24 = isjalr ? 5'h0 : _io_ALU_ctrl_T_23; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_25 = isjal ? 5'h0 : _io_ALU_ctrl_T_24; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_26 = isauipc ? 5'h0 : _io_ALU_ctrl_T_25; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_27 = islui ? 5'h0 : _io_ALU_ctrl_T_26; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_28 = isslti ? 5'ha : _io_ALU_ctrl_T_27; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_29 = issltiu ? 5'h2 : _io_ALU_ctrl_T_28; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_30 = isslli ? 5'h8 : _io_ALU_ctrl_T_29; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_31 = issrli ? 5'h9 : _io_ALU_ctrl_T_30; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_32 = issrai ? 5'h5 : _io_ALU_ctrl_T_31; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_33 = iscsrrs ? 5'hc : _io_ALU_ctrl_T_32; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_34 = iscsrrw ? 5'hb : _io_ALU_ctrl_T_33; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_35 = isandi ? 5'h6 : _io_ALU_ctrl_T_34; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_36 = isori ? 5'h3 : _io_ALU_ctrl_T_35; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_37 = isxori ? 5'h4 : _io_ALU_ctrl_T_36; // @[Mux.scala 101:16]
  wire [4:0] _io_ALU_ctrl_T_38 = isaddi ? 5'h0 : _io_ALU_ctrl_T_37; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T = issltu ? 3'h3 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_1 = isslt ? 3'h3 : _io_data_control_T; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_2 = isbne ? 3'h0 : _io_data_control_T_1; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_3 = isbgeu ? 3'h0 : _io_data_control_T_2; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_4 = isbltu ? 3'h0 : _io_data_control_T_3; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_5 = isblt ? 3'h0 : _io_data_control_T_4; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_6 = isbge ? 3'h0 : _io_data_control_T_5; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_7 = isbeq ? 3'h0 : _io_data_control_T_6; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_8 = issub ? 3'h3 : _io_data_control_T_7; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_9 = isor ? 3'h3 : _io_data_control_T_8; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_10 = isxor ? 3'h3 : _io_data_control_T_9; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_11 = issrl ? 3'h3 : _io_data_control_T_10; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_12 = issra ? 3'h3 : _io_data_control_T_11; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_13 = issll ? 3'h3 : _io_data_control_T_12; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_14 = isand ? 3'h3 : _io_data_control_T_13; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_15 = isadd ? 3'h3 : _io_data_control_T_14; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_16 = islb ? 3'h2 : _io_data_control_T_15; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_17 = islbu ? 3'h2 : _io_data_control_T_16; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_18 = islhu ? 3'h2 : _io_data_control_T_17; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_19 = islh ? 3'h2 : _io_data_control_T_18; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_20 = islw ? 3'h2 : _io_data_control_T_19; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_21 = issh ? 3'h0 : _io_data_control_T_20; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_22 = issb ? 3'h0 : _io_data_control_T_21; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_23 = issw ? 3'h0 : _io_data_control_T_22; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_24 = isjalr ? 3'h1 : _io_data_control_T_23; // @[Mux.scala 101:16]
  wire [2:0] _io_data_control_T_25 = isjal ? 3'h1 : _io_data_control_T_24; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T = isslti ? 4'h0 : 4'h3; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_1 = issltiu ? 4'h0 : _io_pc_next_type_T; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_2 = isslt ? 4'h0 : _io_pc_next_type_T_1; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_3 = issltu ? 4'h0 : _io_pc_next_type_T_2; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_4 = isbne ? 4'h5 : _io_pc_next_type_T_3; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_5 = isbgeu ? 4'h8 : _io_pc_next_type_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_6 = isbltu ? 4'ha : _io_pc_next_type_T_5; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_7 = isblt ? 4'h9 : _io_pc_next_type_T_6; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_8 = isbge ? 4'h7 : _io_pc_next_type_T_7; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_9 = isbeq ? 4'h6 : _io_pc_next_type_T_8; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_10 = issub ? 4'h0 : _io_pc_next_type_T_9; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_11 = isor ? 4'h0 : _io_pc_next_type_T_10; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_12 = isxor ? 4'h0 : _io_pc_next_type_T_11; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_13 = issrl ? 4'h0 : _io_pc_next_type_T_12; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_14 = issra ? 4'h0 : _io_pc_next_type_T_13; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_15 = issll ? 4'h0 : _io_pc_next_type_T_14; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_16 = isand ? 4'h0 : _io_pc_next_type_T_15; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_17 = isadd ? 4'h0 : _io_pc_next_type_T_16; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_18 = islb ? 4'h0 : _io_pc_next_type_T_17; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_19 = islbu ? 4'h0 : _io_pc_next_type_T_18; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_20 = islhu ? 4'h0 : _io_pc_next_type_T_19; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_21 = islh ? 4'h0 : _io_pc_next_type_T_20; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_22 = islw ? 4'h0 : _io_pc_next_type_T_21; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_23 = ismret ? 4'hc : _io_pc_next_type_T_22; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_24 = isecall ? 4'hb : _io_pc_next_type_T_23; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_25 = isebreak ? 4'h4 : _io_pc_next_type_T_24; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_26 = issh ? 4'h0 : _io_pc_next_type_T_25; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_27 = issb ? 4'h0 : _io_pc_next_type_T_26; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_28 = issw ? 4'h0 : _io_pc_next_type_T_27; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_29 = isslli ? 4'h0 : _io_pc_next_type_T_28; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_30 = issrli ? 4'h0 : _io_pc_next_type_T_29; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_31 = issrai ? 4'h0 : _io_pc_next_type_T_30; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_32 = iscsrrs ? 4'h0 : _io_pc_next_type_T_31; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_33 = iscsrrw ? 4'h0 : _io_pc_next_type_T_32; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_34 = isandi ? 4'h0 : _io_pc_next_type_T_33; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_35 = isori ? 4'h0 : _io_pc_next_type_T_34; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_36 = isxori ? 4'h0 : _io_pc_next_type_T_35; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_37 = isaddi ? 4'h0 : _io_pc_next_type_T_36; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_38 = islui ? 4'h0 : _io_pc_next_type_T_37; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_39 = isauipc ? 4'h0 : _io_pc_next_type_T_38; // @[Mux.scala 101:16]
  wire [3:0] _io_pc_next_type_T_40 = isjalr ? 4'h2 : _io_pc_next_type_T_39; // @[Mux.scala 101:16]
  wire [2:0] _io_r_mask_T = islb ? 3'h5 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _io_r_mask_T_1 = islbu ? 3'h2 : _io_r_mask_T; // @[Mux.scala 101:16]
  wire [2:0] _io_r_mask_T_2 = islhu ? 3'h4 : _io_r_mask_T_1; // @[Mux.scala 101:16]
  wire [2:0] _io_r_mask_T_3 = islh ? 3'h3 : _io_r_mask_T_2; // @[Mux.scala 101:16]
  wire [2:0] _io_w_mask_T = issh ? 3'h2 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _io_w_mask_T_1 = issb ? 3'h3 : _io_w_mask_T; // @[Mux.scala 101:16]
  assign io_imm_type = isaddi ? 3'h1 : _io_imm_type_T_21; // @[Mux.scala 101:16]
  assign io_rs1 = isaddi ? addi_Rs1 : _io_rs1_T_34; // @[Mux.scala 101:16]
  assign io_rs2 = issw ? sltu_Rs2 : _io_rs2_T_17; // @[Mux.scala 101:16]
  assign io_rd = isaddi ? addi_Rd : _io_rd_T_28; // @[Mux.scala 101:16]
  assign io_data_control = isauipc ? 3'h1 : _io_data_control_T_25; // @[Mux.scala 101:16]
  assign io_ALU_ctrl = _io_ALU_ctrl_T_38[3:0]; // @[ysyx_25030077_IDU.scala 458:15]
  assign io_pc_next_type = isjal ? 4'h1 : _io_pc_next_type_T_40; // @[Mux.scala 101:16]
  assign io_r_mask = islw ? 3'h1 : _io_r_mask_T_3; // @[Mux.scala 101:16]
  assign io_w_mask = issw ? 3'h1 : _io_w_mask_T_1; // @[Mux.scala 101:16]
  assign io_r_valid = islw | (islh | (islhu | (islbu | islb))); // @[Mux.scala 101:16]
endmodule
module ysyx_25030077_imm(
  input  [31:0] io_instruction,
  input  [2:0]  io_imm_type,
  output [31:0] io_imm
);
  wire [19:0] _Imm_type1_T_2 = io_instruction[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 74:12]
  wire [31:0] Imm_type1 = {_Imm_type1_T_2,io_instruction[31:20]}; // @[Cat.scala 31:58]
  wire [31:0] Imm_type2 = {io_instruction[31:12],12'h0}; // @[Cat.scala 31:58]
  wire [31:0] Imm_type4 = {_Imm_type1_T_2,io_instruction[31:25],io_instruction[11:7]}; // @[Cat.scala 31:58]
  wire [31:0] Imm_type5 = {27'h0,io_instruction[24:20]}; // @[Cat.scala 31:58]
  wire [31:0] Imm_type6 = {20'h0,io_instruction[31:20]}; // @[Cat.scala 31:58]
  wire  is_type1 = io_imm_type == 3'h1; // @[ysyx_25030077_imm.scala 21:31]
  wire  is_type2 = io_imm_type == 3'h2; // @[ysyx_25030077_imm.scala 22:31]
  wire  is_type3 = io_imm_type == 3'h3; // @[ysyx_25030077_imm.scala 23:31]
  wire  is_type4 = io_imm_type == 3'h4; // @[ysyx_25030077_imm.scala 24:31]
  wire  is_type5 = io_imm_type == 3'h5; // @[ysyx_25030077_imm.scala 25:31]
  wire  is_type6 = io_imm_type == 3'h6; // @[ysyx_25030077_imm.scala 26:31]
  wire [31:0] _io_imm_T = is_type6 ? Imm_type6 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_imm_T_1 = is_type5 ? Imm_type5 : _io_imm_T; // @[Mux.scala 101:16]
  wire [31:0] _io_imm_T_2 = is_type4 ? Imm_type4 : _io_imm_T_1; // @[Mux.scala 101:16]
  wire [31:0] _io_imm_T_3 = is_type3 ? 32'h4 : _io_imm_T_2; // @[Mux.scala 101:16]
  wire [31:0] _io_imm_T_4 = is_type2 ? Imm_type2 : _io_imm_T_3; // @[Mux.scala 101:16]
  assign io_imm = is_type1 ? Imm_type1 : _io_imm_T_4; // @[Mux.scala 101:16]
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
module ysyx_25030077_data_control(
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
module ysyx_25030077_alu(
  input  [31:0] io_in_a,
  input  [31:0] io_in_b,
  input  [3:0]  io_sw,
  output [31:0] io_out
);
  wire [15:0] oneHot = 16'h1 << io_sw; // @[OneHot.scala 64:12]
  wire [32:0] add33 = io_in_a + io_in_b; // @[ysyx_25030077_alu.scala 18:25]
  wire [32:0] sub33 = io_in_a - io_in_b; // @[ysyx_25030077_alu.scala 19:25]
  wire [31:0] and32 = io_in_a & io_in_b; // @[ysyx_25030077_alu.scala 20:25]
  wire [31:0] or32 = io_in_a | io_in_b; // @[ysyx_25030077_alu.scala 21:25]
  wire [31:0] xor32 = io_in_a ^ io_in_b; // @[ysyx_25030077_alu.scala 22:25]
  wire [31:0] srai32 = $signed(io_in_a) >>> io_in_b[4:0]; // @[ysyx_25030077_alu.scala 23:49]
  wire [31:0] srli32 = io_in_a >> io_in_b[4:0]; // @[ysyx_25030077_alu.scala 24:25]
  wire [62:0] _GEN_3 = {{31'd0}, io_in_a}; // @[ysyx_25030077_alu.scala 25:25]
  wire [62:0] sll32 = _GEN_3 << io_in_b[4:0]; // @[ysyx_25030077_alu.scala 25:25]
  wire  sltiu_b = io_in_a < io_in_b; // @[ysyx_25030077_alu.scala 26:26]
  wire  slt_b = $signed(io_in_a) < $signed(io_in_b); // @[ysyx_25030077_alu.scala 27:33]
  wire [32:0] _out33_T_3 = {32'h0,sltiu_b}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_5 = {1'h0,or32}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_7 = {1'h0,xor32}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_9 = {1'h0,srai32}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_11 = {1'h0,and32}; // @[Cat.scala 31:58]
  wire [63:0] _out33_T_14 = {1'h0,sll32}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_16 = {1'h0,srli32}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_18 = {32'h0,slt_b}; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_24 = oneHot[0] ? add33 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_25 = oneHot[1] ? sub33 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_26 = oneHot[2] ? _out33_T_3 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_27 = oneHot[3] ? _out33_T_5 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_28 = oneHot[4] ? _out33_T_7 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_29 = oneHot[5] ? _out33_T_9 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_30 = oneHot[6] ? _out33_T_11 : 33'h0; // @[Mux.scala 27:73]
  wire [63:0] _out33_T_32 = oneHot[8] ? _out33_T_14 : 64'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_33 = oneHot[9] ? _out33_T_16 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_34 = oneHot[10] ? _out33_T_18 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_40 = _out33_T_24 | _out33_T_25; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_41 = _out33_T_40 | _out33_T_26; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_42 = _out33_T_41 | _out33_T_27; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_43 = _out33_T_42 | _out33_T_28; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_44 = _out33_T_43 | _out33_T_29; // @[Mux.scala 27:73]
  wire [32:0] _out33_T_45 = _out33_T_44 | _out33_T_30; // @[Mux.scala 27:73]
  wire [63:0] _GEN_0 = {{31'd0}, _out33_T_45}; // @[Mux.scala 27:73]
  wire [63:0] _out33_T_47 = _GEN_0 | _out33_T_32; // @[Mux.scala 27:73]
  wire [63:0] _GEN_1 = {{31'd0}, _out33_T_33}; // @[Mux.scala 27:73]
  wire [63:0] _out33_T_48 = _out33_T_47 | _GEN_1; // @[Mux.scala 27:73]
  wire [63:0] _GEN_2 = {{31'd0}, _out33_T_34}; // @[Mux.scala 27:73]
  wire [63:0] out33 = _out33_T_48 | _GEN_2; // @[Mux.scala 27:73]
  assign io_out = out33[31:0]; // @[ysyx_25030077_alu.scala 54:20]
endmodule
module ysyx_25030077_pc_next(
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [31:0] io_instruction,
  input  [3:0]  io_pc_next_type,
  input  [31:0] io_pc_count,
  output [31:0] io_pc_next,
  output        io_is_unknown_instruction
);
  wire [31:0] default_pc_next = io_pc_count + 32'h4; // @[ysyx_25030077_pc_next.scala 15:37]
  wire  is_type1 = io_pc_next_type == 4'h1; // @[ysyx_25030077_pc_next.scala 18:34]
  wire  is_type2 = io_pc_next_type == 4'h2; // @[ysyx_25030077_pc_next.scala 19:34]
  wire  is_type4 = io_pc_next_type == 4'h4; // @[ysyx_25030077_pc_next.scala 21:34]
  wire  is_type5 = io_pc_next_type == 4'h5; // @[ysyx_25030077_pc_next.scala 22:34]
  wire  is_type6 = io_pc_next_type == 4'h6; // @[ysyx_25030077_pc_next.scala 23:34]
  wire  is_type7 = io_pc_next_type == 4'h7; // @[ysyx_25030077_pc_next.scala 24:34]
  wire  is_type8 = io_pc_next_type == 4'h8; // @[ysyx_25030077_pc_next.scala 25:34]
  wire  is_type9 = io_pc_next_type == 4'h9; // @[ysyx_25030077_pc_next.scala 26:34]
  wire  is_type10 = io_pc_next_type == 4'ha; // @[ysyx_25030077_pc_next.scala 27:34]
  wire  is_eql = io_rs1_data == io_rs2_data; // @[ysyx_25030077_pc_next.scala 29:28]
  wire  is_more_equ = $signed(io_rs1_data) >= $signed(io_rs2_data); // @[ysyx_25030077_pc_next.scala 30:40]
  wire  is_less = $signed(io_rs1_data) < $signed(io_rs2_data); // @[ysyx_25030077_pc_next.scala 31:36]
  wire  is_more_equ_u = io_rs1_data >= io_rs2_data; // @[ysyx_25030077_pc_next.scala 32:35]
  wire  is_less_u = io_rs1_data < io_rs2_data; // @[ysyx_25030077_pc_next.scala 33:31]
  wire [18:0] _beq_result_T_2 = io_instruction[31] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _beq_result_T_7 = {_beq_result_T_2,io_instruction[31],io_instruction[7],io_instruction[30:25],
    io_instruction[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _beq_result_T_9 = io_pc_count + _beq_result_T_7; // @[ysyx_25030077_pc_next.scala 37:28]
  wire [31:0] beq_result = is_eql ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] bge_result = is_more_equ ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] blt_result = is_less ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] bltu_result = is_less_u ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] bgeu_result = is_more_equ_u ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire  _bne_result_T = ~is_eql; // @[ysyx_25030077_pc_next.scala 57:5]
  wire [31:0] bne_result = _bne_result_T ? _beq_result_T_9 : default_pc_next; // @[Mux.scala 101:16]
  wire [10:0] _io_pc_next_T_2 = io_instruction[31] ? 11'h7ff : 11'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_pc_next_T_7 = {_io_pc_next_T_2,io_instruction[31],io_instruction[19:12],io_instruction[20],
    io_instruction[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _io_pc_next_T_9 = io_pc_count + _io_pc_next_T_7; // @[ysyx_25030077_pc_next.scala 61:30]
  wire [19:0] _io_pc_next_T_12 = io_instruction[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_pc_next_T_14 = {_io_pc_next_T_12,io_instruction[31:20]}; // @[Cat.scala 31:58]
  wire [31:0] _io_pc_next_T_16 = io_rs1_data + _io_pc_next_T_14; // @[ysyx_25030077_pc_next.scala 62:31]
  wire [31:0] _io_pc_next_T_18 = _io_pc_next_T_16 & 32'hfffffffe; // @[ysyx_25030077_pc_next.scala 62:94]
  wire [31:0] _io_pc_next_T_19 = is_type10 ? bltu_result : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_20 = is_type9 ? blt_result : _io_pc_next_T_19; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_21 = is_type8 ? bgeu_result : _io_pc_next_T_20; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_22 = is_type7 ? bge_result : _io_pc_next_T_21; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_23 = is_type5 ? bne_result : _io_pc_next_T_22; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_24 = is_type6 ? beq_result : _io_pc_next_T_23; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_25 = is_type4 ? io_pc_count : _io_pc_next_T_24; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_26 = is_type2 ? _io_pc_next_T_18 : _io_pc_next_T_25; // @[Mux.scala 101:16]
  assign io_pc_next = is_type1 ? _io_pc_next_T_9 : _io_pc_next_T_26; // @[Mux.scala 101:16]
  assign io_is_unknown_instruction = io_pc_next_type == 4'h3; // @[ysyx_25030077_pc_next.scala 20:34]
endmodule
module ysyx_25030077(
  input         clock,
  input         reset,
  input         io_interrupt,
  input         io_master_awready,
  output        io_master_awvalid,
  output [31:0] io_master_awaddr,
  output [3:0]  io_master_awid,
  output [7:0]  io_master_awlen,
  output [2:0]  io_master_awsize,
  output [1:0]  io_master_awburst,
  input         io_master_wready,
  output        io_master_wvalid,
  output [31:0] io_master_wdata,
  output [3:0]  io_master_wstrb,
  output        io_master_wlast,
  output        io_master_bready,
  input         io_master_bvalid,
  input  [3:0]  io_master_bid,
  input  [1:0]  io_master_bresp,
  input         io_master_arready,
  output        io_master_arvalid,
  output [31:0] io_master_araddr,
  output [3:0]  io_master_arid,
  output [7:0]  io_master_arlen,
  output [2:0]  io_master_arsize,
  output [1:0]  io_master_arburst,
  output        io_master_rready,
  input         io_master_rvalid,
  input  [31:0] io_master_rdata,
  input  [3:0]  io_master_rid,
  input         io_master_rlast,
  input  [1:0]  io_master_rresp,
  output        io_master_arlock,
  output [3:0]  io_master_arcache,
  output [2:0]  io_master_arprot,
  output [3:0]  io_master_arqos,
  output        io_master_awlock,
  output [3:0]  io_master_awcache,
  output [2:0]  io_master_awprot,
  output [3:0]  io_master_awqos,
  input         io_slave_arlock,
  input  [3:0]  io_slave_arcache,
  input  [2:0]  io_slave_arprot,
  input  [3:0]  io_slave_arqos,
  input         io_slave_awlock,
  input  [3:0]  io_slave_awcache,
  input  [2:0]  io_slave_awprot,
  input  [3:0]  io_slave_awqos,
  output        io_slave_awready,
  input         io_slave_awvalid,
  input  [31:0] io_slave_awaddr,
  input  [3:0]  io_slave_awid,
  input  [7:0]  io_slave_awlen,
  input  [2:0]  io_slave_awsize,
  input  [1:0]  io_slave_awburst,
  output        io_slave_wready,
  input         io_slave_wvalid,
  input  [31:0] io_slave_wdata,
  input  [3:0]  io_slave_wstrb,
  input         io_slave_wlast,
  input         io_slave_bready,
  output        io_slave_bvalid,
  output [3:0]  io_slave_bid,
  output [1:0]  io_slave_bresp,
  output        io_slave_arready,
  input         io_slave_arvalid,
  input  [31:0] io_slave_araddr,
  input  [3:0]  io_slave_arid,
  input  [7:0]  io_slave_arlen,
  input  [2:0]  io_slave_arsize,
  input  [1:0]  io_slave_arburst,
  input         io_slave_rready,
  output        io_slave_rvalid,
  output [31:0] io_slave_rdata,
  output [3:0]  io_slave_rid,
  output        io_slave_rlast,
  output [1:0]  io_slave_rresp
);
  wire  b_ifu_clock; // @[ysyx_25030077.scala 109:22]
  wire  b_ifu_reset; // @[ysyx_25030077.scala 109:22]
  wire  b_ifu_io_rd_Req_ready; // @[ysyx_25030077.scala 109:22]
  wire  b_ifu_io_rd_Req_valid; // @[ysyx_25030077.scala 109:22]
  wire [31:0] b_ifu_io_rd_Req_bits_addr; // @[ysyx_25030077.scala 109:22]
  wire  b_ifu_io_ar_ready; // @[ysyx_25030077.scala 109:22]
  wire  b_ifu_io_ar_valid; // @[ysyx_25030077.scala 109:22]
  wire [31:0] b_ifu_io_ar_bits_addr; // @[ysyx_25030077.scala 109:22]
  wire  c_arbiter_clock; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_reset; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_ifu_valid; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_pc; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_rs1_data; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_rs2_data; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_imm; // @[ysyx_25030077.scala 110:25]
  wire [2:0] c_arbiter_io_r_mask; // @[ysyx_25030077.scala 110:25]
  wire [2:0] c_arbiter_io_w_mask; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_ar_valid; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_axi_ar_addr; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_ar_ready; // @[ysyx_25030077.scala 110:25]
  wire [3:0] c_arbiter_io_axi_ar_id; // @[ysyx_25030077.scala 110:25]
  wire [7:0] c_arbiter_io_axi_ar_len; // @[ysyx_25030077.scala 110:25]
  wire [2:0] c_arbiter_io_axi_ar_size; // @[ysyx_25030077.scala 110:25]
  wire [1:0] c_arbiter_io_axi_ar_burst; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_aw_valid; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_axi_aw_addr; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_aw_ready; // @[ysyx_25030077.scala 110:25]
  wire [3:0] c_arbiter_io_axi_aw_id; // @[ysyx_25030077.scala 110:25]
  wire [7:0] c_arbiter_io_axi_aw_len; // @[ysyx_25030077.scala 110:25]
  wire [2:0] c_arbiter_io_axi_aw_size; // @[ysyx_25030077.scala 110:25]
  wire [1:0] c_arbiter_io_axi_aw_burst; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_w_valid; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_axi_w_data; // @[ysyx_25030077.scala 110:25]
  wire [3:0] c_arbiter_io_axi_w_strb; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_w_ready; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_w_last; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_r_valid; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_axi_r_data; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_r_ready; // @[ysyx_25030077.scala 110:25]
  wire [1:0] c_arbiter_io_axi_r_resp; // @[ysyx_25030077.scala 110:25]
  wire [3:0] c_arbiter_io_axi_r_id; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_r_last; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_b_valid; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_axi_b_ready; // @[ysyx_25030077.scala 110:25]
  wire [1:0] c_arbiter_io_axi_b_resp; // @[ysyx_25030077.scala 110:25]
  wire [3:0] c_arbiter_io_axi_b_id; // @[ysyx_25030077.scala 110:25]
  wire [1:0] c_arbiter_io_gpr_b_resp; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_gpr_r_valid; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_gpr_b_valid; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_gpr_r_ready; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_gpr_b_ready; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_gpr_data; // @[ysyx_25030077.scala 110:25]
  wire [31:0] c_arbiter_io_inst; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_ifu_ready; // @[ysyx_25030077.scala 110:25]
  wire  c_arbiter_io_r_valid_lsu; // @[ysyx_25030077.scala 110:25]
  wire [31:0] d_idu_io_instruction; // @[ysyx_25030077.scala 111:21]
  wire [2:0] d_idu_io_imm_type; // @[ysyx_25030077.scala 111:21]
  wire [4:0] d_idu_io_rs1; // @[ysyx_25030077.scala 111:21]
  wire [4:0] d_idu_io_rs2; // @[ysyx_25030077.scala 111:21]
  wire [4:0] d_idu_io_rd; // @[ysyx_25030077.scala 111:21]
  wire [2:0] d_idu_io_data_control; // @[ysyx_25030077.scala 111:21]
  wire [3:0] d_idu_io_ALU_ctrl; // @[ysyx_25030077.scala 111:21]
  wire [3:0] d_idu_io_pc_next_type; // @[ysyx_25030077.scala 111:21]
  wire [2:0] d_idu_io_r_mask; // @[ysyx_25030077.scala 111:21]
  wire [2:0] d_idu_io_w_mask; // @[ysyx_25030077.scala 111:21]
  wire  d_idu_io_r_valid; // @[ysyx_25030077.scala 111:21]
  wire [31:0] e_imm_io_instruction; // @[ysyx_25030077.scala 112:21]
  wire [2:0] e_imm_io_imm_type; // @[ysyx_25030077.scala 112:21]
  wire [31:0] e_imm_io_imm; // @[ysyx_25030077.scala 112:21]
  wire  f_gpr_clock; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_reset; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_mem_Req_ready; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_mem_Req_valid; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_b_ready; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_b_valid; // @[ysyx_25030077.scala 113:21]
  wire [1:0] f_gpr_io_gpr_b_resp; // @[ysyx_25030077.scala 113:21]
  wire [31:0] f_gpr_io_pc_next; // @[ysyx_25030077.scala 113:21]
  wire [4:0] f_gpr_io_waddr_rd; // @[ysyx_25030077.scala 113:21]
  wire [31:0] f_gpr_io_wdata_rd; // @[ysyx_25030077.scala 113:21]
  wire [4:0] f_gpr_io_raddr_rs1; // @[ysyx_25030077.scala 113:21]
  wire [31:0] f_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 113:21]
  wire [4:0] f_gpr_io_raddr_rs2; // @[ysyx_25030077.scala 113:21]
  wire [31:0] f_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_ifu_Req_ready; // @[ysyx_25030077.scala 113:21]
  wire  f_gpr_io_ifu_Req_valid; // @[ysyx_25030077.scala 113:21]
  wire [31:0] f_gpr_io_ifu_Req_bits_addr; // @[ysyx_25030077.scala 113:21]
  wire [31:0] h_data_control_io_rs1_data; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_rs2_data; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_imm; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_mem_data; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_pc_count; // @[ysyx_25030077.scala 114:30]
  wire [2:0] h_data_control_io_data_control; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_data_1; // @[ysyx_25030077.scala 114:30]
  wire [31:0] h_data_control_io_data_2; // @[ysyx_25030077.scala 114:30]
  wire [31:0] i_alu_io_in_a; // @[ysyx_25030077.scala 115:21]
  wire [31:0] i_alu_io_in_b; // @[ysyx_25030077.scala 115:21]
  wire [3:0] i_alu_io_sw; // @[ysyx_25030077.scala 115:21]
  wire [31:0] i_alu_io_out; // @[ysyx_25030077.scala 115:21]
  wire [31:0] j_pc_next_io_rs1_data; // @[ysyx_25030077.scala 116:25]
  wire [31:0] j_pc_next_io_rs2_data; // @[ysyx_25030077.scala 116:25]
  wire [31:0] j_pc_next_io_instruction; // @[ysyx_25030077.scala 116:25]
  wire [3:0] j_pc_next_io_pc_next_type; // @[ysyx_25030077.scala 116:25]
  wire [31:0] j_pc_next_io_pc_count; // @[ysyx_25030077.scala 116:25]
  wire [31:0] j_pc_next_io_pc_next; // @[ysyx_25030077.scala 116:25]
  wire  j_pc_next_io_is_unknown_instruction; // @[ysyx_25030077.scala 116:25]
  ysyx_25030077_IFU b_ifu ( // @[ysyx_25030077.scala 109:22]
    .clock(b_ifu_clock),
    .reset(b_ifu_reset),
    .io_rd_Req_ready(b_ifu_io_rd_Req_ready),
    .io_rd_Req_valid(b_ifu_io_rd_Req_valid),
    .io_rd_Req_bits_addr(b_ifu_io_rd_Req_bits_addr),
    .io_ar_ready(b_ifu_io_ar_ready),
    .io_ar_valid(b_ifu_io_ar_valid),
    .io_ar_bits_addr(b_ifu_io_ar_bits_addr)
  );
  ysyx_25030077_arbiter c_arbiter ( // @[ysyx_25030077.scala 110:25]
    .clock(c_arbiter_clock),
    .reset(c_arbiter_reset),
    .io_ifu_valid(c_arbiter_io_ifu_valid),
    .io_pc(c_arbiter_io_pc),
    .io_rs1_data(c_arbiter_io_rs1_data),
    .io_rs2_data(c_arbiter_io_rs2_data),
    .io_imm(c_arbiter_io_imm),
    .io_r_mask(c_arbiter_io_r_mask),
    .io_w_mask(c_arbiter_io_w_mask),
    .io_axi_ar_valid(c_arbiter_io_axi_ar_valid),
    .io_axi_ar_addr(c_arbiter_io_axi_ar_addr),
    .io_axi_ar_ready(c_arbiter_io_axi_ar_ready),
    .io_axi_ar_id(c_arbiter_io_axi_ar_id),
    .io_axi_ar_len(c_arbiter_io_axi_ar_len),
    .io_axi_ar_size(c_arbiter_io_axi_ar_size),
    .io_axi_ar_burst(c_arbiter_io_axi_ar_burst),
    .io_axi_aw_valid(c_arbiter_io_axi_aw_valid),
    .io_axi_aw_addr(c_arbiter_io_axi_aw_addr),
    .io_axi_aw_ready(c_arbiter_io_axi_aw_ready),
    .io_axi_aw_id(c_arbiter_io_axi_aw_id),
    .io_axi_aw_len(c_arbiter_io_axi_aw_len),
    .io_axi_aw_size(c_arbiter_io_axi_aw_size),
    .io_axi_aw_burst(c_arbiter_io_axi_aw_burst),
    .io_axi_w_valid(c_arbiter_io_axi_w_valid),
    .io_axi_w_data(c_arbiter_io_axi_w_data),
    .io_axi_w_strb(c_arbiter_io_axi_w_strb),
    .io_axi_w_ready(c_arbiter_io_axi_w_ready),
    .io_axi_w_last(c_arbiter_io_axi_w_last),
    .io_axi_r_valid(c_arbiter_io_axi_r_valid),
    .io_axi_r_data(c_arbiter_io_axi_r_data),
    .io_axi_r_ready(c_arbiter_io_axi_r_ready),
    .io_axi_r_resp(c_arbiter_io_axi_r_resp),
    .io_axi_r_id(c_arbiter_io_axi_r_id),
    .io_axi_r_last(c_arbiter_io_axi_r_last),
    .io_axi_b_valid(c_arbiter_io_axi_b_valid),
    .io_axi_b_ready(c_arbiter_io_axi_b_ready),
    .io_axi_b_resp(c_arbiter_io_axi_b_resp),
    .io_axi_b_id(c_arbiter_io_axi_b_id),
    .io_gpr_b_resp(c_arbiter_io_gpr_b_resp),
    .io_gpr_r_valid(c_arbiter_io_gpr_r_valid),
    .io_gpr_b_valid(c_arbiter_io_gpr_b_valid),
    .io_gpr_r_ready(c_arbiter_io_gpr_r_ready),
    .io_gpr_b_ready(c_arbiter_io_gpr_b_ready),
    .io_gpr_data(c_arbiter_io_gpr_data),
    .io_inst(c_arbiter_io_inst),
    .io_ifu_ready(c_arbiter_io_ifu_ready),
    .io_r_valid_lsu(c_arbiter_io_r_valid_lsu)
  );
  ysyx_25030077_IDU d_idu ( // @[ysyx_25030077.scala 111:21]
    .io_instruction(d_idu_io_instruction),
    .io_imm_type(d_idu_io_imm_type),
    .io_rs1(d_idu_io_rs1),
    .io_rs2(d_idu_io_rs2),
    .io_rd(d_idu_io_rd),
    .io_data_control(d_idu_io_data_control),
    .io_ALU_ctrl(d_idu_io_ALU_ctrl),
    .io_pc_next_type(d_idu_io_pc_next_type),
    .io_r_mask(d_idu_io_r_mask),
    .io_w_mask(d_idu_io_w_mask),
    .io_r_valid(d_idu_io_r_valid)
  );
  ysyx_25030077_imm e_imm ( // @[ysyx_25030077.scala 112:21]
    .io_instruction(e_imm_io_instruction),
    .io_imm_type(e_imm_io_imm_type),
    .io_imm(e_imm_io_imm)
  );
  ysyx_25030077_gpr f_gpr ( // @[ysyx_25030077.scala 113:21]
    .clock(f_gpr_clock),
    .reset(f_gpr_reset),
    .io_mem_Req_ready(f_gpr_io_mem_Req_ready),
    .io_mem_Req_valid(f_gpr_io_mem_Req_valid),
    .io_b_ready(f_gpr_io_b_ready),
    .io_b_valid(f_gpr_io_b_valid),
    .io_gpr_b_resp(f_gpr_io_gpr_b_resp),
    .io_pc_next(f_gpr_io_pc_next),
    .io_waddr_rd(f_gpr_io_waddr_rd),
    .io_wdata_rd(f_gpr_io_wdata_rd),
    .io_raddr_rs1(f_gpr_io_raddr_rs1),
    .io_rdata_rs1(f_gpr_io_rdata_rs1),
    .io_raddr_rs2(f_gpr_io_raddr_rs2),
    .io_rdata_rs2(f_gpr_io_rdata_rs2),
    .io_ifu_Req_ready(f_gpr_io_ifu_Req_ready),
    .io_ifu_Req_valid(f_gpr_io_ifu_Req_valid),
    .io_ifu_Req_bits_addr(f_gpr_io_ifu_Req_bits_addr)
  );
  ysyx_25030077_data_control h_data_control ( // @[ysyx_25030077.scala 114:30]
    .io_rs1_data(h_data_control_io_rs1_data),
    .io_rs2_data(h_data_control_io_rs2_data),
    .io_imm(h_data_control_io_imm),
    .io_mem_data(h_data_control_io_mem_data),
    .io_pc_count(h_data_control_io_pc_count),
    .io_data_control(h_data_control_io_data_control),
    .io_data_1(h_data_control_io_data_1),
    .io_data_2(h_data_control_io_data_2)
  );
  ysyx_25030077_alu i_alu ( // @[ysyx_25030077.scala 115:21]
    .io_in_a(i_alu_io_in_a),
    .io_in_b(i_alu_io_in_b),
    .io_sw(i_alu_io_sw),
    .io_out(i_alu_io_out)
  );
  ysyx_25030077_pc_next j_pc_next ( // @[ysyx_25030077.scala 116:25]
    .io_rs1_data(j_pc_next_io_rs1_data),
    .io_rs2_data(j_pc_next_io_rs2_data),
    .io_instruction(j_pc_next_io_instruction),
    .io_pc_next_type(j_pc_next_io_pc_next_type),
    .io_pc_count(j_pc_next_io_pc_count),
    .io_pc_next(j_pc_next_io_pc_next),
    .io_is_unknown_instruction(j_pc_next_io_is_unknown_instruction)
  );
  assign io_master_awvalid = c_arbiter_io_axi_aw_valid; // @[ysyx_25030077.scala 175:21]
  assign io_master_awaddr = c_arbiter_io_axi_aw_addr; // @[ysyx_25030077.scala 176:20]
  assign io_master_awid = c_arbiter_io_axi_aw_id; // @[ysyx_25030077.scala 177:18]
  assign io_master_awlen = c_arbiter_io_axi_aw_len; // @[ysyx_25030077.scala 178:19]
  assign io_master_awsize = c_arbiter_io_axi_aw_size; // @[ysyx_25030077.scala 179:20]
  assign io_master_awburst = c_arbiter_io_axi_aw_burst; // @[ysyx_25030077.scala 180:21]
  assign io_master_wvalid = c_arbiter_io_axi_w_valid; // @[ysyx_25030077.scala 181:20]
  assign io_master_wdata = c_arbiter_io_axi_w_data; // @[ysyx_25030077.scala 182:19]
  assign io_master_wstrb = c_arbiter_io_axi_w_strb; // @[ysyx_25030077.scala 183:19]
  assign io_master_wlast = c_arbiter_io_axi_w_last; // @[ysyx_25030077.scala 184:19]
  assign io_master_bready = c_arbiter_io_axi_b_ready; // @[ysyx_25030077.scala 185:20]
  assign io_master_arvalid = c_arbiter_io_axi_ar_valid; // @[ysyx_25030077.scala 186:21]
  assign io_master_araddr = c_arbiter_io_axi_ar_addr; // @[ysyx_25030077.scala 187:20]
  assign io_master_arid = c_arbiter_io_axi_ar_id; // @[ysyx_25030077.scala 188:18]
  assign io_master_arlen = c_arbiter_io_axi_ar_len; // @[ysyx_25030077.scala 189:19]
  assign io_master_arsize = c_arbiter_io_axi_ar_size; // @[ysyx_25030077.scala 190:20]
  assign io_master_arburst = c_arbiter_io_axi_ar_burst; // @[ysyx_25030077.scala 191:21]
  assign io_master_rready = c_arbiter_io_axi_r_ready; // @[ysyx_25030077.scala 192:20]
  assign io_master_arlock = 1'h0; // @[ysyx_25030077.scala 88:20]
  assign io_master_arcache = 4'h0; // @[ysyx_25030077.scala 89:21]
  assign io_master_arprot = 3'h0; // @[ysyx_25030077.scala 90:20]
  assign io_master_arqos = 4'h0; // @[ysyx_25030077.scala 91:19]
  assign io_master_awlock = 1'h0; // @[ysyx_25030077.scala 92:20]
  assign io_master_awcache = 4'h0; // @[ysyx_25030077.scala 93:21]
  assign io_master_awprot = 3'h0; // @[ysyx_25030077.scala 94:20]
  assign io_master_awqos = 4'h0; // @[ysyx_25030077.scala 95:19]
  assign io_slave_awready = 1'h0; // @[ysyx_25030077.scala 96:20]
  assign io_slave_wready = 1'h0; // @[ysyx_25030077.scala 97:19]
  assign io_slave_bvalid = 1'h0; // @[ysyx_25030077.scala 98:19]
  assign io_slave_bid = 4'h0; // @[ysyx_25030077.scala 99:16]
  assign io_slave_bresp = 2'h0; // @[ysyx_25030077.scala 100:18]
  assign io_slave_arready = 1'h0; // @[ysyx_25030077.scala 101:20]
  assign io_slave_rvalid = 1'h0; // @[ysyx_25030077.scala 102:19]
  assign io_slave_rdata = 32'h0; // @[ysyx_25030077.scala 103:18]
  assign io_slave_rid = 4'h0; // @[ysyx_25030077.scala 104:16]
  assign io_slave_rlast = 1'h0; // @[ysyx_25030077.scala 105:18]
  assign io_slave_rresp = 2'h0; // @[ysyx_25030077.scala 106:18]
  assign b_ifu_clock = clock;
  assign b_ifu_reset = reset;
  assign b_ifu_io_rd_Req_valid = f_gpr_io_ifu_Req_valid; // @[ysyx_25030077.scala 144:20]
  assign b_ifu_io_rd_Req_bits_addr = f_gpr_io_ifu_Req_bits_addr; // @[ysyx_25030077.scala 144:20]
  assign b_ifu_io_ar_ready = c_arbiter_io_ifu_ready; // @[ysyx_25030077.scala 118:21]
  assign c_arbiter_clock = clock;
  assign c_arbiter_reset = reset;
  assign c_arbiter_io_ifu_valid = b_ifu_io_ar_valid; // @[ysyx_25030077.scala 120:26]
  assign c_arbiter_io_pc = b_ifu_io_ar_bits_addr; // @[ysyx_25030077.scala 121:19]
  assign c_arbiter_io_rs1_data = f_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 122:25]
  assign c_arbiter_io_rs2_data = f_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 123:25]
  assign c_arbiter_io_imm = e_imm_io_imm; // @[ysyx_25030077.scala 124:20]
  assign c_arbiter_io_r_mask = d_idu_io_r_mask; // @[ysyx_25030077.scala 125:23]
  assign c_arbiter_io_w_mask = d_idu_io_w_mask; // @[ysyx_25030077.scala 126:23]
  assign c_arbiter_io_axi_ar_ready = io_master_arready; // @[ysyx_25030077.scala 127:29]
  assign c_arbiter_io_axi_aw_ready = io_master_awready; // @[ysyx_25030077.scala 128:29]
  assign c_arbiter_io_axi_w_ready = io_master_wready; // @[ysyx_25030077.scala 129:28]
  assign c_arbiter_io_axi_r_valid = io_master_rvalid; // @[ysyx_25030077.scala 130:28]
  assign c_arbiter_io_axi_r_data = io_master_rdata; // @[ysyx_25030077.scala 131:27]
  assign c_arbiter_io_axi_r_resp = io_master_rresp; // @[ysyx_25030077.scala 132:27]
  assign c_arbiter_io_axi_r_id = io_master_rid; // @[ysyx_25030077.scala 133:25]
  assign c_arbiter_io_axi_r_last = io_master_rlast; // @[ysyx_25030077.scala 134:27]
  assign c_arbiter_io_axi_b_valid = io_master_bvalid; // @[ysyx_25030077.scala 135:28]
  assign c_arbiter_io_axi_b_resp = io_master_bresp; // @[ysyx_25030077.scala 136:27]
  assign c_arbiter_io_axi_b_id = io_master_bid; // @[ysyx_25030077.scala 137:25]
  assign c_arbiter_io_gpr_r_ready = f_gpr_io_mem_Req_ready; // @[ysyx_25030077.scala 139:28]
  assign c_arbiter_io_gpr_b_ready = f_gpr_io_b_ready; // @[ysyx_25030077.scala 140:28]
  assign c_arbiter_io_r_valid_lsu = d_idu_io_r_valid; // @[ysyx_25030077.scala 138:28]
  assign d_idu_io_instruction = c_arbiter_io_inst; // @[ysyx_25030077.scala 142:24]
  assign e_imm_io_instruction = c_arbiter_io_inst; // @[ysyx_25030077.scala 146:24]
  assign e_imm_io_imm_type = d_idu_io_imm_type; // @[ysyx_25030077.scala 147:21]
  assign f_gpr_clock = clock;
  assign f_gpr_reset = reset;
  assign f_gpr_io_mem_Req_valid = c_arbiter_io_gpr_r_valid; // @[ysyx_25030077.scala 154:26]
  assign f_gpr_io_b_valid = c_arbiter_io_gpr_b_valid; // @[ysyx_25030077.scala 155:20]
  assign f_gpr_io_gpr_b_resp = c_arbiter_io_gpr_b_resp; // @[ysyx_25030077.scala 156:23]
  assign f_gpr_io_pc_next = j_pc_next_io_pc_next; // @[ysyx_25030077.scala 151:20]
  assign f_gpr_io_waddr_rd = d_idu_io_rd; // @[ysyx_25030077.scala 152:21]
  assign f_gpr_io_wdata_rd = i_alu_io_out; // @[ysyx_25030077.scala 153:21]
  assign f_gpr_io_raddr_rs1 = d_idu_io_rs1; // @[ysyx_25030077.scala 149:22]
  assign f_gpr_io_raddr_rs2 = d_idu_io_rs2; // @[ysyx_25030077.scala 150:22]
  assign f_gpr_io_ifu_Req_ready = b_ifu_io_rd_Req_ready; // @[ysyx_25030077.scala 144:20]
  assign h_data_control_io_rs1_data = f_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 164:30]
  assign h_data_control_io_rs2_data = f_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 165:30]
  assign h_data_control_io_imm = e_imm_io_imm; // @[ysyx_25030077.scala 166:25]
  assign h_data_control_io_mem_data = c_arbiter_io_gpr_data; // @[ysyx_25030077.scala 167:30]
  assign h_data_control_io_pc_count = b_ifu_io_rd_Req_bits_addr; // @[ysyx_25030077.scala 169:30]
  assign h_data_control_io_data_control = d_idu_io_data_control; // @[ysyx_25030077.scala 168:34]
  assign i_alu_io_in_a = h_data_control_io_data_1; // @[ysyx_25030077.scala 171:17]
  assign i_alu_io_in_b = h_data_control_io_data_2; // @[ysyx_25030077.scala 172:17]
  assign i_alu_io_sw = d_idu_io_ALU_ctrl; // @[ysyx_25030077.scala 173:15]
  assign j_pc_next_io_rs1_data = f_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 158:25]
  assign j_pc_next_io_rs2_data = f_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 159:25]
  assign j_pc_next_io_instruction = c_arbiter_io_inst; // @[ysyx_25030077.scala 160:28]
  assign j_pc_next_io_pc_next_type = d_idu_io_pc_next_type; // @[ysyx_25030077.scala 162:29]
  assign j_pc_next_io_pc_count = b_ifu_io_rd_Req_bits_addr; // @[ysyx_25030077.scala 161:25]
endmodule
