import chisel3._
import chisel3.util._

class InstReq extends Bundle {
  val addr = UInt(32.W) // 指令地址
}

class addrReq extends Bundle {
  val addr = UInt(32.W) // 指令地址
}

class yimaReq extends Bundle {
  val inst = UInt(32.W) // 指令地址
}
