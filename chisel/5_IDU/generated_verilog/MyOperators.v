module MyOperators(
  input         clock,
  input         reset,
  input  [31:0] io_instruction,
  output [2:0]  io_imm_type,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [2:0]  io_data_control,
  output [3:0]  io_ALU_ctrl,
  output [3:0]  io_pc_next_type
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] imm_type_reg; // @[module.scala 16:29]
  reg [4:0] rs1_reg; // @[module.scala 17:24]
  reg [4:0] rs2_reg; // @[module.scala 18:24]
  reg [4:0] rd_reg; // @[module.scala 19:23]
  reg [3:0] ALU_ctrl_reg; // @[module.scala 20:29]
  reg [2:0] data_control_reg; // @[module.scala 21:33]
  reg [3:0] pc_next_type_reg; // @[module.scala 22:33]
  wire [4:0] addi_Rs1 = io_instruction[19:15]; // @[module.scala 34:32]
  wire [4:0] addi_Rd = io_instruction[11:7]; // @[module.scala 35:32]
  wire [4:0] sltu_Rs2 = io_instruction[24:20]; // @[module.scala 100:33]
  wire [9:0] _isaddi_T_2 = {io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  isaddi = _isaddi_T_2 == 10'h13; // @[module.scala 290:64]
  wire  isxori = _isaddi_T_2 == 10'h213; // @[module.scala 291:64]
  wire  isori = _isaddi_T_2 == 10'h313; // @[module.scala 292:64]
  wire  isandi = _isaddi_T_2 == 10'h393; // @[module.scala 293:64]
  wire [15:0] _issrai_T_3 = {io_instruction[31:26],io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  issrai = _issrai_T_3 == 16'h4293; // @[module.scala 294:87]
  wire  issrli = _issrai_T_3 == 16'h293; // @[module.scala 295:87]
  wire  isslli = _issrai_T_3 == 16'h93; // @[module.scala 296:87]
  wire  issra = _issrai_T_3 == 16'h42b3; // @[module.scala 297:87]
  wire  issrl = _issrai_T_3 == 16'h2b3; // @[module.scala 298:87]
  wire  isbeq = _isaddi_T_2 == 10'h63; // @[module.scala 299:64]
  wire  isbne = _isaddi_T_2 == 10'he3; // @[module.scala 300:64]
  wire [16:0] _isadd_T_3 = {io_instruction[31:25],io_instruction[14:12],io_instruction[6:0]}; // @[Cat.scala 31:58]
  wire  isadd = _isadd_T_3 == 17'h33; // @[module.scala 301:87]
  wire  isxor = _isadd_T_3 == 17'h233; // @[module.scala 302:87]
  wire  isand = _isadd_T_3 == 17'h3b3; // @[module.scala 303:87]
  wire  isor = _isadd_T_3 == 17'h333; // @[module.scala 304:87]
  wire  issub = _isadd_T_3 == 17'h8033; // @[module.scala 305:87]
  wire  islui = io_instruction[6:0] == 7'h37; // @[module.scala 306:36]
  wire  isauipc = io_instruction[6:0] == 7'h17; // @[module.scala 307:38]
  wire  isjal = io_instruction[6:0] == 7'h6f; // @[module.scala 308:36]
  wire  isjalr = _isaddi_T_2 == 10'h67; // @[module.scala 309:65]
  wire  issw = _isaddi_T_2 == 10'h123; // @[module.scala 310:63]
  wire  isbge = _isaddi_T_2 == 10'h2e3; // @[module.scala 311:63]
  wire  isblt = _isaddi_T_2 == 10'h263; // @[module.scala 312:63]
  wire  isbltu = _isaddi_T_2 == 10'h363; // @[module.scala 313:63]
  wire  isbgeu = _isaddi_T_2 == 10'h3e3; // @[module.scala 314:63]
  wire  issb = _isaddi_T_2 == 10'h23; // @[module.scala 315:63]
  wire  issh = _isaddi_T_2 == 10'ha3; // @[module.scala 316:63]
  wire  islbu = _isaddi_T_2 == 10'h203; // @[module.scala 317:63]
  wire  islb = _isaddi_T_2 == 10'h3; // @[module.scala 318:63]
  wire  islw = _isaddi_T_2 == 10'h103; // @[module.scala 319:63]
  wire  islh = _isaddi_T_2 == 10'h83; // @[module.scala 320:63]
  wire  islhu = _isaddi_T_2 == 10'h283; // @[module.scala 321:63]
  wire  issll = _isadd_T_3 == 17'hb3; // @[module.scala 322:86]
  wire  isslt = _isadd_T_3 == 17'h133; // @[module.scala 323:88]
  wire  issltu = _isadd_T_3 == 17'h1b3; // @[module.scala 324:88]
  wire  issltiu = _isaddi_T_2 == 10'h193; // @[module.scala 325:65]
  wire  isslti = _isaddi_T_2 == 10'h113; // @[module.scala 326:65]
  wire  iscsrrw = _isaddi_T_2 == 10'hf3; // @[module.scala 327:67]
  wire  iscsrrs = _isaddi_T_2 == 10'h173; // @[module.scala 328:67]
  wire  isebreak = io_instruction == 32'h100073; // @[module.scala 329:34]
  wire  isecall = io_instruction == 32'h73; // @[module.scala 330:34]
  wire  ismret = io_instruction == 32'h30200073; // @[module.scala 331:34]
  wire [2:0] _imm_type_reg_T = islb ? 3'h1 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_1 = islbu ? 3'h1 : _imm_type_reg_T; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_2 = islhu ? 3'h1 : _imm_type_reg_T_1; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_3 = islh ? 3'h1 : _imm_type_reg_T_2; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_4 = islw ? 3'h1 : _imm_type_reg_T_3; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_5 = issh ? 3'h4 : _imm_type_reg_T_4; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_6 = issb ? 3'h4 : _imm_type_reg_T_5; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_7 = issw ? 3'h4 : _imm_type_reg_T_6; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_8 = isjalr ? 3'h3 : _imm_type_reg_T_7; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_9 = isjal ? 3'h3 : _imm_type_reg_T_8; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_10 = isauipc ? 3'h2 : _imm_type_reg_T_9; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_11 = islui ? 3'h2 : _imm_type_reg_T_10; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_12 = isslti ? 3'h1 : _imm_type_reg_T_11; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_13 = issltiu ? 3'h1 : _imm_type_reg_T_12; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_14 = isslli ? 3'h5 : _imm_type_reg_T_13; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_15 = issrli ? 3'h5 : _imm_type_reg_T_14; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_16 = issrai ? 3'h5 : _imm_type_reg_T_15; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_17 = iscsrrs ? 3'h6 : _imm_type_reg_T_16; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_18 = iscsrrw ? 3'h6 : _imm_type_reg_T_17; // @[Mux.scala 101:16]
  wire [2:0] _imm_type_reg_T_19 = isandi ? 3'h1 : _imm_type_reg_T_18; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T = isslt ? addi_Rs1 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_1 = issltu ? addi_Rs1 : _rs1_reg_T; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_2 = isbne ? addi_Rs1 : _rs1_reg_T_1; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_3 = isbgeu ? addi_Rs1 : _rs1_reg_T_2; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_4 = isbltu ? addi_Rs1 : _rs1_reg_T_3; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_5 = isblt ? addi_Rs1 : _rs1_reg_T_4; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_6 = isbge ? addi_Rs1 : _rs1_reg_T_5; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_7 = isbeq ? addi_Rs1 : _rs1_reg_T_6; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_8 = issub ? addi_Rs1 : _rs1_reg_T_7; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_9 = isor ? addi_Rs1 : _rs1_reg_T_8; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_10 = isxor ? addi_Rs1 : _rs1_reg_T_9; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_11 = issrl ? addi_Rs1 : _rs1_reg_T_10; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_12 = issra ? addi_Rs1 : _rs1_reg_T_11; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_13 = issll ? addi_Rs1 : _rs1_reg_T_12; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_14 = isand ? addi_Rs1 : _rs1_reg_T_13; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_15 = isadd ? addi_Rs1 : _rs1_reg_T_14; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_16 = islb ? addi_Rs1 : _rs1_reg_T_15; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_17 = islbu ? addi_Rs1 : _rs1_reg_T_16; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_18 = islhu ? addi_Rs1 : _rs1_reg_T_17; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_19 = islh ? addi_Rs1 : _rs1_reg_T_18; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_20 = islw ? addi_Rs1 : _rs1_reg_T_19; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_21 = issh ? addi_Rs1 : _rs1_reg_T_20; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_22 = issb ? addi_Rs1 : _rs1_reg_T_21; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_23 = issw ? addi_Rs1 : _rs1_reg_T_22; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_24 = isjalr ? addi_Rs1 : _rs1_reg_T_23; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_25 = isslti ? addi_Rs1 : _rs1_reg_T_24; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_26 = issltiu ? addi_Rs1 : _rs1_reg_T_25; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_27 = isslli ? addi_Rs1 : _rs1_reg_T_26; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_28 = issrli ? addi_Rs1 : _rs1_reg_T_27; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_29 = issrai ? addi_Rs1 : _rs1_reg_T_28; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_30 = iscsrrs ? addi_Rs1 : _rs1_reg_T_29; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_31 = iscsrrw ? addi_Rs1 : _rs1_reg_T_30; // @[Mux.scala 101:16]
  wire [4:0] _rs1_reg_T_32 = isandi ? addi_Rs1 : _rs1_reg_T_31; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T = isslt ? sltu_Rs2 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_1 = issltu ? sltu_Rs2 : _rs2_reg_T; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_2 = isbne ? sltu_Rs2 : _rs2_reg_T_1; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_3 = isbgeu ? sltu_Rs2 : _rs2_reg_T_2; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_4 = isbltu ? sltu_Rs2 : _rs2_reg_T_3; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_5 = isblt ? sltu_Rs2 : _rs2_reg_T_4; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_6 = isbge ? sltu_Rs2 : _rs2_reg_T_5; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_7 = isbeq ? sltu_Rs2 : _rs2_reg_T_6; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_8 = issub ? sltu_Rs2 : _rs2_reg_T_7; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_9 = isor ? sltu_Rs2 : _rs2_reg_T_8; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_10 = isxor ? sltu_Rs2 : _rs2_reg_T_9; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_11 = issrl ? sltu_Rs2 : _rs2_reg_T_10; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_12 = issra ? sltu_Rs2 : _rs2_reg_T_11; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_13 = issll ? sltu_Rs2 : _rs2_reg_T_12; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_14 = isand ? sltu_Rs2 : _rs2_reg_T_13; // @[Mux.scala 101:16]
  wire [4:0] _rs2_reg_T_15 = isadd ? sltu_Rs2 : _rs2_reg_T_14; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T = isslt ? addi_Rd : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_1 = issltu ? addi_Rd : _rd_reg_T; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_2 = issub ? addi_Rd : _rd_reg_T_1; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_3 = isor ? addi_Rd : _rd_reg_T_2; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_4 = isxor ? addi_Rd : _rd_reg_T_3; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_5 = issrl ? addi_Rd : _rd_reg_T_4; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_6 = issra ? addi_Rd : _rd_reg_T_5; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_7 = issll ? addi_Rd : _rd_reg_T_6; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_8 = isand ? addi_Rd : _rd_reg_T_7; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_9 = isadd ? addi_Rd : _rd_reg_T_8; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_10 = islb ? addi_Rd : _rd_reg_T_9; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_11 = islbu ? addi_Rd : _rd_reg_T_10; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_12 = islhu ? addi_Rd : _rd_reg_T_11; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_13 = islh ? addi_Rd : _rd_reg_T_12; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_14 = islw ? addi_Rd : _rd_reg_T_13; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_15 = isjalr ? addi_Rd : _rd_reg_T_14; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_16 = isjal ? addi_Rd : _rd_reg_T_15; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_17 = isauipc ? addi_Rd : _rd_reg_T_16; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_18 = islui ? addi_Rd : _rd_reg_T_17; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_19 = isslti ? addi_Rd : _rd_reg_T_18; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_20 = issltiu ? addi_Rd : _rd_reg_T_19; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_21 = isslli ? addi_Rd : _rd_reg_T_20; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_22 = issrli ? addi_Rd : _rd_reg_T_21; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_23 = issrai ? addi_Rd : _rd_reg_T_22; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_24 = iscsrrs ? addi_Rd : _rd_reg_T_23; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_25 = iscsrrw ? addi_Rd : _rd_reg_T_24; // @[Mux.scala 101:16]
  wire [4:0] _rd_reg_T_26 = isandi ? addi_Rd : _rd_reg_T_25; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T = issltu ? 5'h2 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_1 = isslt ? 5'ha : _ALU_ctrl_reg_T; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_2 = isbne ? 5'h0 : _ALU_ctrl_reg_T_1; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_3 = isbgeu ? 5'h0 : _ALU_ctrl_reg_T_2; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_4 = isbltu ? 5'h0 : _ALU_ctrl_reg_T_3; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_5 = isblt ? 5'h0 : _ALU_ctrl_reg_T_4; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_6 = isbge ? 5'h0 : _ALU_ctrl_reg_T_5; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_7 = isbeq ? 5'h0 : _ALU_ctrl_reg_T_6; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_8 = issub ? 5'h1 : _ALU_ctrl_reg_T_7; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_9 = isor ? 5'h3 : _ALU_ctrl_reg_T_8; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_10 = isxor ? 5'h4 : _ALU_ctrl_reg_T_9; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_11 = issrl ? 5'h9 : _ALU_ctrl_reg_T_10; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_12 = issra ? 5'h5 : _ALU_ctrl_reg_T_11; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_13 = issll ? 5'h8 : _ALU_ctrl_reg_T_12; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_14 = isand ? 5'h6 : _ALU_ctrl_reg_T_13; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_15 = isadd ? 5'h0 : _ALU_ctrl_reg_T_14; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_16 = islb ? 5'h0 : _ALU_ctrl_reg_T_15; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_17 = islbu ? 5'h0 : _ALU_ctrl_reg_T_16; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_18 = islhu ? 5'h0 : _ALU_ctrl_reg_T_17; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_19 = islh ? 5'h0 : _ALU_ctrl_reg_T_18; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_20 = islw ? 5'h0 : _ALU_ctrl_reg_T_19; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_21 = issh ? 5'h0 : _ALU_ctrl_reg_T_20; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_22 = issb ? 5'h0 : _ALU_ctrl_reg_T_21; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_23 = issw ? 5'h0 : _ALU_ctrl_reg_T_22; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_24 = isjalr ? 5'h0 : _ALU_ctrl_reg_T_23; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_25 = isjal ? 5'h0 : _ALU_ctrl_reg_T_24; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_26 = isauipc ? 5'h0 : _ALU_ctrl_reg_T_25; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_27 = islui ? 5'h0 : _ALU_ctrl_reg_T_26; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_28 = isslti ? 5'ha : _ALU_ctrl_reg_T_27; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_29 = issltiu ? 5'h2 : _ALU_ctrl_reg_T_28; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_30 = isslli ? 5'h8 : _ALU_ctrl_reg_T_29; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_31 = issrli ? 5'h9 : _ALU_ctrl_reg_T_30; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_32 = issrai ? 5'h5 : _ALU_ctrl_reg_T_31; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_33 = iscsrrs ? 5'hc : _ALU_ctrl_reg_T_32; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_34 = iscsrrw ? 5'hb : _ALU_ctrl_reg_T_33; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_35 = isandi ? 5'h6 : _ALU_ctrl_reg_T_34; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_36 = isori ? 5'h3 : _ALU_ctrl_reg_T_35; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_37 = isxori ? 5'h4 : _ALU_ctrl_reg_T_36; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_T_38 = isaddi ? 5'h0 : _ALU_ctrl_reg_T_37; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T = issltu ? 3'h3 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_1 = isslt ? 3'h3 : _data_control_reg_T; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_2 = isbne ? 3'h0 : _data_control_reg_T_1; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_3 = isbgeu ? 3'h0 : _data_control_reg_T_2; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_4 = isbltu ? 3'h0 : _data_control_reg_T_3; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_5 = isblt ? 3'h0 : _data_control_reg_T_4; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_6 = isbge ? 3'h0 : _data_control_reg_T_5; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_7 = isbeq ? 3'h0 : _data_control_reg_T_6; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_8 = issub ? 3'h3 : _data_control_reg_T_7; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_9 = isor ? 3'h3 : _data_control_reg_T_8; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_10 = isxor ? 3'h3 : _data_control_reg_T_9; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_11 = issrl ? 3'h3 : _data_control_reg_T_10; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_12 = issra ? 3'h3 : _data_control_reg_T_11; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_13 = issll ? 3'h3 : _data_control_reg_T_12; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_14 = isand ? 3'h3 : _data_control_reg_T_13; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_15 = isadd ? 3'h3 : _data_control_reg_T_14; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_16 = islb ? 3'h2 : _data_control_reg_T_15; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_17 = islbu ? 3'h2 : _data_control_reg_T_16; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_18 = islhu ? 3'h2 : _data_control_reg_T_17; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_19 = islh ? 3'h2 : _data_control_reg_T_18; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_20 = islw ? 3'h2 : _data_control_reg_T_19; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_21 = issh ? 3'h0 : _data_control_reg_T_20; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_22 = issb ? 3'h0 : _data_control_reg_T_21; // @[Mux.scala 101:16]
  wire [2:0] _data_control_reg_T_23 = issw ? 3'h0 : _data_control_reg_T_22; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T = isslti ? 4'h0 : 4'h3; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_1 = issltiu ? 4'h0 : _pc_next_type_reg_T; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_2 = isslt ? 4'h0 : _pc_next_type_reg_T_1; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_3 = issltu ? 4'h0 : _pc_next_type_reg_T_2; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_4 = isbne ? 4'h5 : _pc_next_type_reg_T_3; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_5 = isbgeu ? 4'h8 : _pc_next_type_reg_T_4; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_6 = isbltu ? 4'ha : _pc_next_type_reg_T_5; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_7 = isblt ? 4'h9 : _pc_next_type_reg_T_6; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_8 = isbge ? 4'h7 : _pc_next_type_reg_T_7; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_9 = isbeq ? 4'h6 : _pc_next_type_reg_T_8; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_10 = issub ? 4'h0 : _pc_next_type_reg_T_9; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_11 = isor ? 4'h0 : _pc_next_type_reg_T_10; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_12 = isxor ? 4'h0 : _pc_next_type_reg_T_11; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_13 = issrl ? 4'h0 : _pc_next_type_reg_T_12; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_14 = issra ? 4'h0 : _pc_next_type_reg_T_13; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_15 = issll ? 4'h0 : _pc_next_type_reg_T_14; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_16 = isand ? 4'h0 : _pc_next_type_reg_T_15; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_17 = isadd ? 4'h0 : _pc_next_type_reg_T_16; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_18 = islb ? 4'h0 : _pc_next_type_reg_T_17; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_19 = islbu ? 4'h0 : _pc_next_type_reg_T_18; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_20 = islhu ? 4'h0 : _pc_next_type_reg_T_19; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_21 = islh ? 4'h0 : _pc_next_type_reg_T_20; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_22 = islw ? 4'h0 : _pc_next_type_reg_T_21; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_23 = ismret ? 4'hc : _pc_next_type_reg_T_22; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_24 = isecall ? 4'hb : _pc_next_type_reg_T_23; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_25 = isebreak ? 4'h4 : _pc_next_type_reg_T_24; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_26 = issh ? 4'h0 : _pc_next_type_reg_T_25; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_27 = issb ? 4'h0 : _pc_next_type_reg_T_26; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_28 = issw ? 4'h0 : _pc_next_type_reg_T_27; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_29 = isslli ? 4'h0 : _pc_next_type_reg_T_28; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_30 = issrli ? 4'h0 : _pc_next_type_reg_T_29; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_31 = issrai ? 4'h0 : _pc_next_type_reg_T_30; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_32 = iscsrrs ? 4'h0 : _pc_next_type_reg_T_31; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_33 = iscsrrw ? 4'h0 : _pc_next_type_reg_T_32; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_34 = isandi ? 4'h0 : _pc_next_type_reg_T_33; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_35 = isori ? 4'h0 : _pc_next_type_reg_T_34; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_36 = isxori ? 4'h0 : _pc_next_type_reg_T_35; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_37 = isaddi ? 4'h0 : _pc_next_type_reg_T_36; // @[Mux.scala 101:16]
  wire [3:0] _pc_next_type_reg_T_38 = islui ? 4'h0 : _pc_next_type_reg_T_37; // @[Mux.scala 101:16]
  wire [4:0] _GEN_0 = reset ? 5'h0 : _ALU_ctrl_reg_T_38; // @[module.scala 20:{29,29} 454:16]
  assign io_imm_type = imm_type_reg; // @[module.scala 570:15]
  assign io_rs1 = rs1_reg; // @[module.scala 571:10]
  assign io_rs2 = rs2_reg; // @[module.scala 572:10]
  assign io_rd = rd_reg; // @[module.scala 573:9]
  assign io_data_control = data_control_reg; // @[module.scala 575:19]
  assign io_ALU_ctrl = ALU_ctrl_reg; // @[module.scala 574:15]
  assign io_pc_next_type = pc_next_type_reg; // @[module.scala 576:19]
  always @(posedge clock) begin
    if (reset) begin // @[module.scala 16:29]
      imm_type_reg <= 3'h0; // @[module.scala 16:29]
    end else if (isaddi) begin // @[Mux.scala 101:16]
      imm_type_reg <= 3'h1;
    end else if (isxori) begin // @[Mux.scala 101:16]
      imm_type_reg <= 3'h1;
    end else if (isori) begin // @[Mux.scala 101:16]
      imm_type_reg <= 3'h1;
    end else begin
      imm_type_reg <= _imm_type_reg_T_19;
    end
    if (reset) begin // @[module.scala 17:24]
      rs1_reg <= 5'h0; // @[module.scala 17:24]
    end else if (isaddi) begin // @[Mux.scala 101:16]
      rs1_reg <= addi_Rs1;
    end else if (isxori) begin // @[Mux.scala 101:16]
      rs1_reg <= addi_Rs1;
    end else if (isori) begin // @[Mux.scala 101:16]
      rs1_reg <= addi_Rs1;
    end else begin
      rs1_reg <= _rs1_reg_T_32;
    end
    if (reset) begin // @[module.scala 18:24]
      rs2_reg <= 5'h0; // @[module.scala 18:24]
    end else if (issw) begin // @[Mux.scala 101:16]
      rs2_reg <= sltu_Rs2;
    end else if (issb) begin // @[Mux.scala 101:16]
      rs2_reg <= sltu_Rs2;
    end else if (issh) begin // @[Mux.scala 101:16]
      rs2_reg <= sltu_Rs2;
    end else begin
      rs2_reg <= _rs2_reg_T_15;
    end
    if (reset) begin // @[module.scala 19:23]
      rd_reg <= 5'h0; // @[module.scala 19:23]
    end else if (isaddi) begin // @[Mux.scala 101:16]
      rd_reg <= addi_Rd;
    end else if (isxori) begin // @[Mux.scala 101:16]
      rd_reg <= addi_Rd;
    end else if (isori) begin // @[Mux.scala 101:16]
      rd_reg <= addi_Rd;
    end else begin
      rd_reg <= _rd_reg_T_26;
    end
    ALU_ctrl_reg <= _GEN_0[3:0]; // @[module.scala 20:{29,29} 454:16]
    if (reset) begin // @[module.scala 21:33]
      data_control_reg <= 3'h0; // @[module.scala 21:33]
    end else if (isauipc) begin // @[Mux.scala 101:16]
      data_control_reg <= 3'h1;
    end else if (isjal) begin // @[Mux.scala 101:16]
      data_control_reg <= 3'h1;
    end else if (isjalr) begin // @[Mux.scala 101:16]
      data_control_reg <= 3'h1;
    end else begin
      data_control_reg <= _data_control_reg_T_23;
    end
    if (reset) begin // @[module.scala 22:33]
      pc_next_type_reg <= 4'h0; // @[module.scala 22:33]
    end else if (isjal) begin // @[Mux.scala 101:16]
      pc_next_type_reg <= 4'h1;
    end else if (isjalr) begin // @[Mux.scala 101:16]
      pc_next_type_reg <= 4'h2;
    end else if (isauipc) begin // @[Mux.scala 101:16]
      pc_next_type_reg <= 4'h0;
    end else begin
      pc_next_type_reg <= _pc_next_type_reg_T_38;
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
  imm_type_reg = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  rs1_reg = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  rs2_reg = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  rd_reg = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  ALU_ctrl_reg = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  data_control_reg = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  pc_next_type_reg = _RAND_6[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
