circuit top :
  module top :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip add_valid : UInt<1>, flip addr_in : UInt<32>, pc_count : UInt<32>}

    reg addr_Reg : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[top.scala 10:25]
    node _addr_Reg_T = eq(io.add_valid, UInt<1>("h1")) @[top.scala 11:34]
    node _addr_Reg_T_1 = mux(_addr_Reg_T, addr_Reg, io.addr_in) @[top.scala 11:19]
    addr_Reg <= _addr_Reg_T_1 @[top.scala 11:12]
    io.pc_count <= addr_Reg @[top.scala 12:15]

