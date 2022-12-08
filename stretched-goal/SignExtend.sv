// SignExtend Immediate
// output 32-bit ImmOp = sign extended Imm

module SignExtend #(
    parameter   DATA_WIDTH = 32
)(
    input  logic  [1:0]              ImmSrc, 
    input  logic  [DATA_WIDTH-1:0]   instr, 
    output logic  [DATA_WIDTH-1:0]   ImmExt
); 

    logic  [11:0]  Imm0;   // Immediate
    logic  [11:0]  Imm1;   // store
    logic  [12:1]  Imm2;   // branch
    logic  [20:1]  Imm3;   // Jump

    // reconstruct Imm
    assign Imm0 = instr[31:20]; 
    assign Imm1 = {instr[31:25], instr[11:7]}; 
    assign Imm2 = {instr[31], instr[7], instr[30:25], instr[11:8]}; 
    assign Imm3 = {instr[31], instr[19:12], instr[20], instr[30:21]}; 
    
    always_comb begin
        if (ImmSrc == 2'b00) begin
            ImmExt = {{20{instr[31]}}, Imm0[11:0]}; 
        end
        else if (ImmSrc == 2'b01) begin 
            ImmExt = {{20{instr[31]}}, Imm1[11:0]}; 
        end
        else if (ImmSrc == 2'b10) begin 
            ImmExt = {{20{instr[31]}}, Imm2[12:1]}; 
        end
        else if (ImmSrc == 2'b11) begin 
            ImmExt = {{12{instr[31]}}, Imm3[20:1]}; 
        end
    end

endmodule

