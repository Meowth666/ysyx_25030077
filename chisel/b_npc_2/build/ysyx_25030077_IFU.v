module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [31:0] io_enq_bits_addr,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits_addr
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram_addr [0:0]; // @[Decoupled.scala 259:95]
  wire  ram_addr_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire  ram_addr_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_addr_MPORT_data; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_addr_MPORT_en; // @[Decoupled.scala 259:95]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 264:28]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
  assign ram_addr_io_deq_bits_MPORT_en = 1'h1;
  assign ram_addr_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_addr_io_deq_bits_MPORT_data = ram_addr[ram_addr_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_addr_MPORT_data = io_enq_bits_addr;
  assign ram_addr_MPORT_addr = 1'h0;
  assign ram_addr_MPORT_mask = 1'h1;
  assign ram_addr_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~maybe_full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits_addr = ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  always @(posedge clock) begin
    if (ram_addr_MPORT_en & ram_addr_MPORT_mask) begin
      ram_addr[ram_addr_MPORT_addr] <= ram_addr_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Decoupled.scala 262:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 262:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 279:27]
      maybe_full <= do_enq; // @[Decoupled.scala 280:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_addr[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  maybe_full = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_IFU(
  input         clock,
  input         reset,
  output        io_rd_Req_ready,
  input         io_rd_Req_valid,
  input  [31:0] io_rd_Req_bits_addr,
  input         io_ar_ready,
  output        io_ar_valid,
  output [31:0] io_ar_bits_addr
);
  wire  reqQ_clock; // @[Decoupled.scala 361:21]
  wire  reqQ_reset; // @[Decoupled.scala 361:21]
  wire  reqQ_io_enq_ready; // @[Decoupled.scala 361:21]
  wire  reqQ_io_enq_valid; // @[Decoupled.scala 361:21]
  wire [31:0] reqQ_io_enq_bits_addr; // @[Decoupled.scala 361:21]
  wire  reqQ_io_deq_ready; // @[Decoupled.scala 361:21]
  wire  reqQ_io_deq_valid; // @[Decoupled.scala 361:21]
  wire [31:0] reqQ_io_deq_bits_addr; // @[Decoupled.scala 361:21]
  Queue reqQ ( // @[Decoupled.scala 361:21]
    .clock(reqQ_clock),
    .reset(reqQ_reset),
    .io_enq_ready(reqQ_io_enq_ready),
    .io_enq_valid(reqQ_io_enq_valid),
    .io_enq_bits_addr(reqQ_io_enq_bits_addr),
    .io_deq_ready(reqQ_io_deq_ready),
    .io_deq_valid(reqQ_io_deq_valid),
    .io_deq_bits_addr(reqQ_io_deq_bits_addr)
  );
  assign io_rd_Req_ready = reqQ_io_enq_ready; // @[Decoupled.scala 365:17]
  assign io_ar_valid = reqQ_io_deq_valid; // @[ysyx_25030077_IFU.scala 13:15]
  assign io_ar_bits_addr = reqQ_io_deq_bits_addr; // @[ysyx_25030077_IFU.scala 14:19]
  assign reqQ_clock = clock;
  assign reqQ_reset = reset;
  assign reqQ_io_enq_valid = io_rd_Req_valid; // @[Decoupled.scala 363:22]
  assign reqQ_io_enq_bits_addr = io_rd_Req_bits_addr; // @[Decoupled.scala 364:21]
  assign reqQ_io_deq_ready = io_ar_ready; // @[ysyx_25030077_IFU.scala 15:14]
endmodule
