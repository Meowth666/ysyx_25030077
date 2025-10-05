circuit top :
  module addr_gen :
    input clock : Clock
    input reset : Reset
    output io : { IFUReq : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}}

    reg addr_state : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[addr_gen.scala 11:27]
    reg dataReg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[addr_gen.scala 14:24]
    node _dataReg_T = eq(addr_state, UInt<1>("h0")) @[addr_gen.scala 16:30]
    node _dataReg_T_1 = add(dataReg, UInt<32>("h4")) @[addr_gen.scala 16:54]
    node _dataReg_T_2 = tail(_dataReg_T_1, 1) @[addr_gen.scala 16:54]
    node _dataReg_T_3 = mux(_dataReg_T, _dataReg_T_2, dataReg) @[addr_gen.scala 16:17]
    dataReg <= _dataReg_T_3 @[addr_gen.scala 16:11]
    node _addr_state_T = mux(io.IFUReq.ready, UInt<1>("h0"), UInt<1>("h1")) @[addr_gen.scala 21:27]
    node _addr_state_T_1 = eq(UInt<1>("h1"), addr_state) @[Mux.scala 81:61]
    node _addr_state_T_2 = mux(_addr_state_T_1, _addr_state_T, UInt<1>("h1")) @[Mux.scala 81:58]
    addr_state <= _addr_state_T_2 @[addr_gen.scala 19:14]
    node _io_IFUReq_valid_T = eq(addr_state, UInt<1>("h1")) @[addr_gen.scala 25:34]
    io.IFUReq.valid <= _io_IFUReq_valid_T @[addr_gen.scala 25:19]
    io.IFUReq.bits.addr <= dataReg @[addr_gen.scala 26:23]

  module IFU :
    input clock : Clock
    input reset : Reset
    output io : { flip addr_Req : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, sramReq : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}}

    reg state : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[IFU.scala 12:22]
    reg addrReg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h0")) @[IFU.scala 15:24]
    node _addrReg_T = eq(state, UInt<1>("h1")) @[IFU.scala 18:25]
    node _addrReg_T_1 = and(_addrReg_T, io.addr_Req.valid) @[IFU.scala 18:43]
    node _addrReg_T_2 = mux(_addrReg_T_1, io.addr_Req.bits.addr, addrReg) @[IFU.scala 18:17]
    addrReg <= _addrReg_T_2 @[IFU.scala 18:11]
    node _state_T = mux(io.sramReq.ready, UInt<1>("h0"), UInt<1>("h1")) @[IFU.scala 23:24]
    node _state_T_1 = eq(UInt<1>("h1"), state) @[Mux.scala 81:61]
    node _state_T_2 = mux(_state_T_1, _state_T, UInt<1>("h1")) @[Mux.scala 81:58]
    state <= _state_T_2 @[IFU.scala 21:9]
    node _io_sramReq_valid_T = eq(state, UInt<1>("h1")) @[IFU.scala 27:30]
    io.sramReq.valid <= _io_sramReq_valid_T @[IFU.scala 27:20]
    io.sramReq.bits.addr <= addrReg @[IFU.scala 28:24]
    node _io_addr_Req_ready_T = eq(state, UInt<1>("h1")) @[IFU.scala 29:31]
    io.addr_Req.ready <= _io_addr_Req_ready_T @[IFU.scala 29:21]

  module SRAM :
    input clock : Clock
    input reset : Reset
    output io : { flip req : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, instOut : UInt<32>}

    reg state_ram : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[SRAM.scala 12:26]
    reg instReg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h413")) @[SRAM.scala 15:24]
    node _instReg_T = mux(io.req.valid, instReg, io.req.bits.addr) @[SRAM.scala 17:17]
    instReg <= _instReg_T @[SRAM.scala 17:11]
    node _state_ram_T = mux(io.req.valid, UInt<1>("h1"), UInt<1>("h0")) @[SRAM.scala 21:24]
    node _state_ram_T_1 = mux(io.req.ready, UInt<1>("h0"), UInt<1>("h1")) @[SRAM.scala 22:17]
    node _state_ram_T_2 = eq(UInt<1>("h1"), state_ram) @[Mux.scala 81:61]
    node _state_ram_T_3 = mux(_state_ram_T_2, _state_ram_T_1, _state_ram_T) @[Mux.scala 81:58]
    state_ram <= _state_ram_T_3 @[SRAM.scala 20:13]
    node _io_req_ready_T = eq(state_ram, UInt<1>("h1")) @[SRAM.scala 25:30]
    io.req.ready <= _io_req_ready_T @[SRAM.scala 25:16]
    io.instOut <= instReg @[SRAM.scala 26:14]

  module top :
    input clock : Clock
    input reset : UInt<1>
    output io : { instOut : UInt<32>, pc_count : UInt<32>}

    inst addr_gen of addr_gen @[top.scala 12:25]
    addr_gen.clock <= clock
    addr_gen.reset <= reset
    inst ifu of IFU @[top.scala 13:20]
    ifu.clock <= clock
    ifu.reset <= reset
    inst sram of SRAM @[top.scala 14:20]
    sram.clock <= clock
    sram.reset <= reset
    ifu.io.addr_Req <= addr_gen.io.IFUReq @[top.scala 16:22]
    sram.io.req <= ifu.io.sramReq @[top.scala 18:18]
    io.instOut <= sram.io.instOut @[top.scala 20:14]
    reg addr_Reg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[top.scala 23:25]
    addr_Reg <= addr_gen.io.IFUReq.bits.addr @[top.scala 24:12]
    io.pc_count <= addr_Reg @[top.scala 26:15]

