// SignExtend Immediate
// input ImmSrc = 0 indicates 12-bit Imm = instr[31:20]
// input ImmSrc = 1 indicates 12-bit Imm = instr[31]+[7]+[30:25]+[11:8]
// output 32-bit ImmOp = sign extended Imm

module SignExtend #(
    parameter   DATA_WIDTH = 32, 
                IMM_WIDTH = 12
)(
    input  logic                     ImmSrc, 
    input  logic  [DATA_WIDTH-1:0]   instr, 
    output logic  [DATA_WIDTH-1:0]   ImmOp
); 

    logic  [IMM_WIDTH-1:0]  Imm; 

    // reconstruct Imm
    if (ImmSrc)
    {
        assign Imm = {instr[31], instr[7], instr[30:25], instr[11:8]}; 
    }
    else 
    {
        assign Imm = instr[31:20]; 
    }

    // sign extend
    if (instr[IMM_WIDTH-1])
    {
        assign ImmOp = { (DATA_WIDTH-IMM_WIDTH){1'b1}, instr[IMM_WIDTH-1:0]}; 
    }
    else 
    {
        assign ImmOp = { (DATA_WIDTH-IMM_WIDTH){1'b0}, instr[IMM_WIDTH-1:0]};
    }

endmodule
