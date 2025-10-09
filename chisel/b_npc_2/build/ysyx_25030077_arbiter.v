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
  reg [1:0] state_reg; // @[ysyx_25030077_arbiter.scala 53:28]
  reg [31:0] inst_reg; // @[ysyx_25030077_arbiter.scala 54:27]
  reg  axi_r_valid_delay; // @[ysyx_25030077_arbiter.scala 55:36]
  wire [32:0] _io_axi_ar_addr_T = io_rs1_data + io_imm; // @[ysyx_25030077_arbiter.scala 57:44]
  wire  _io_axi_ar_addr_T_2 = state_reg == 2'h0; // @[ysyx_25030077_arbiter.scala 58:42]
  wire  _state_reg_T_3 = state_reg == 2'h1; // @[ysyx_25030077_arbiter.scala 63:20]
  wire [1:0] _state_reg_T_8 = io_axi_r_valid & ~axi_r_valid_delay ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 64:71]
  wire  _state_reg_T_9 = ~io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 65:53]
  wire  _state_reg_T_10 = io_axi_r_valid & io_axi_ar_ready; // @[ysyx_25030077_arbiter.scala 65:88]
  wire [1:0] _state_reg_T_11 = io_axi_r_valid & io_axi_ar_ready ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 65:72]
  wire [1:0] _state_reg_T_12 = _state_reg_T_9 ? _state_reg_T_11 : 2'h0; // @[Mux.scala 101:16]
  wire  _state_reg_T_14 = state_reg == 2'h2; // @[ysyx_25030077_arbiter.scala 67:20]
  wire [1:0] _state_reg_T_16 = _state_reg_T_10 ? 2'h0 : 2'h2; // @[ysyx_25030077_arbiter.scala 67:35]
  wire [2:0] _io_axi_ar_strb_T_2 = _state_reg_T_3 ? io_r_mask : 3'h0; // @[Mux.scala 101:16]
  wire  _inst_reg_T_2 = io_axi_r_valid & _io_axi_ar_addr_T_2; // @[ysyx_25030077_arbiter.scala 111:55]
  assign io_axi_ar_valid = _io_axi_ar_addr_T_2 ? io_ifu_valid : _state_reg_T_3 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_ar_addr = _io_axi_ar_addr_T_2 ? io_pc : _io_axi_ar_addr_T[31:0]; // @[Mux.scala 101:16]
  assign io_axi_ar_strb = _io_axi_ar_addr_T_2 ? 3'h6 : _io_axi_ar_strb_T_2; // @[Mux.scala 101:16]
  assign io_axi_aw_valid = _state_reg_T_3 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_aw_addr = _state_reg_T_3 ? _io_axi_ar_addr_T[31:0] : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_w_valid = _state_reg_T_3 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_axi_w_data = _state_reg_T_3 ? io_rs2_data : 32'h0; // @[Mux.scala 101:16]
  assign io_axi_w_strb = _state_reg_T_3 ? io_w_mask : 3'h0; // @[Mux.scala 101:16]
  assign io_axi_r_ready = io_gpr_r_ready; // @[ysyx_25030077_arbiter.scala 94:21]
  assign io_axi_b_ready = io_gpr_b_ready; // @[ysyx_25030077_arbiter.scala 95:21]
  assign io_gpr_b_resp = _state_reg_T_14 ? io_axi_b_resp : 2'h0; // @[Mux.scala 101:16]
  assign io_gpr_r_valid = _state_reg_T_14 & io_axi_r_valid; // @[Mux.scala 101:16]
  assign io_gpr_b_valid = _state_reg_T_14 & io_axi_b_valid; // @[Mux.scala 101:16]
  assign io_gpr_data = _state_reg_T_14 ? io_axi_r_data : 32'h0; // @[Mux.scala 101:16]
  assign io_inst = inst_reg; // @[ysyx_25030077_arbiter.scala 113:21]
  assign io_ifu_ready = io_axi_ar_ready; // @[ysyx_25030077_arbiter.scala 96:21]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 53:28]
      state_reg <= 2'h0; // @[ysyx_25030077_arbiter.scala 53:28]
    end else if (_io_axi_ar_addr_T_2) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, io_axi_r_valid};
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      if (io_r_valid_lsu) begin // @[Mux.scala 101:16]
        state_reg <= _state_reg_T_8;
      end else begin
        state_reg <= _state_reg_T_12;
      end
    end else if (_state_reg_T_14) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_16;
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
