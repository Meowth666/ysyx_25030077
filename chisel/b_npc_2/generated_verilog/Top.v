module Top(
  input         clock,
  input         reset,
  input  [31:0] io_addrIn,
  output [31:0] io_instOut
);
  assign io_instOut = 32'h0; // @[top.scala 27:14]
endmodule
