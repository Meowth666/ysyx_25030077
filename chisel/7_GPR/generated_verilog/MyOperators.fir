circuit MyOperators :
  module MyOperators :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip waddr : UInt<5>, flip wdata : UInt<32>, flip raddr_rs1 : UInt<5>, rdata_rs1 : UInt<32>, flip raddr_rs2 : UInt<5>, rdata_rs2 : UInt<32>}

    wire _regs_WIRE : UInt<32>[32] @[module.scala 14:29]
    _regs_WIRE[0] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[1] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[2] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[3] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[4] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[5] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[6] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[7] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[8] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[9] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[10] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[11] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[12] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[13] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[14] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[15] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[16] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[17] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[18] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[19] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[20] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[21] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[22] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[23] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[24] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[25] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[26] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[27] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[28] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[29] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[30] <= UInt<32>("h0") @[module.scala 14:29]
    _regs_WIRE[31] <= UInt<32>("h0") @[module.scala 14:29]
    reg regs : UInt<32>[32], clock with :
      reset => (reset, _regs_WIRE) @[module.scala 14:21]
    reg waddr_d : UInt, clock with :
      reset => (UInt<1>("h0"), waddr_d) @[module.scala 17:24]
    waddr_d <= io.waddr @[module.scala 17:24]
    reg wdata_d : UInt, clock with :
      reset => (UInt<1>("h0"), wdata_d) @[module.scala 18:24]
    wdata_d <= io.wdata @[module.scala 18:24]
    node _T = or(waddr_d, UInt<5>("h0"))
    node _T_1 = bits(_T, 4, 0)
    node _regs_T = eq(waddr_d, UInt<1>("h0")) @[module.scala 21:32]
    node _regs_T_1 = mux(_regs_T, UInt<1>("h0"), wdata_d) @[module.scala 21:23]
    regs[_T_1] <= _regs_T_1 @[module.scala 21:17]
    io.rdata_rs1 <= regs[io.raddr_rs1] @[module.scala 24:16]
    io.rdata_rs2 <= regs[io.raddr_rs2] @[module.scala 25:16]

