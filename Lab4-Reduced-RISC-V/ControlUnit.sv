// ControlUnit is a decoder
// input:  32-bit instructions = instr
//         1-bit logic = EQ
// output: 1-bit control signals to other modules 

module ControlUnit #(
    parameter  DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0]  instr, 
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
    if ( instr[6:0] == 7'b0010011 ) //addi
    {
        addi <= 1; 
        bne <= 0; 
    }
    else if ( instr[6:0] == 7'b1100011 ) //bne 
    {
        addi <= 0; 
        bne <= 1; 
    }
  
    // set output signals 
    if (addi)
    {
        RegWrite <= 1'b1; 
        ALUctrl <= 1'b1; 
        ALUsrc <= 1'b1; 
        ImmSrc <= 1'b0; 
        PCsrc <= 1'b0; 
    }
    else if (bne)
    {
        RegWrite <= 1'b0; 
        ALUctrl <= 1'b0; 
        ALUsrc <= 1'b0; 
        ImmSrc <= 1'b1; 
        PCsrc <= 1'b1;
    }

endmodule
