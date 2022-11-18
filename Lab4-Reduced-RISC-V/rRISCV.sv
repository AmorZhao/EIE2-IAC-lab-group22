module rRISCV #(
    parameter A_WIDTH = 32
)(
    input logic     clk,
    input logic     rst,
    output logic    a0
);

logic   [A_WIDTH-1:0]   pc,
logic   [A_WIDTH-1:0]   instr;

InstrMem InstrMem (
    .A (pc),
    .RD (instr)
)

pcreg pcreg(
    .clk(clk)
    .rst(rst)
    .en(1)
    .immop()
    .pcsrc()
    .count(pc)
    )


endmodule