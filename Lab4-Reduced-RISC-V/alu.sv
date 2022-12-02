module alu #(
    parameter WIDTH = 32
)(
    input logic     [2:0]            ALUctrl,
    input logic     [WIDTH-1:0]      ALUop1, ALUop2,
    output logic    [WIDTH-1:0]      ALUout,
    output logic                     EQ

);

always_comb begin
    if (ALUctrl == 3'b000) begin //add
        ALUout = ALUop1 + ALUop2;
    end
    else if (ALUctrl == 3'b001) begin //subtract
        ALUout = ALUop1 - ALUop2;
    end
    else if (ALUctrl == 3'b010) begin //and
        ALUout = ALUop1 && ALUop2;
    end
    else if (ALUctrl == 3'b011) begin //or
        ALUout = ALUop1 || ALUop2;
    end
    else if (ALUctrl == 3'b101) begin //SLT
        ALUout = ALUop1 < ALUop2;
    end
end


assign EQ = (ALUop1 == ALUop2);

endmodule
