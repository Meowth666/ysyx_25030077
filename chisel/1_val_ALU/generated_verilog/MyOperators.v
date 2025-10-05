module MyOperators(
  input         clock,
  input         reset,
  input  [31:0] io_in_a,
  input  [31:0] io_in_b,
  input  [3:0]  io_sw,
  output [31:0] io_out,
  output        io_carry,
  output        io_overflow
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] out_reg; // @[module.scala 18:29]
  reg  carry_reg; // @[module.scala 19:29]
  reg  overflow_reg; // @[module.scala 20:29]
  wire [15:0] oneHot = 16'h1 << io_sw; // @[OneHot.scala 64:12]
  wire [32:0] add33 = io_in_a + io_in_b; // @[module.scala 26:25]
  wire [32:0] sub33 = io_in_a - io_in_b; // @[module.scala 27:25]
  wire [31:0] and32 = io_in_a & io_in_b; // @[module.scala 29:25]
  wire [31:0] or32 = io_in_a | io_in_b; // @[module.scala 30:25]
  wire [31:0] xor32 = io_in_a ^ io_in_b; // @[module.scala 31:25]
  wire [31:0] srai32 = $signed(io_in_a) >>> io_in_b[4:0]; // @[module.scala 32:49]
  wire [31:0] srli32 = io_in_a >> io_in_b[4:0]; // @[module.scala 33:25]
  wire [62:0] _GEN_3 = {{31'd0}, io_in_a}; // @[module.scala 35:25]
  wire [62:0] sll32 = _GEN_3 << io_in_b[4:0]; // @[module.scala 35:25]
  wire  sltiu_b = io_in_a < io_in_b; // @[module.scala 37:26]
  wire  slt_b = $signed(io_in_a) < $signed(io_in_b); // @[module.scala 38:33]
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
  wire  a31 = io_in_a[31]; // @[module.scala 69:20]
  wire  b31 = io_in_b[31]; // @[module.scala 70:20]
  wire  s31 = out33[31]; // @[module.scala 71:18]
  wire  _overflowAddBool_T = a31 ^ s31; // @[module.scala 74:30]
  wire  _overflowAddBool_T_1 = a31 ^ b31; // @[module.scala 74:45]
  wire  overflowAddBool = (a31 ^ s31) & ~(a31 ^ b31); // @[module.scala 74:37]
  wire  overflowSubBool = _overflowAddBool_T & _overflowAddBool_T_1; // @[module.scala 75:37]
  wire  _overflow_reg_T_32 = oneHot[0] & overflowAddBool | oneHot[1] & overflowSubBool; // @[Mux.scala 27:73]
  assign io_out = out_reg; // @[module.scala 98:15]
  assign io_carry = carry_reg; // @[module.scala 99:15]
  assign io_overflow = overflow_reg; // @[module.scala 100:15]
  always @(posedge clock) begin
    if (reset) begin // @[module.scala 18:29]
      out_reg <= 32'h0; // @[module.scala 18:29]
    end else begin
      out_reg <= out33[31:0]; // @[module.scala 65:13]
    end
    if (reset) begin // @[module.scala 19:29]
      carry_reg <= 1'h0; // @[module.scala 19:29]
    end else begin
      carry_reg <= out33[32]; // @[module.scala 66:13]
    end
    if (reset) begin // @[module.scala 20:29]
      overflow_reg <= 1'h0; // @[module.scala 20:29]
    end else begin
      overflow_reg <= _overflow_reg_T_32; // @[module.scala 78:16]
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
  out_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  carry_reg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  overflow_reg = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
