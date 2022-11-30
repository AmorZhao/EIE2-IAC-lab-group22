<<<<<<< HEAD
module mux2 (
    input logic [31:0]        RegOp2, ImmOp,//RD2 from Reg file; immediate value from instruction
    input logic              ALUsrc, //selector
    output logic [31:0]       ALUop2 //mux output  
);

assign ALUop2 = ALUsrc ? ImmOp : RegOp2;

endmodule 
=======
module mux2 (
    input logic [31:0]        RegOp2, ImmOp,//RD2 from Reg file; immediate value from instruction
    input logic              ALUsrc, //selector
    output logic [31:0]       ALUop2 //mux output  
);

assign ALUop2 = ALUsrc ? ImmOp : RegOp2;

endmodule 
>>>>>>> DEBUG
