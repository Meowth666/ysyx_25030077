import chisel3._
import chisel3.util._

class IDU extends Module {
  val io = IO(new Bundle {
  val instruction = Input(UInt(32.W))
  val imm_type = Output(UInt(3.W))
  val rs1 = Output(UInt(5.W))
  val rs2 = Output(UInt(5.W))
  val rd = Output(UInt(5.W))
  val data_control = Output(UInt(3.W))
  val ALU_ctrl = Output(UInt(4.W))
  val pc_next_type = Output(UInt(4.W))
  val r_mask = Output(UInt(3.W))
  val w_mask = Output(UInt(3.W))
  })
  
  val defaultImm_type = 0.U(3.W)
  val defaultRs1 = 0.U(5.W)
  val defaultRs2 = 0.U(5.W)
  val defaultRd =  0.U(5.W)
  val defaultALU = 7.U(4.W)
  val defaultdata_control = 0.U(3.W)
  val defaultpc_next_type = 3.U(4.W) // 默认 pc_next 为当前 pc_count + 4
  val defaultr_mask = 0.U(3.W)
  val defaultw_mask = 0.U(3.W)

  val addi_Imm_type = 1.U(3.W)
  val addi_Rs1 = io.instruction(19,15)
  val addi_Rd =  io.instruction(11,7)
  val addi_ALU =  0.U(4.W)
  val addi_pc_next_type = 0.U(4.W)

  val xori_Imm_type = 1.U(3.W)
  val xori_Rs1 = io.instruction(19,15)
  val xori_Rd =  io.instruction(11,7)
  val xori_ALU =  4.U(4.W)
  val xori_pc_next_type = 0.U(4.W)

  val ori_Imm_type = 1.U(3.W)
  val ori_Rs1 = io.instruction(19,15)
  val ori_Rd =  io.instruction(11,7)
  val ori_ALU =  3.U(4.W)
  val ori_pc_next_type = 0.U(4.W)

  val andi_Imm_type = 1.U(3.W)
  val andi_Rs1 = io.instruction(19,15)
  val andi_Rd =  io.instruction(11,7)
  val andi_ALU =  6.U(4.W)
  val andi_pc_next_type = 0.U(4.W)

  val csrrw_Imm_type = 6.U(3.W)
  val csrrw_Rs1 = io.instruction(19,15)
  val csrrw_Rd =  io.instruction(11,7)
  val csrrw_ALU =  11.U(4.W)
  val csrrw_pc_next_type = 0.U(4.W)

  val csrrs_Imm_type = 6.U(3.W)
  val csrrs_Rs1 = io.instruction(19,15)
  val csrrs_Rd =  io.instruction(11,7)
  val csrrs_ALU =  12.U(4.W)
  val csrrs_pc_next_type = 0.U(4.W)

  val srai_Imm_type = 5.U(3.W)
  val srai_Rs1 = io.instruction(19,15)
  val srai_Rd =  io.instruction(11,7)
  val srai_ALU =  5.U(4.W)
  val srai_pc_next_type = 0.U(4.W)

  val srli_Imm_type = 5.U(3.W)
  val srli_Rs1 = io.instruction(19,15)
  val srli_Rd =  io.instruction(11,7)
  val srli_ALU =  9.U(4.W)
  val srli_pc_next_type = 0.U(4.W)

  val slli_Imm_type = 5.U(3.W)
  val slli_Rs1 = io.instruction(19,15)
  val slli_Rd =  io.instruction(11,7)
  val slli_ALU =  8.U(4.W)
  val slli_pc_next_type = 0.U(4.W)

  val sltiu_Imm_type = 1.U(3.W)
  val sltiu_Rs1 = io.instruction(19,15)
  val sltiu_Rd =  io.instruction(11,7)
  val sltiu_ALU =  2.U(4.W)
  val sltiu_pc_next_type = 0.U(4.W)

  val slti_Imm_type = 1.U(3.W)
  val slti_Rs1 = io.instruction(19,15)
  val slti_Rd =  io.instruction(11,7)
  val slti_ALU =  10.U(4.W)
  val slti_pc_next_type = 0.U(4.W)

  val sltu_Rs1 = io.instruction(19,15)
  val sltu_Rs2 =  io.instruction(24,20)
  val sltu_Rd =  io.instruction(11,7)
  val sltu_ALU =  2.U(4.W)
  val sltu_pc_next_type = 0.U(4.W)
  val sltu_data_control = 3.U(3.W)

  val slt_Rs1 = io.instruction(19,15)
  val slt_Rs2 =  io.instruction(24,20)
  val slt_Rd =  io.instruction(11,7)
  val slt_ALU =  10.U(4.W)
  val slt_pc_next_type = 0.U(4.W)
  val slt_data_control = 3.U(3.W)

  //val add_Imm_type = 0.U(3.W)
  val add_Rs1 = io.instruction(19,15)
  val add_Rs2 = io.instruction(24,20)
  val add_Rd =  io.instruction(11,7)
  val add_ALU =  0.U(4.W)
  val add_pc_next_type = 0.U(4.W)
  val add_data_control = 3.U(3.W)

  val and_Rs1 = io.instruction(19,15)
  val and_Rs2 = io.instruction(24,20)
  val and_Rd =  io.instruction(11,7)
  val and_ALU =  6.U(4.W)
  val and_pc_next_type = 0.U(4.W)
  val and_data_control = 3.U(3.W)

  val sll_Rs1 = io.instruction(19,15)
  val sll_Rs2 = io.instruction(24,20)
  val sll_Rd =  io.instruction(11,7)
  val sll_ALU =  8.U(4.W)
  val sll_pc_next_type = 0.U(4.W)
  val sll_data_control = 3.U(3.W)

  val sra_Rs1 = io.instruction(19,15)
  val sra_Rs2 = io.instruction(24,20)
  val sra_Rd =  io.instruction(11,7)
  val sra_ALU =  5.U(4.W)
  val sra_pc_next_type = 0.U(4.W)
  val sra_data_control = 3.U(3.W)

  val srl_Rs1 = io.instruction(19,15)
  val srl_Rs2 = io.instruction(24,20)
  val srl_Rd =  io.instruction(11,7)
  val srl_ALU =  9.U(4.W)
  val srl_pc_next_type = 0.U(4.W)
  val srl_data_control = 3.U(3.W)

  val xor_Rs1 = io.instruction(19,15)
  val xor_Rs2 = io.instruction(24,20)
  val xor_Rd =  io.instruction(11,7)
  val xor_ALU =  4.U(4.W)
  val xor_pc_next_type = 0.U(4.W)
  val xor_data_control = 3.U(3.W)

  val or_Rs1 = io.instruction(19,15)
  val or_Rs2 = io.instruction(24,20)
  val or_Rd =  io.instruction(11,7)
  val or_ALU =  3.U(4.W)
  val or_pc_next_type = 0.U(4.W)
  val or_data_control = 3.U(3.W)

  val sub_Rs1 = io.instruction(19,15)
  val sub_Rs2 = io.instruction(24,20)
  val sub_Rd =  io.instruction(11,7)
  val sub_ALU =  1.U(4.W)
  val sub_pc_next_type = 0.U(4.W)
  val sub_data_control = 3.U(3.W)
  
  val lui_Rd =  io.instruction(11,7)
  val lui_Imm_type  = 2.U(3.W)
  val lui_ALU  =  0.U(4.W)
  val lui_pc_next_type = 0.U(4.W)

  val auipc_Rd =  io.instruction(11,7)
  val auipc_Imm_type  = 2.U(3.W)
  val auipc_ALU  =  0.U(4.W)
  val auipc_data_control = 1.U(3.W)
  val auipc_pc_next_type = 0.U(4.W)

  val jal_Rd =  io.instruction(11,7)
  val jal_Imm_type  = 3.U(3.W)
  val jal_ALU  =  0.U(4.W)
  val jal_data_control = 1.U(3.W)
  val jal_pc_next_type = 1.U(4.W)
  
  val jalr_Rd =  io.instruction(11,7)
  val jalr_Rs1 = io.instruction(19,15)
  val jalr_Imm_type  = 3.U(3.W)
  val jalr_ALU  =  0.U(4.W)
  val jalr_data_control = 1.U(3.W)
  val jalr_pc_next_type = 2.U(4.W)

  val sw_Rs1 = io.instruction(19,15)
  val sw_Rs2 = io.instruction(24,20)
  val sw_Imm_type  = 4.U(3.W)
  val sw_ALU  =  0.U(4.W)
  val sw_data_control = 0.U(3.W)
  val sw_pc_next_type = 0.U(4.W)
  val sw_w_mask = 4.U(3.W)
  
  val sb_Rs1 = io.instruction(19,15)
  val sb_Rs2 = io.instruction(24,20)
  val sb_Imm_type  = 4.U(3.W)
  val sb_ALU  =  0.U(4.W)
  val sb_data_control = 0.U(3.W)
  val sb_pc_next_type = 0.U(4.W)
  val sb_w_mask = 1.U(3.W)

  val sh_Rs1 = io.instruction(19,15)
  val sh_Rs2 = io.instruction(24,20)
  val sh_Imm_type  = 4.U(3.W)
  val sh_ALU  =  0.U(4.W)
  val sh_data_control = 0.U(3.W)
  val sh_pc_next_type = 0.U(4.W)
  val sh_w_mask = 2.U(3.W)

  val beq_Rs1 = io.instruction(19,15)
  val beq_Rs2 = io.instruction(24,20)
  val beq_ALU  =  0.U(4.W)
  val beq_data_control = 0.U(3.W)
  val beq_pc_next_type = 6.U(4.W)

  val bge_Rs1 = io.instruction(19,15)
  val bge_Rs2 = io.instruction(24,20)
  val bge_ALU  =  0.U(4.W)
  val bge_data_control = 0.U(3.W)
  val bge_pc_next_type = 7.U(4.W)

  val blt_Rs1 = io.instruction(19,15)
  val blt_Rs2 = io.instruction(24,20)
  val blt_ALU  =  0.U(4.W)
  val blt_data_control = 0.U(3.W)
  val blt_pc_next_type = 9.U(4.W)

  val bltu_Rs1 = io.instruction(19,15)
  val bltu_Rs2 = io.instruction(24,20)
  val bltu_ALU  =  0.U(4.W)
  val bltu_data_control = 0.U(3.W)
  val bltu_pc_next_type = 10.U(4.W)

  val bgeu_Rs1 = io.instruction(19,15)
  val bgeu_Rs2 = io.instruction(24,20)
  val bgeu_ALU  =  0.U(4.W)
  val bgeu_data_control = 0.U(3.W)
  val bgeu_pc_next_type = 8.U(4.W)

  val bne_Rs1 = io.instruction(19,15)
  val bne_Rs2 = io.instruction(24,20)
  val bne_ALU  =  0.U(4.W)
  val bne_data_control = 0.U(3.W)
  val bne_pc_next_type = 5.U(4.W)

  val lw_Rd =  io.instruction(11,7)
  val lw_Rs1 = io.instruction(19,15)
  val lw_Imm_type  = 1.U(3.W)
  val lw_pc_next_type = 0.U(4.W)
  val lw_ALU  =  0.U(4.W)
  val lw_data_control = 2.U(3.W)
  val lw_r_mask = 4.U(3.W)

  val lh_Rd =  io.instruction(11,7)
  val lh_Rs1 = io.instruction(19,15)
  val lh_Imm_type  = 1.U(3.W)
  val lh_pc_next_type = 0.U(4.W)
  val lh_ALU  =  0.U(4.W)
  val lh_data_control = 2.U(3.W)
  val lh_r_mask = 2.U(3.W)

  val lhu_Rd =  io.instruction(11,7)
  val lhu_Rs1 = io.instruction(19,15)
  val lhu_Imm_type  = 1.U(3.W)
  val lhu_pc_next_type = 0.U(4.W)
  val lhu_ALU  =  0.U(4.W)
  val lhu_data_control = 2.U(3.W)
  val lhu_r_mask = 2.U(3.W)

  val lbu_Rd =  io.instruction(11,7)
  val lbu_Rs1 = io.instruction(19,15)
  val lbu_Imm_type  = 1.U(3.W)
  val lbu_pc_next_type = 0.U(4.W)
  val lbu_ALU  =  0.U(4.W)
  val lbu_data_control = 2.U(3.W)
  val lbu_r_mask = 1.U(3.W)

  val lb_Rd =  io.instruction(11,7)
  val lb_Rs1 = io.instruction(19,15)
  val lb_Imm_type  = 1.U(3.W)
  val lb_pc_next_type = 0.U(4.W)
  val lb_ALU  =  0.U(4.W)
  val lb_data_control = 2.U(3.W)
  val lb_r_mask = 1.U(3.W)

  val ebreak_pc_next_type = 4.U(4.W)
  val ecall_pc_next_type = 11.U(4.W)
  val mret_pc_next_type  = 12.U(4.W)
  // 定义选择信号
  val isaddi = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0000010011".U
  val isxori = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1000010011".U
  val isori  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1100010011".U
  val isandi = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1110010011".U
  val issrai = Cat(io.instruction(31,26), io.instruction(14,12), io.instruction(6,0)) === "b0100001010010011".U
  val issrli = Cat(io.instruction(31,26), io.instruction(14,12), io.instruction(6,0)) === "b0000001010010011".U
  val isslli = Cat(io.instruction(31,26), io.instruction(14,12), io.instruction(6,0)) === "b0000000010010011".U
  val issra  = Cat(io.instruction(31,26), io.instruction(14,12), io.instruction(6,0)) === "b0100001010110011".U
  val issrl  = Cat(io.instruction(31,26), io.instruction(14,12), io.instruction(6,0)) === "b0000001010110011".U
  val isbeq  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0001100011".U
  val isbne  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0011100011".U
  val isadd  = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000000000110011".U
  val isxor  = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000001000110011".U
  val isand  = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000001110110011".U
  val isor   = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000001100110011".U
  val issub  = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b01000000000110011".U
  val islui  = io.instruction(6,0) === "b0110111".U
  val isauipc  = io.instruction(6,0) === "b0010111".U
  val isjal  = io.instruction(6,0) === "b1101111".U
  val isjalr  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0001100111".U
  val issw  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0100100011".U
  val isbge = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1011100011".U
  val isblt = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1001100011".U
  val isbltu= Cat(io.instruction(14,12), io.instruction(6,0)) === "b1101100011".U
  val isbgeu= Cat(io.instruction(14,12), io.instruction(6,0)) === "b1111100011".U
  val issb  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0000100011".U
  val issh  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0010100011".U
  val islbu = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1000000011".U
  val islb  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0000000011".U
  val islw  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0100000011".U
  val islh  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0010000011".U
  val islhu = Cat(io.instruction(14,12), io.instruction(6,0)) === "b1010000011".U
  val issll = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000000010110011".U
  val isslt   = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000000100110011".U
  val issltu  = Cat(io.instruction(31,25), io.instruction(14,12), io.instruction(6,0)) === "b00000000110110011".U
  val issltiu = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0110010011".U
  val isslti  = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0100010011".U
  val iscsrrw   = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0011110011".U
  val iscsrrs   = Cat(io.instruction(14,12), io.instruction(6,0)) === "b0101110011".U
  val isebreak  = io.instruction === "b00000000000100000000000001110011".U
  val isecall   = io.instruction === "b00000000000000000000000001110011".U
  val ismret    = io.instruction === "b00110000001000000000000001110011".U

  // 使用 Mux1H 选择输出
  io.imm_type := MuxCase(defaultImm_type, Seq(
    isaddi -> addi_Imm_type,
    isxori -> xori_Imm_type,
    isori  -> ori_Imm_type,
    isandi -> andi_Imm_type,
    iscsrrw -> csrrw_Imm_type,
    iscsrrs -> csrrs_Imm_type,
    issrai -> srai_Imm_type,
    issrli -> srli_Imm_type,
    isslli -> slli_Imm_type,
    issltiu -> sltiu_Imm_type,
    isslti  -> slti_Imm_type,
    islui  -> lui_Imm_type,
    isauipc  -> auipc_Imm_type,
    isjal  -> jal_Imm_type,
    isjalr  -> jalr_Imm_type,
    issw  -> sw_Imm_type,
    issb  -> sb_Imm_type,
    issh  -> sh_Imm_type,
    islw  -> lw_Imm_type,
    islh  -> lh_Imm_type,
    islhu -> lhu_Imm_type,
    islbu  -> lbu_Imm_type,
    islb  -> lb_Imm_type
  ))

  io.rs1 := MuxCase(defaultRs1, Seq(
    isaddi -> addi_Rs1,
    isxori -> xori_Rs1,
    isori -> ori_Rs1,
    isandi -> andi_Rs1,
    iscsrrw -> csrrw_Rs1,
    iscsrrs -> csrrs_Rs1,
    issrai -> srai_Rs1,
    issrli -> srli_Rs1,
    isslli -> slli_Rs1,
    issltiu -> sltiu_Rs1,
    isslti -> slti_Rs1,
    isjalr -> jalr_Rs1,
    issw -> sw_Rs1,
    issb -> sb_Rs1,
    issh -> sh_Rs1,
    islw -> lw_Rs1,
    islh -> lh_Rs1,
    islhu -> lhu_Rs1,
    islbu -> lbu_Rs1,
    islb -> lb_Rs1,
    isadd -> add_Rs1,
    isand -> and_Rs1,
    issll -> sll_Rs1,
    issra -> sra_Rs1,
    issrl -> srl_Rs1,
    isxor -> xor_Rs1,
    isor -> or_Rs1,
    issub -> sub_Rs1,
    isbeq -> beq_Rs1,
    isbge -> bge_Rs1,
    isblt -> blt_Rs1,
    isbltu -> bltu_Rs1,
    isbgeu -> bgeu_Rs1,
    isbne -> bne_Rs1,
    issltu -> sltu_Rs1,
    isslt -> slt_Rs1
  ))

  io.rs2 := MuxCase(defaultRs2, Seq(
    issw -> sw_Rs2,
    issb -> sb_Rs2,
    issh -> sh_Rs2,
    isadd -> add_Rs2,
    isand -> and_Rs2,
    issll -> sll_Rs2,
    issra -> sra_Rs2,
    issrl -> srl_Rs2,
    isxor -> xor_Rs2,
    isor -> or_Rs2,
    issub -> sub_Rs2,
    isbeq -> beq_Rs2,
    isbge -> bge_Rs2,
    isblt -> blt_Rs2,
    isbltu -> bltu_Rs2,
    isbgeu -> bgeu_Rs2,
    isbne -> bne_Rs2,
    issltu -> sltu_Rs2,
    isslt -> slt_Rs2
  ))

  io.rd := MuxCase(defaultRd, Seq(
    isaddi -> addi_Rd,
    isxori -> xori_Rd,
    isori -> ori_Rd,
    isandi -> andi_Rd,
    iscsrrw -> csrrw_Rd,
    iscsrrs -> csrrs_Rd,
    issrai -> srai_Rd,
    issrli -> srli_Rd,
    isslli -> slli_Rd,
    issltiu -> sltiu_Rd,
    isslti -> slti_Rd,
    islui  -> lui_Rd,
    isauipc  -> auipc_Rd,
    isjal  -> jal_Rd,
    isjalr -> jalr_Rd,
    islw -> lw_Rd,
    islh -> lh_Rd,
    islhu -> lhu_Rd,
    islbu -> lbu_Rd,
    islb -> lb_Rd,
    isadd -> add_Rd,
    isand -> and_Rd,
    issll -> sll_Rd,
    issra -> sra_Rd,
    issrl -> srl_Rd,
    isxor -> xor_Rd,
    isor -> or_Rd,
    issub -> sub_Rd,
    issltu -> sltu_Rd,
    isslt -> slt_Rd
  ))

  io.ALU_ctrl := MuxCase(defaultRd, Seq(
    isaddi -> addi_ALU,
    isxori -> xori_ALU,
    isori -> ori_ALU,
    isandi -> andi_ALU,
    iscsrrw -> csrrw_ALU,
    iscsrrs -> csrrs_ALU,
    issrai -> srai_ALU,
    issrli -> srli_ALU,
    isslli -> slli_ALU,
    issltiu -> sltiu_ALU,
    isslti -> slti_ALU,
    islui  -> lui_ALU,
    isauipc  -> auipc_ALU,
    isjal  -> jal_ALU,
    isjalr -> jalr_ALU,
    issw -> sw_ALU,
    issb -> sb_ALU,
    issh -> sh_ALU,
    islw -> lw_ALU,
    islh -> lh_ALU,
    islhu -> lhu_ALU,
    islbu -> lbu_ALU,
    islb -> lb_ALU,
    isadd -> add_ALU,
    isand -> and_ALU,
    issll -> sll_ALU,
    issra -> sra_ALU,
    issrl -> srl_ALU,
    isxor -> xor_ALU,
    isor -> or_ALU,
    issub -> sub_ALU,
    isbeq -> beq_ALU,
    isbge -> bge_ALU,
    isblt -> blt_ALU,
    isbltu -> bltu_ALU,
    isbgeu -> bgeu_ALU,
    isbne -> bne_ALU,
    isslt -> slt_ALU,
    issltu -> sltu_ALU
  ))

  io.data_control := MuxCase(defaultdata_control, Seq(
    isauipc  -> auipc_data_control,
    isjal  -> jal_data_control,
    isjalr -> jalr_data_control,
    issw -> sw_data_control,
    issb -> sb_data_control,
    issh -> sh_data_control,
    islw -> lw_data_control,
    islh -> lh_data_control,
    islhu -> lhu_data_control,
    islbu -> lbu_data_control,
    islb -> lb_data_control,
    isadd -> add_data_control,
    isand -> and_data_control,
    issll -> sll_data_control,
    issra -> sra_data_control,
    issrl -> srl_data_control,
    isxor -> xor_data_control,
    isor -> or_data_control,
    issub -> sub_data_control,
    isbeq -> beq_data_control,
    isbge -> bge_data_control,
    isblt -> blt_data_control,
    isbltu -> bltu_data_control,
    isbgeu -> bgeu_data_control,
    isbne -> bne_data_control,
    isslt -> slt_data_control,
    issltu -> sltu_data_control
  ))

  io.pc_next_type := MuxCase(defaultpc_next_type, Seq(
    isjal  -> jal_pc_next_type,
    isjalr -> jalr_pc_next_type,
    isauipc  -> auipc_pc_next_type,
    islui  -> lui_pc_next_type,
    isaddi -> addi_pc_next_type,
    isxori -> xori_pc_next_type,
    isori -> ori_pc_next_type,
    isandi -> andi_pc_next_type,
    iscsrrw -> csrrw_pc_next_type,
    iscsrrs -> csrrs_pc_next_type,
    issrai -> srai_pc_next_type,
    issrli -> srli_pc_next_type,
    isslli -> slli_pc_next_type,
    issw -> sw_pc_next_type,
    issb -> sb_pc_next_type,
    issh -> sh_pc_next_type,
    isebreak -> ebreak_pc_next_type,
    isecall -> ecall_pc_next_type,
    ismret -> mret_pc_next_type,
    islw -> lw_pc_next_type,
    islh -> lh_pc_next_type,
    islhu -> lhu_pc_next_type,
    islbu -> lbu_pc_next_type,
    islb -> lb_pc_next_type,
    isadd -> add_pc_next_type,
    isand -> and_pc_next_type,
    issll -> sll_pc_next_type,
    issra -> sra_pc_next_type,
    issrl -> srl_pc_next_type,
    isxor -> xor_pc_next_type,
    isor -> or_pc_next_type,
    issub -> sub_pc_next_type,
    isbeq -> beq_pc_next_type,
    isbge -> bge_pc_next_type,
    isblt -> blt_pc_next_type,
    isbltu -> bltu_pc_next_type,
    isbgeu -> bgeu_pc_next_type,
    isbne -> bne_pc_next_type,
    issltu -> sltu_pc_next_type,
    isslt -> slt_pc_next_type,
    issltiu -> sltiu_pc_next_type,
    isslti -> slti_pc_next_type
  ))
  io.r_mask := MuxCase(defaultr_mask, Seq(
    islw -> lw_r_mask,
    islh -> lh_r_mask,
    islhu -> lhu_r_mask,
    islbu -> lbu_r_mask,
    islb -> lb_r_mask
  ))

  io.w_mask := MuxCase(defaultw_mask, Seq(
    issw -> sw_w_mask,
    issb -> sb_w_mask,
    issh -> sh_w_mask
  ))
}

object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
   emitVerilog(new IDU(), Array("--target-dir", "generated_verilog"))
}
