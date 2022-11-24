module alu (
    input logic                 ALUctrl,
    input logic     [31:0]      ALUop1, ALUop2,
    output logic    [31:0]      ALUout,
    output logic                EQ

);

always_ff 
    if (ALUctrl)    ALUout = ALUop1 + ALUop2;
// else if (ALUctrl == "001") begin
//     assign ALUout = ALUop1 - ALUop2;
// end
// else if (ALUctrl == "010") begin
//     assign ALUout = ALUop1 & ALUop2;
// end
// else if (ALUctrl == "011") begin
//     assign ALUout = ALUop1 | ALUop2;
// end
// else if (ALUctrl == "101") begin
//     assign ALUout = ALUop1 < ALUop2;
// end
    else    EQ = (ALUop1 == ALUop2);

endmodule
