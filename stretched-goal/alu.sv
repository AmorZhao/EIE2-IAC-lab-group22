module alu (
    input logic     [2:0]       ALUControl,
    input logic     [31:0]      SrcA, SrcB,
    output logic    [31:0]      ALUResult,
    output logic                Zero
);

// set Zero = 1 if equal
always_comb begin
    if (SrcA == SrcB) begin 
        Zero = 1'b1; 
    end
    else begin
        Zero = 1'b0; 
    end
end

// ALU operations
always_comb begin
    if (ALUControl == 3'b000) begin
        ALUResult = SrcA + SrcB;
    end
    else if (ALUControl == 3'b001) begin
        ALUResult = SrcA - SrcB;
    end
    else if (ALUControl == 3'b010) begin
        ALUResult = (SrcA & SrcB);
    end
    else if (ALUControl == 3'b011) begin
        ALUResult = (SrcA | SrcB);
    end
    else if (ALUControl == 3'b101) begin
        ALUResult = (SrcA < SrcB);
    end
end

endmodule
