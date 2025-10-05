circuit MyOperators :
  module MyOperators :
    input clock : Clock
    input reset : UInt<1>
    input io_in : UInt<4>
    output io_out_add : UInt<4>
    output io_out_sub : UInt<4>
    output io_out_mul : UInt<4>

    node _io_out_add_T = add(UInt<1>("h1"), UInt<3>("h4")) @[Hello.scala 11:21]
    node _io_out_add_T_1 = tail(_io_out_add_T, 1) @[Hello.scala 11:21]
    node _io_out_sub_T = sub(UInt<2>("h2"), UInt<1>("h1")) @[Hello.scala 12:21]
    node _io_out_sub_T_1 = tail(_io_out_sub_T, 1) @[Hello.scala 12:21]
    node _io_out_mul_T = mul(UInt<3>("h4"), UInt<2>("h2")) @[Hello.scala 13:21]
    io_out_add <= pad(_io_out_add_T_1, 4) @[Hello.scala 11:14]
    io_out_sub <= pad(_io_out_sub_T_1, 4) @[Hello.scala 12:14]
    io_out_mul <= bits(_io_out_mul_T, 3, 0) @[Hello.scala 13:14]
