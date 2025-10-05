module addr_gen(
  input         clock,
  input         reset,
  input         io_IFUReq_ready,
  output        io_IFUReq_valid,
  output [31:0] io_IFUReq_bits_addr
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  addr_state; // @[addr_gen.scala 11:27]
  reg [31:0] dataReg; // @[addr_gen.scala 14:24]
  wire [31:0] _dataReg_T_2 = dataReg + 32'h4; // @[addr_gen.scala 16:54]
  assign io_IFUReq_valid = addr_state; // @[addr_gen.scala 25:34]
  assign io_IFUReq_bits_addr = dataReg; // @[addr_gen.scala 26:23]
  always @(posedge clock) begin
    if (reset) begin // @[addr_gen.scala 11:27]
      addr_state <= 1'h0; // @[addr_gen.scala 11:27]
    end else if (addr_state) begin // @[Mux.scala 81:58]
      if (io_IFUReq_ready) begin // @[addr_gen.scala 21:27]
        addr_state <= 1'h0;
      end else begin
        addr_state <= 1'h1;
      end
    end else begin
      addr_state <= 1'h1;
    end
    if (reset) begin // @[addr_gen.scala 14:24]
      dataReg <= 32'h80000000; // @[addr_gen.scala 14:24]
    end else if (~addr_state) begin // @[addr_gen.scala 16:17]
      dataReg <= _dataReg_T_2;
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
  addr_state = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFU(
  input         clock,
  input         reset,
  output        io_addr_Req_ready,
  input         io_addr_Req_valid,
  input  [31:0] io_addr_Req_bits_addr,
  input         io_sramReq_ready,
  output        io_sramReq_valid,
  output [31:0] io_sramReq_bits_addr
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  state; // @[IFU.scala 12:22]
  reg [31:0] addrReg; // @[IFU.scala 15:24]
  assign io_addr_Req_ready = state; // @[IFU.scala 29:31]
  assign io_sramReq_valid = state; // @[IFU.scala 27:30]
  assign io_sramReq_bits_addr = addrReg; // @[IFU.scala 28:24]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 12:22]
      state <= 1'h0; // @[IFU.scala 12:22]
    end else if (state) begin // @[Mux.scala 81:58]
      if (io_sramReq_ready) begin // @[IFU.scala 23:24]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else begin
      state <= 1'h1;
    end
    if (reset) begin // @[IFU.scala 15:24]
      addrReg <= 32'h0; // @[IFU.scala 15:24]
    end else if (state & io_addr_Req_valid) begin // @[IFU.scala 18:17]
      addrReg <= io_addr_Req_bits_addr;
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
  state = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  addrReg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRAM(
  input         clock,
  input         reset,
  output        io_req_ready,
  input         io_req_valid,
  input  [31:0] io_req_bits_addr,
  output        io_iduReq_valid,
  output [31:0] io_iduReq_bits_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  state_ram; // @[SRAM.scala 12:26]
  reg [31:0] instReg; // @[SRAM.scala 15:24]
  assign io_req_ready = state_ram; // @[SRAM.scala 24:30]
  assign io_iduReq_valid = state_ram; // @[SRAM.scala 27:33]
  assign io_iduReq_bits_inst = instReg; // @[SRAM.scala 26:23]
  always @(posedge clock) begin
    if (reset) begin // @[SRAM.scala 12:26]
      state_ram <= 1'h0; // @[SRAM.scala 12:26]
    end else if (state_ram) begin // @[Mux.scala 81:58]
      if (io_req_ready) begin // @[SRAM.scala 22:17]
        state_ram <= 1'h0;
      end else begin
        state_ram <= 1'h1;
      end
    end else begin
      state_ram <= io_req_valid;
    end
    if (reset) begin // @[SRAM.scala 15:24]
      instReg <= 32'h413; // @[SRAM.scala 15:24]
    end else if (!(io_req_valid)) begin // @[SRAM.scala 17:17]
      instReg <= io_req_bits_addr;
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
  state_ram = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  instReg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input         clock,
  input         reset,
  input         io_inst_req_valid,
  input  [31:0] io_inst_req_bits_inst,
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
  reg [2:0] imm_type_reg_o; // @[IDU.scala 19:31]
  reg [4:0] rs1_reg_o; // @[IDU.scala 20:26]
  reg [4:0] rs2_reg_o; // @[IDU.scala 21:26]
  reg [4:0] rd_reg_o; // @[IDU.scala 22:25]
  reg [3:0] ALU_ctrl_reg_o; // @[IDU.scala 23:31]
  reg [2:0] data_control_reg_o; // @[IDU.scala 24:35]
  reg [3:0] pc_next_type_reg_o; // @[IDU.scala 25:35]
  wire [4:0] addi_Rs1 = io_inst_req_bits_inst[19:15]; // @[IDU.scala 37:39]
  wire [4:0] addi_Rd = io_inst_req_bits_inst[11:7]; // @[IDU.scala 38:39]
  wire [4:0] sltu_Rs2 = io_inst_req_bits_inst[24:20]; // @[IDU.scala 103:40]
  wire [9:0] _isaddi_T_2 = {io_inst_req_bits_inst[14:12],io_inst_req_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isaddi = _isaddi_T_2 == 10'h13; // @[IDU.scala 293:78]
  wire  isxori = _isaddi_T_2 == 10'h213; // @[IDU.scala 294:78]
  wire  isori = _isaddi_T_2 == 10'h313; // @[IDU.scala 295:78]
  wire  isandi = _isaddi_T_2 == 10'h393; // @[IDU.scala 296:78]
  wire [15:0] _issrai_T_3 = {io_inst_req_bits_inst[31:26],io_inst_req_bits_inst[14:12],io_inst_req_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  issrai = _issrai_T_3 == 16'h4293; // @[IDU.scala 297:108]
  wire  issrli = _issrai_T_3 == 16'h293; // @[IDU.scala 298:108]
  wire  isslli = _issrai_T_3 == 16'h93; // @[IDU.scala 299:108]
  wire  issra = _issrai_T_3 == 16'h42b3; // @[IDU.scala 300:108]
  wire  issrl = _issrai_T_3 == 16'h2b3; // @[IDU.scala 301:108]
  wire  isbeq = _isaddi_T_2 == 10'h63; // @[IDU.scala 302:78]
  wire  isbne = _isaddi_T_2 == 10'he3; // @[IDU.scala 303:78]
  wire [16:0] _isadd_T_3 = {io_inst_req_bits_inst[31:25],io_inst_req_bits_inst[14:12],io_inst_req_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isadd = _isadd_T_3 == 17'h33; // @[IDU.scala 304:108]
  wire  isxor = _isadd_T_3 == 17'h233; // @[IDU.scala 305:108]
  wire  isand = _isadd_T_3 == 17'h3b3; // @[IDU.scala 306:108]
  wire  isor = _isadd_T_3 == 17'h333; // @[IDU.scala 307:108]
  wire  issub = _isadd_T_3 == 17'h8033; // @[IDU.scala 308:108]
  wire  islui = io_inst_req_bits_inst[6:0] == 7'h37; // @[IDU.scala 309:43]
  wire  isauipc = io_inst_req_bits_inst[6:0] == 7'h17; // @[IDU.scala 310:45]
  wire  isjal = io_inst_req_bits_inst[6:0] == 7'h6f; // @[IDU.scala 311:43]
  wire  isjalr = _isaddi_T_2 == 10'h67; // @[IDU.scala 312:79]
  wire  issw = _isaddi_T_2 == 10'h123; // @[IDU.scala 313:77]
  wire  isbge = _isaddi_T_2 == 10'h2e3; // @[IDU.scala 314:77]
  wire  isblt = _isaddi_T_2 == 10'h263; // @[IDU.scala 315:77]
  wire  isbltu = _isaddi_T_2 == 10'h363; // @[IDU.scala 316:77]
  wire  isbgeu = _isaddi_T_2 == 10'h3e3; // @[IDU.scala 317:77]
  wire  issb = _isaddi_T_2 == 10'h23; // @[IDU.scala 318:77]
  wire  issh = _isaddi_T_2 == 10'ha3; // @[IDU.scala 319:77]
  wire  islbu = _isaddi_T_2 == 10'h203; // @[IDU.scala 320:77]
  wire  islb = _isaddi_T_2 == 10'h3; // @[IDU.scala 321:77]
  wire  islw = _isaddi_T_2 == 10'h103; // @[IDU.scala 322:77]
  wire  islh = _isaddi_T_2 == 10'h83; // @[IDU.scala 323:77]
  wire  islhu = _isaddi_T_2 == 10'h283; // @[IDU.scala 324:77]
  wire  issll = _isadd_T_3 == 17'hb3; // @[IDU.scala 325:107]
  wire  isslt = _isadd_T_3 == 17'h133; // @[IDU.scala 326:109]
  wire  issltu = _isadd_T_3 == 17'h1b3; // @[IDU.scala 327:109]
  wire  issltiu = _isaddi_T_2 == 10'h193; // @[IDU.scala 328:79]
  wire  isslti = _isaddi_T_2 == 10'h113; // @[IDU.scala 329:79]
  wire  iscsrrw = _isaddi_T_2 == 10'hf3; // @[IDU.scala 330:81]
  wire  iscsrrs = _isaddi_T_2 == 10'h173; // @[IDU.scala 331:81]
  wire  isebreak = io_inst_req_bits_inst == 32'h100073; // @[IDU.scala 332:41]
  wire  isecall = io_inst_req_bits_inst == 32'h73; // @[IDU.scala 333:41]
  wire  ismret = io_inst_req_bits_inst == 32'h30200073; // @[IDU.scala 334:41]
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
  wire [2:0] _imm_type_reg_T_20 = isori ? 3'h1 : _imm_type_reg_T_19; // @[Mux.scala 101:16]
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
  wire [4:0] _rs1_reg_T_33 = isori ? addi_Rs1 : _rs1_reg_T_32; // @[Mux.scala 101:16]
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
  wire [4:0] _rs2_reg_T_16 = issh ? sltu_Rs2 : _rs2_reg_T_15; // @[Mux.scala 101:16]
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
  wire [4:0] _rd_reg_T_27 = isori ? addi_Rd : _rd_reg_T_26; // @[Mux.scala 101:16]
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
  wire [4:0] ALU_ctrl_reg = isaddi ? 5'h0 : _ALU_ctrl_reg_T_37; // @[Mux.scala 101:16]
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
  wire [2:0] _data_control_reg_T_24 = isjalr ? 3'h1 : _data_control_reg_T_23; // @[Mux.scala 101:16]
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
  wire [3:0] _pc_next_type_reg_T_39 = isauipc ? 4'h0 : _pc_next_type_reg_T_38; // @[Mux.scala 101:16]
  wire [4:0] _ALU_ctrl_reg_o_T = io_inst_req_valid ? {{1'd0}, ALU_ctrl_reg_o} : ALU_ctrl_reg; // @[IDU.scala 578:24]
  wire [4:0] _GEN_0 = reset ? 5'h0 : _ALU_ctrl_reg_o_T; // @[IDU.scala 23:{31,31} 578:18]
  assign io_imm_type = imm_type_reg_o; // @[IDU.scala 589:15]
  assign io_rs1 = rs1_reg_o; // @[IDU.scala 590:10]
  assign io_rs2 = rs2_reg_o; // @[IDU.scala 591:10]
  assign io_rd = rd_reg_o; // @[IDU.scala 592:9]
  assign io_data_control = data_control_reg_o; // @[IDU.scala 594:19]
  assign io_ALU_ctrl = ALU_ctrl_reg_o; // @[IDU.scala 593:15]
  assign io_pc_next_type = pc_next_type_reg_o; // @[IDU.scala 595:19]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 19:31]
      imm_type_reg_o <= 3'h0; // @[IDU.scala 19:31]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 574:24]
      if (isaddi) begin // @[Mux.scala 101:16]
        imm_type_reg_o <= 3'h1;
      end else if (isxori) begin // @[Mux.scala 101:16]
        imm_type_reg_o <= 3'h1;
      end else begin
        imm_type_reg_o <= _imm_type_reg_T_20;
      end
    end
    if (reset) begin // @[IDU.scala 20:26]
      rs1_reg_o <= 5'h0; // @[IDU.scala 20:26]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 575:19]
      if (isaddi) begin // @[Mux.scala 101:16]
        rs1_reg_o <= addi_Rs1;
      end else if (isxori) begin // @[Mux.scala 101:16]
        rs1_reg_o <= addi_Rs1;
      end else begin
        rs1_reg_o <= _rs1_reg_T_33;
      end
    end
    if (reset) begin // @[IDU.scala 21:26]
      rs2_reg_o <= 5'h0; // @[IDU.scala 21:26]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 576:19]
      if (issw) begin // @[Mux.scala 101:16]
        rs2_reg_o <= sltu_Rs2;
      end else if (issb) begin // @[Mux.scala 101:16]
        rs2_reg_o <= sltu_Rs2;
      end else begin
        rs2_reg_o <= _rs2_reg_T_16;
      end
    end
    if (reset) begin // @[IDU.scala 22:25]
      rd_reg_o <= 5'h0; // @[IDU.scala 22:25]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 577:19]
      if (isaddi) begin // @[Mux.scala 101:16]
        rd_reg_o <= addi_Rd;
      end else if (isxori) begin // @[Mux.scala 101:16]
        rd_reg_o <= addi_Rd;
      end else begin
        rd_reg_o <= _rd_reg_T_27;
      end
    end
    ALU_ctrl_reg_o <= _GEN_0[3:0]; // @[IDU.scala 23:{31,31} 578:18]
    if (reset) begin // @[IDU.scala 24:35]
      data_control_reg_o <= 3'h0; // @[IDU.scala 24:35]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 579:28]
      if (isauipc) begin // @[Mux.scala 101:16]
        data_control_reg_o <= 3'h1;
      end else if (isjal) begin // @[Mux.scala 101:16]
        data_control_reg_o <= 3'h1;
      end else begin
        data_control_reg_o <= _data_control_reg_T_24;
      end
    end
    if (reset) begin // @[IDU.scala 25:35]
      pc_next_type_reg_o <= 4'h0; // @[IDU.scala 25:35]
    end else if (!(io_inst_req_valid)) begin // @[IDU.scala 580:28]
      if (isjal) begin // @[Mux.scala 101:16]
        pc_next_type_reg_o <= 4'h1;
      end else if (isjalr) begin // @[Mux.scala 101:16]
        pc_next_type_reg_o <= 4'h2;
      end else begin
        pc_next_type_reg_o <= _pc_next_type_reg_T_39;
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
  imm_type_reg_o = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  rs1_reg_o = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  rs2_reg_o = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  rd_reg_o = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  ALU_ctrl_reg_o = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  data_control_reg_o = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  pc_next_type_reg_o = _RAND_6[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input        clock,
  input        reset,
  output [2:0] io_imm_type,
  output [4:0] io_rs1,
  output [4:0] io_rs2,
  output [4:0] io_rd,
  output [2:0] io_data_control,
  output [3:0] io_ALU_ctrl,
  output [3:0] io_pc_next_type
);
  wire  addr_gen_clock; // @[top.scala 17:25]
  wire  addr_gen_reset; // @[top.scala 17:25]
  wire  addr_gen_io_IFUReq_ready; // @[top.scala 17:25]
  wire  addr_gen_io_IFUReq_valid; // @[top.scala 17:25]
  wire [31:0] addr_gen_io_IFUReq_bits_addr; // @[top.scala 17:25]
  wire  ifu_clock; // @[top.scala 18:20]
  wire  ifu_reset; // @[top.scala 18:20]
  wire  ifu_io_addr_Req_ready; // @[top.scala 18:20]
  wire  ifu_io_addr_Req_valid; // @[top.scala 18:20]
  wire [31:0] ifu_io_addr_Req_bits_addr; // @[top.scala 18:20]
  wire  ifu_io_sramReq_ready; // @[top.scala 18:20]
  wire  ifu_io_sramReq_valid; // @[top.scala 18:20]
  wire [31:0] ifu_io_sramReq_bits_addr; // @[top.scala 18:20]
  wire  sram_clock; // @[top.scala 19:20]
  wire  sram_reset; // @[top.scala 19:20]
  wire  sram_io_req_ready; // @[top.scala 19:20]
  wire  sram_io_req_valid; // @[top.scala 19:20]
  wire [31:0] sram_io_req_bits_addr; // @[top.scala 19:20]
  wire  sram_io_iduReq_valid; // @[top.scala 19:20]
  wire [31:0] sram_io_iduReq_bits_inst; // @[top.scala 19:20]
  wire  idu_clock; // @[top.scala 20:19]
  wire  idu_reset; // @[top.scala 20:19]
  wire  idu_io_inst_req_valid; // @[top.scala 20:19]
  wire [31:0] idu_io_inst_req_bits_inst; // @[top.scala 20:19]
  wire [2:0] idu_io_imm_type; // @[top.scala 20:19]
  wire [4:0] idu_io_rs1; // @[top.scala 20:19]
  wire [4:0] idu_io_rs2; // @[top.scala 20:19]
  wire [4:0] idu_io_rd; // @[top.scala 20:19]
  wire [2:0] idu_io_data_control; // @[top.scala 20:19]
  wire [3:0] idu_io_ALU_ctrl; // @[top.scala 20:19]
  wire [3:0] idu_io_pc_next_type; // @[top.scala 20:19]
  addr_gen addr_gen ( // @[top.scala 17:25]
    .clock(addr_gen_clock),
    .reset(addr_gen_reset),
    .io_IFUReq_ready(addr_gen_io_IFUReq_ready),
    .io_IFUReq_valid(addr_gen_io_IFUReq_valid),
    .io_IFUReq_bits_addr(addr_gen_io_IFUReq_bits_addr)
  );
  IFU ifu ( // @[top.scala 18:20]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_addr_Req_ready(ifu_io_addr_Req_ready),
    .io_addr_Req_valid(ifu_io_addr_Req_valid),
    .io_addr_Req_bits_addr(ifu_io_addr_Req_bits_addr),
    .io_sramReq_ready(ifu_io_sramReq_ready),
    .io_sramReq_valid(ifu_io_sramReq_valid),
    .io_sramReq_bits_addr(ifu_io_sramReq_bits_addr)
  );
  SRAM sram ( // @[top.scala 19:20]
    .clock(sram_clock),
    .reset(sram_reset),
    .io_req_ready(sram_io_req_ready),
    .io_req_valid(sram_io_req_valid),
    .io_req_bits_addr(sram_io_req_bits_addr),
    .io_iduReq_valid(sram_io_iduReq_valid),
    .io_iduReq_bits_inst(sram_io_iduReq_bits_inst)
  );
  IDU idu ( // @[top.scala 20:19]
    .clock(idu_clock),
    .reset(idu_reset),
    .io_inst_req_valid(idu_io_inst_req_valid),
    .io_inst_req_bits_inst(idu_io_inst_req_bits_inst),
    .io_imm_type(idu_io_imm_type),
    .io_rs1(idu_io_rs1),
    .io_rs2(idu_io_rs2),
    .io_rd(idu_io_rd),
    .io_data_control(idu_io_data_control),
    .io_ALU_ctrl(idu_io_ALU_ctrl),
    .io_pc_next_type(idu_io_pc_next_type)
  );
  assign io_imm_type = idu_io_imm_type; // @[top.scala 28:15]
  assign io_rs1 = idu_io_rs1; // @[top.scala 29:10]
  assign io_rs2 = idu_io_rs2; // @[top.scala 30:10]
  assign io_rd = idu_io_rd; // @[top.scala 31:9]
  assign io_data_control = idu_io_data_control; // @[top.scala 33:19]
  assign io_ALU_ctrl = idu_io_ALU_ctrl; // @[top.scala 32:15]
  assign io_pc_next_type = idu_io_pc_next_type; // @[top.scala 34:19]
  assign addr_gen_clock = clock;
  assign addr_gen_reset = reset;
  assign addr_gen_io_IFUReq_ready = ifu_io_addr_Req_ready; // @[top.scala 22:22]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_addr_Req_valid = addr_gen_io_IFUReq_valid; // @[top.scala 22:22]
  assign ifu_io_addr_Req_bits_addr = addr_gen_io_IFUReq_bits_addr; // @[top.scala 22:22]
  assign ifu_io_sramReq_ready = sram_io_req_ready; // @[top.scala 24:18]
  assign sram_clock = clock;
  assign sram_reset = reset;
  assign sram_io_req_valid = ifu_io_sramReq_valid; // @[top.scala 24:18]
  assign sram_io_req_bits_addr = ifu_io_sramReq_bits_addr; // @[top.scala 24:18]
  assign idu_clock = clock;
  assign idu_reset = reset;
  assign idu_io_inst_req_valid = sram_io_iduReq_valid; // @[top.scala 26:18]
  assign idu_io_inst_req_bits_inst = sram_io_iduReq_bits_inst; // @[top.scala 26:18]
endmodule
