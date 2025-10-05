circuit Hello :
  module Hello :
    input clock : Clock
    input reset : UInt<1>
    output io : { led : UInt<1>}

    reg cntReg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h0")) @[Hello.scala 19:23]
    reg blkReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Hello.scala 20:23]
    node _cntReg_T = add(cntReg, UInt<1>("h1")) @[Hello.scala 22:20]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Hello.scala 22:20]
    cntReg <= _cntReg_T_1 @[Hello.scala 22:10]
    node _T = eq(cntReg, UInt<25>("h17d783f")) @[Hello.scala 23:15]
    when _T : @[Hello.scala 23:28]
      cntReg <= UInt<1>("h0") @[Hello.scala 24:12]
      node _blkReg_T = not(blkReg) @[Hello.scala 25:15]
      blkReg <= _blkReg_T @[Hello.scala 25:12]
    io.led <= blkReg @[Hello.scala 27:10]

