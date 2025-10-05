circuit MyOperators :
  module MyOperators :
    input clock : Clock
    input reset : UInt<1>
    output io : { Pc_count : UInt<32>}

    reg state : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[module.scala 10:22]
    node _nextState_T = eq(state, UInt<32>("h80000010")) @[module.scala 11:29]
    node _nextState_T_1 = add(state, UInt<3>("h4")) @[module.scala 11:81]
    node _nextState_T_2 = tail(_nextState_T_1, 1) @[module.scala 11:81]
    node nextState = mux(_nextState_T, UInt<32>("h80000000"), _nextState_T_2) @[module.scala 11:22]
    state <= nextState @[module.scala 12:9]
    io.Pc_count <= state @[module.scala 13:15]

