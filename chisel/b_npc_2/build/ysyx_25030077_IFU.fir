circuit ysyx_25030077_IFU :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, count : UInt<1>}

    cmem ram : { addr : UInt<32>} [1] @[Decoupled.scala 259:95]
    wire value : UInt
    value <= UInt<1>("h0")
    wire value_1 : UInt
    value_1 <= UInt<1>("h0")
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 50:35]
    wire do_enq : UInt<1>
    do_enq <= _do_enq_T
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 50:35]
    wire do_deq : UInt<1>
    do_deq <= _do_deq_T
    when do_enq : @[Decoupled.scala 272:16]
      infer mport MPORT = ram[UInt<1>("h0")], clock @[Decoupled.scala 273:8]
      MPORT <= io.enq.bits @[Decoupled.scala 273:24]
    when do_deq : @[Decoupled.scala 276:16]
      skip
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    when _T : @[Decoupled.scala 279:27]
      maybe_full <= do_enq @[Decoupled.scala 280:16]
    when UInt<1>("h0") : @[Decoupled.scala 282:15]
      value <= UInt<1>("h0") @[Counter.scala 99:11]
      value_1 <= UInt<1>("h0") @[Counter.scala 99:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 285:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 288:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 288:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 289:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 289:16]
    infer mport io_deq_bits_MPORT = ram[UInt<1>("h0")], clock @[Decoupled.scala 296:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 296:17]
    node _ptr_diff_T = sub(value, value_1) @[Decoupled.scala 312:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 312:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 315:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<1>("h1"), UInt<1>("h0")) @[Decoupled.scala 315:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 315:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 315:14]

  module ysyx_25030077_IFU :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip rd_Req : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}, ar : { flip ready : UInt<1>, valid : UInt<1>, bits : { addr : UInt<32>}}}

    inst reqQ of Queue @[Decoupled.scala 361:21]
    reqQ.clock <= clock
    reqQ.reset <= reset
    reqQ.io.enq.valid <= io.rd_Req.valid @[Decoupled.scala 363:22]
    reqQ.io.enq.bits.addr <= io.rd_Req.bits.addr @[Decoupled.scala 364:21]
    io.rd_Req.ready <= reqQ.io.enq.ready @[Decoupled.scala 365:17]
    io.ar.valid <= reqQ.io.deq.valid @[ysyx_25030077_IFU.scala 13:15]
    io.ar.bits.addr <= reqQ.io.deq.bits.addr @[ysyx_25030077_IFU.scala 14:19]
    reqQ.io.deq.ready <= io.ar.ready @[ysyx_25030077_IFU.scala 15:14]

