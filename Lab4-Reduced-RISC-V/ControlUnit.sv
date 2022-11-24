// ControlUnit is a decoder
// input:  32-bit instructions = instr
//         1-bit logic = EQ
// output: 1-bit control signals to other modules 

module ControlUnit (
    input  logic [6:0]             instr, 
    input  logic                   EQ, 
    output logic                   RegWrite, 
    output logic                   ALUctrl, 
    output logic                   ALUsrc, 
    output logic                   ImmSrc, 
    output logic                   PCsrc
); 

    logic   addi; 
    logic   bne; 

    // check opcode
    always_comb begin
        if ( instr[6:0] == 7'b0010011 ) begin //addi
            addi = 1; 
            bne = 0; 
        end
        else if ( instr[6:0] == 7'b1100011 ) begin //bne 
            addi = 0; 
            bne = 1; 
        end
    end
  
    // set output signals 
    always_comb  begin
        if (addi) begin
            RegWrite = 1'b1; 
            ALUctrl = 1'b1; 
            ALUsrc = 1'b1; 
            ImmSrc = 1'b0; 
            PCsrc = 1'b0; 
        end
        else if (bne && EQ) begin
            RegWrite = 1'b0; 
            ALUctrl = 1'b0; 
            ALUsrc = 1'b0; 
            ImmSrc = 1'b1; 
            PCsrc = 1'b1;
        end
    end

endmodule
