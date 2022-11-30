module alu (
    input logic                 ALUctrl,
    input logic     [31:0]      ALUop1, ALUop2,
    output logic    [31:0]      ALUout,
    output logic                EQ

);

assign ALUout = ALUop1 + ALUop2;
assign EQ = (ALUop1 == ALUop2);

endmodule
