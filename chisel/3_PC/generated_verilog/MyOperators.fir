circuit MyOperators :
  module MyOperators :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip next_pc : UInt<32>, Pc_count : UInt<32>}

    reg state : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[module.scala 11:22]
    state <= io.next_pc @[module.scala 13:9]
    io.Pc_count <= state @[module.scala 14:15]

