error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ChiselHelpers.scala.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ChiselHelpers.scala.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/chisel3.
	 -chisel3.
	 -scala/Predef.chisel3.
offset: 83
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ChiselHelpers.scala.scala
text:
```scala
// ChiselHelpers.scala
import chisel3._
import chisel3.util.dontTouch
import chisel@@3.experimental.DataMirror

object ChiselHelpers {
  // 递归处理所有Bundle（包括嵌套）
  def dontTouchBundleRecursive(bundle: Bundle): Unit = {
    bundle.elements.foreach { case (_, signal) =>
      signal match {
        case subBundle: Bundle => 
          dontTouchBundleRecursive(subBundle)
        case _ => 
          dontTouch(signal)
      }
    }
  }

  // 可选：只处理输入信号的版本
  def dontTouchInputsRecursive(bundle: Bundle): Unit = {
    bundle.elements.foreach { case (_, signal) =>
      signal match {
        case subBundle: Bundle => 
          dontTouchInputsRecursive(subBundle)
        case _ => 
          if (DataMirror.directionOf(signal) == Direction.Input) {
            dontTouch(signal)
          }
      }
    }
  }
}
```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.