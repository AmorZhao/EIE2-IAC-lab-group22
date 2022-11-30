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

    logic  [IMM_WIDTH-1:0]  Imm1; 
    logic  [IMM_WIDTH-1:0]  Imm2;
    logic  [IMM_WIDTH-1:0]  Imm;  

    // reconstruct Imm
    assign Imm1 = {instr[31], instr[7], instr[30:25], instr[11:8]}; 
    assign Imm2 = instr[31:20]; 
    assign Imm = ImmSrc ? Imm1 : Imm2; 
    

    // sign extend
    assign ImmOp = { {20{Imm[IMM_WIDTH-1]}}, Imm[IMM_WIDTH-1:0]}; 

endmodule
