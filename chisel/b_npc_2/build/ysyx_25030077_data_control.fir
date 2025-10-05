circuit ysyx_25030077_data_control :
  module ysyx_25030077_data_control :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip rs1_data : UInt<32>, flip rs2_data : UInt<32>, flip imm : UInt<32>, flip mem_data : UInt<32>, flip pc_count : UInt<32>, flip data_control : UInt<3>, data_1 : UInt<32>, data_2 : UInt<32>}

    node control1 = eq(io.data_control, UInt<1>("h1")) @[ysyx_25030077_data_control.scala 18:34]
    node control2 = eq(io.data_control, UInt<2>("h2")) @[ysyx_25030077_data_control.scala 19:34]
    node control3 = eq(io.data_control, UInt<2>("h3")) @[ysyx_25030077_data_control.scala 20:34]
    node _io_data_1_T = mux(control2, io.mem_data, io.rs1_data) @[Mux.scala 101:16]
    node _io_data_1_T_1 = mux(control1, io.pc_count, _io_data_1_T) @[Mux.scala 101:16]
    io.data_1 <= _io_data_1_T_1 @[ysyx_25030077_data_control.scala 24:13]
    node _io_data_2_T = mux(control3, io.rs2_data, io.imm) @[Mux.scala 101:16]
    node _io_data_2_T_1 = mux(control2, UInt<32>("h0"), _io_data_2_T) @[Mux.scala 101:16]
    io.data_2 <= _io_data_2_T_1 @[ysyx_25030077_data_control.scala 29:13]

