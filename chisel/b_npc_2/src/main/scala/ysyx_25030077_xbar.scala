import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_xbar extends Module {
  val io = IO(new Bundle { 
    val axi_ar_valid = Input(Bool())
    val axi_ar_addr = Input(UInt(32.W))
    val axi_ar_strb = Input(UInt(3.W))
    val axi_ar_ready = Output(Bool())

    val axi_aw_valid = Input(Bool())
    val axi_aw_addr = Input(UInt(32.W))
    val axi_aw_ready = Output(Bool())

    val axi_w_valid = Input(Bool())
    val axi_w_data = Input(UInt(32.W))
    val axi_w_strb = Input(UInt(3.W))
    val axi_w_ready = Output(Bool())

    val axi_r_valid = Output(Bool())
    val axi_r_data =Output(UInt(32.W))
    val axi_r_ready = Input(Bool())
    //r_resp
    val axi_b_valid = Output(Bool())
    val axi_b_ready = Input(Bool())
    val axi_b_resp = Output(UInt(2.W))

    val axi_ar_valid_mem = Output(Bool())
    val axi_ar_addr_mem = Output(UInt(32.W))
    val axi_ar_strb_mem = Output(UInt(3.W))
    val axi_ar_ready_mem = Input(Bool())

    val axi_ar_valid_clint = Output(Bool())
    val axi_ar_addr_clint = Output(UInt(32.W))
    val axi_ar_strb_clint = Output(UInt(3.W))
    val axi_ar_ready_clint = Input(Bool())

    val axi_aw_valid_mem = Output(Bool())
    val axi_aw_addr_mem = Output(UInt(32.W))
    val axi_aw_ready_mem = Input(Bool())

    val axi_w_valid_mem = Output(Bool())
    val axi_w_data_mem = Output(UInt(32.W))
    val axi_w_strb_mem = Output(UInt(3.W))
    val axi_w_ready_mem = Input(Bool())

    val axi_aw_valid_uart = Output(Bool())
    val axi_aw_addr_uart = Output(UInt(32.W))
    val axi_aw_ready_uart = Input(Bool())

    val axi_w_valid_uart = Output(Bool())
    val axi_w_data_uart = Output(UInt(32.W))
    val axi_w_strb_uart = Output(UInt(3.W))
    val axi_w_ready_uart = Input(Bool())

    val axi_r_valid_mem = Input(Bool())
    val axi_r_data_mem = Input(UInt(32.W))
    val axi_r_ready_mem = Output(Bool())
    //r_resp
    val axi_b_valid_mem = Input(Bool())
    val axi_b_ready_mem = Output(Bool())
    val axi_b_resp_mem = Input(UInt(2.W))

    val axi_b_valid_clint = Input(Bool())
    val axi_b_ready_clint = Output(Bool())
    val axi_b_resp_clint = Input(UInt(2.W))

    val axi_r_valid_clint = Input(Bool())
    val axi_r_data_clint = Input(UInt(32.W))
    val axi_r_ready_clint = Output(Bool())
  })

    io.axi_r_valid := io.axi_r_valid_mem || io.axi_r_valid_clint
    io.axi_ar_ready := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), io.axi_ar_ready_clint, io.axi_ar_ready_mem)
    io.axi_r_data := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), io.axi_r_data_clint, io.axi_r_data_mem)
    
    io.axi_aw_addr_mem  := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0.U, io.axi_aw_addr)
    io.axi_aw_addr_uart := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0xa00003f8L.U, 0.U)
    
    io.axi_aw_valid_mem  := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0.U, io.axi_aw_valid)
    io.axi_aw_valid_uart := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_aw_valid, 0.U)
    
    io.axi_ar_addr_mem    := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), 0x80000000L.U, io.axi_ar_addr)
    io.axi_ar_addr_clint  := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), io.axi_ar_addr, 0x80000000L.U)      

    io.axi_ar_valid_mem    := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), 0.U, io.axi_ar_valid)
    io.axi_ar_valid_clint  := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), io.axi_ar_valid, 0.U)      
       
    io.axi_ar_strb_mem    := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), 0.U, io.axi_ar_strb)
    io.axi_ar_strb_clint  := Mux(((io.axi_ar_addr === 0xa0000048L.U) || (io.axi_ar_addr === 0xa000004cL.U)), io.axi_ar_strb, 0.U)      

    io.axi_w_valid_mem  := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0.U, io.axi_w_valid)
    io.axi_w_valid_uart := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_w_valid, 0.U)

    io.axi_w_data_mem  := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0.U, io.axi_w_data)
    io.axi_w_data_uart := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_w_data, 0.U)

    io.axi_w_strb_mem  := Mux(io.axi_aw_addr === 0xa00003f8L.U, 0.U, io.axi_w_strb)
    io.axi_w_strb_uart := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_w_strb, 0.U)

    io.axi_b_ready_clint := io.axi_b_ready
    io.axi_b_ready_mem   := io.axi_b_ready

    io.axi_b_resp := 0.U

    io.axi_b_valid := io.axi_b_valid_mem || io.axi_b_valid_clint

    io.axi_r_ready_mem   := io.axi_r_ready
    io.axi_r_ready_clint := io.axi_r_ready
    io.axi_w_ready := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_w_ready_uart, io.axi_w_ready_mem)
    io.axi_aw_ready := Mux(io.axi_aw_addr === 0xa00003f8L.U, io.axi_aw_ready_uart, io.axi_aw_ready_mem)
}