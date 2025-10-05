module MyOperators(
  input         clock,
  input         reset,
  input  [31:0] io_rs1_data,
  input  [31:0] io_instruction,
  input  [2:0]  io_pc_next_type,
  input  [31:0] io_pc_count,
  output [31:0] io_pc_next,
  output        io_is_unknown_instruction
);
  wire [31:0] default_pc_next = io_pc_count + 32'h4; // @[module.scala 14:37]
  wire  is_type1 = io_pc_next_type == 3'h1; // @[module.scala 17:34]
  wire  is_type2 = io_pc_next_type == 3'h2; // @[module.scala 18:34]
  wire  is_type4 = io_pc_next_type == 3'h4; // @[module.scala 20:34]
  wire [10:0] _io_pc_next_T_2 = io_instruction[31] ? 11'h7ff : 11'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_pc_next_T_7 = {_io_pc_next_T_2,io_instruction[31],io_instruction[19:12],io_instruction[20],
    io_instruction[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [31:0] _io_pc_next_T_9 = io_pc_count + _io_pc_next_T_7; // @[module.scala 23:30]
  wire [19:0] _io_pc_next_T_12 = io_instruction[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _io_pc_next_T_14 = {_io_pc_next_T_12,io_instruction[31:20]}; // @[Cat.scala 31:58]
  wire [31:0] _io_pc_next_T_16 = io_rs1_data + _io_pc_next_T_14; // @[module.scala 24:31]
  wire [31:0] _io_pc_next_T_18 = _io_pc_next_T_16 & 32'hfffffffe; // @[module.scala 24:94]
  wire [31:0] _io_pc_next_T_19 = is_type4 ? io_pc_count : default_pc_next; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_20 = is_type2 ? _io_pc_next_T_18 : _io_pc_next_T_19; // @[Mux.scala 101:16]
  assign io_pc_next = is_type1 ? _io_pc_next_T_9 : _io_pc_next_T_20; // @[Mux.scala 101:16]
  assign io_is_unknown_instruction = io_pc_next_type == 3'h3; // @[module.scala 19:34]
endmodule
