import chisel3._
import chisel3.util._
class addrReq extends Bundle {
  val addr = UInt(32.W) // Rd <-> IFU
}

class InstReq extends Bundle { //IFU <-> SROM
  val addr = UInt(32.W) // 指令地址
}

class arReq extends Bundle { //SROM <-> SRAM

}

class awReq extends Bundle { //SROM <-> SRAM

}

class rReq extends Bundle { //SROM <-> SRAM

}

class wReq extends Bundle { //SROM <-> SRAM

}

class bReq extends Bundle { //SROM <-> SRAM

}


