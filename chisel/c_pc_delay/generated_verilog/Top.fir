circuit Top :
  module IFU :
    input clock : Clock
    input reset : Reset
    output io : { flip addrIn : UInt<32>, sramReq : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, flip sramResp : { flip ready : UInt<1>, valid : UInt<1>, bits : { inst : UInt<32>}}, instOut : UInt<32>}

    reg reqValid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[IFU.scala 13:25]
    reg instReg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), instReg) @[IFU.scala 14:21]
    node _io_sramReq_valid_T = eq(reqValid, UInt<1>("h0")) @[IFU.scala 16:23]
    io.sramReq.valid <= _io_sramReq_valid_T @[IFU.scala 16:20]
    io.sramReq.bits.addr <= io.addrIn @[IFU.scala 17:24]
    io.sramResp.ready <= reqValid @[IFU.scala 19:21]
    node reqFire = and(io.sramReq.ready, io.sramReq.valid) @[Decoupled.scala 50:35]
    node respFire = and(io.sramResp.ready, io.sramResp.valid) @[Decoupled.scala 50:35]
    node _reqValid_T = eq(reqValid, UInt<1>("h0")) @[IFU.scala 24:6]
    node _reqValid_T_1 = and(_reqValid_T, reqFire) @[IFU.scala 24:16]
    node _reqValid_T_2 = and(reqValid, respFire) @[IFU.scala 25:15]
    node _reqValid_T_3 = mux(_reqValid_T_1, UInt<1>("h1"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _reqValid_T_4 = mux(_reqValid_T_2, UInt<1>("h0"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _reqValid_T_5 = or(_reqValid_T_3, _reqValid_T_4) @[Mux.scala 27:73]
    wire _reqValid_WIRE : UInt<1> @[Mux.scala 27:73]
    _reqValid_WIRE <= _reqValid_T_5 @[Mux.scala 27:73]
    reqValid <= _reqValid_WIRE @[IFU.scala 23:12]
    node _instReg_T = mux(respFire, io.sramResp.bits.inst, instReg) @[IFU.scala 28:17]
    instReg <= _instReg_T @[IFU.scala 28:11]
    io.instOut <= instReg @[IFU.scala 30:14]

  module SRAM :
    input clock : Clock
    input reset : Reset
    output io : { flip req : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, resp : { flip ready : UInt<1>, valid : UInt<1>, bits : { inst : UInt<32>}}}

    io.req.ready <= UInt<1>("h1") @[SRAM.scala 11:16]
    reg validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[SRAM.scala 14:25]
    node nextValid = and(io.req.ready, io.req.valid) @[Decoupled.scala 50:35]
    node _validReg_T = and(io.resp.ready, io.resp.valid) @[Decoupled.scala 50:35]
    node _validReg_T_1 = eq(_validReg_T, UInt<1>("h0")) @[SRAM.scala 16:41]
    node _validReg_T_2 = and(validReg, _validReg_T_1) @[SRAM.scala 16:38]
    node _validReg_T_3 = or(nextValid, _validReg_T_2) @[SRAM.scala 16:25]
    validReg <= _validReg_T_3 @[SRAM.scala 16:12]
    io.resp.valid <= validReg @[SRAM.scala 19:17]
    io.resp.bits.inst <= UInt<1>("h0") @[SRAM.scala 20:21]

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip addrIn : UInt<32>, instOut : UInt<32>}

    inst ifu of IFU @[top.scala 11:19]
    ifu.clock <= clock
    ifu.reset <= reset
    inst sram of SRAM @[top.scala 12:20]
    sram.clock <= clock
    sram.reset <= reset
    ifu.io.addrIn <= io.addrIn @[top.scala 15:17]
    sram.io.req.valid <= ifu.io.sramReq.valid @[top.scala 18:21]
    sram.io.req.bits.addr <= ifu.io.sramReq.bits.addr @[top.scala 19:21]
    ifu.io.sramReq.ready <= sram.io.req.ready @[top.scala 20:24]
    sram.io.resp.ready <= ifu.io.sramResp.ready @[top.scala 22:22]
    ifu.io.sramResp.valid <= sram.io.resp.valid @[top.scala 23:25]
    ifu.io.sramResp.bits.inst <= sram.io.resp.bits.inst @[top.scala 24:24]
    io.instOut <= ifu.io.instOut @[top.scala 27:14]

