import chisel3._
import chisel3.util._
import chisel3.experimental.DataMirror

object ChiselHelpers {
  def dontTouchBundle(bundle: Bundle): Unit = {
    bundle.elements.foreach { case (_, signal) =>
      dontTouch(signal)
    }
  }
  def dontTouchBundleRecursive(bundle: Bundle): Unit = {
    bundle.elements.foreach { case (_, signal) =>
      signal match {
        case subBundle: Bundle => 
          dontTouchBundleRecursive(subBundle)  // 递归处理子Bundle
        case _ => 
          dontTouch(signal)
      }
    }
  }
}