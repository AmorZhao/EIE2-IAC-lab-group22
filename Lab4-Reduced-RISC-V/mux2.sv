module mux2 (
    input logic [31:0]        RegOp2, ImmExt,//RD2 from Reg file; immediate value from instruction after extension
    input logic               ALUsrc, //selector
    output logic [31:0]       ALUResult //mux output  
);

assign ALUResult = ALUsrc ? ImmExt : RegOp2;

endmodule 
