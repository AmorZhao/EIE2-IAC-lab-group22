// ControlUnit is a decoder

module ControlUnit (
    input  logic [6:0]             op, 
    input  logic [14:12]           funct3, 
    input  logic                   funct7_5, 
    input  logic                   Zero, 
    output logic   [1:0]           PCSrc, 
    output logic   [1:0]           ResultSrc, 
    output logic                   MemWrite, 
    output logic  [2:0]            ALUControl, 
    output logic                   ALUSrc, 
    output logic  [1:0]            ImmSrc, 
    output logic                   RegWrite 
); 

    always_comb begin
        // R-type: 3 registers ---------------------------
        if ( op == 7'b0110011 ) begin 
            PCSrc = 2'b00; 
            ResultSrc = 2'b00; 
            MemWrite = 1'b0; 
            ALUSrc = 1'b0; 
            ImmSrc = 2'b00;  // don't care
            RegWrite = 1'b1; 
            casez ({funct3, funct7_5})
            {3'b000, 1'b0}: ALUControl = 3'b000;  // add
            {3'b000, 1'b1}: ALUControl = 3'b001;  // sub
            {3'b010, 1'b0}: ALUControl = 3'b101;  // slt (set less than)
            {3'b110, 1'b0}: ALUControl = 3'b011;  // or
            {3'b111, 1'b0}: ALUControl = 3'b010;  // and
            default: ALUControl = 3'b000; 
            endcase
        end
        // I-type: immediate -----------------------------
        else if ( op == 7'b0010011 ) begin 
            PCSrc = 2'b00; 
            ResultSrc = 2'b00; 
            MemWrite = 1'b0; 
            ALUSrc = 1'b1; 
            ImmSrc = 2'b00; 
            RegWrite = 1'b1; 
            casez (funct3)
            3'b000: ALUControl = 3'b000;  // addi
            3'b010: ALUControl = 3'b101;  // slti (set less than imm)
            3'b110: ALUControl = 3'b011;  // ori
            3'b111: ALUControl = 3'b010;  // andi
            default: ALUControl = 3'b000; 
            endcase 
        end
        // I-type: load word -------------------------------
        else if ( op == 7'b0000011 ) begin
            PCSrc = 2'b00; 
            ResultSrc = 2'b01; 
            MemWrite = 1'b0; 
            ALUControl = 3'b000;  // imm(rs1) = offset + base
            ALUSrc = 1'b1; 
            ImmSrc = 2'b00; 
            RegWrite = 1'b1; 
        end
        // S-type: store ----------------------------------
        else if ( op == 7'b0100011 ) begin 
            PCSrc = 2'b00; 
            ResultSrc = 2'b00; // don't care
            MemWrite = 1'b1; 
            ALUControl = 3'b000;  // imm(rs1) = offset + base
            ALUSrc = 1'b1; 
            ImmSrc = 2'b01; 
            RegWrite = 1'b0; 
        end
        // B-type: branch ----------------------------------
        else if ( op == 7'b1100011 ) begin
            ResultSrc = 2'b00; // don't care
            MemWrite = 1'b0; 
            ALUControl = 3'b000; // don't care
            ALUSrc = 1'b0; 
            ImmSrc = 2'b10;  
            RegWrite = 1'b0; 
            casez ({funct3, Zero})
            {3'b000, 1'b1}:   PCSrc = 2'b10;  // beq
            {3'b000, 1'b0}:   PCSrc = 2'b00;  // beq not satisfied
            {3'b001, 1'b1}:   PCSrc = 2'b00;  // bne not satisfied
            {3'b001, 1'b0}:   PCSrc = 2'b10;  // bne
            default:   PCSrc = 2'b00;  
            endcase
        end
        // J-type: jal (Jump and link) ----------------------
        else if ( op == 7'b1101111 ) begin
            PCSrc = 2'b10;  // PCTarget
            ResultSrc = 2'b10; 
            MemWrite = 1'b0; 
            ALUControl = 3'b000; // don't care
            ALUSrc = 1'b1; // don't care
            ImmSrc = 2'b11;  
            RegWrite = 1'b1; 
        end
        // I-type: jalr (Jump and link register) ------------
        else if ( op == 7'b1101111 ) begin
            PCSrc = 2'b11;  // PCLink
            ResultSrc = 2'b10; 
            MemWrite = 1'b0; 
            ALUControl = 3'b000;  // don't care
            ALUSrc = 1'b1; // don't care
            ImmSrc = 2'b00; 
            RegWrite = 1'b1; 
        end
    end

endmodule
