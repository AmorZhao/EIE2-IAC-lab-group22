// This is a general mux2 which could be used in: 
// selection of SrcB / Result / PcNext

module mux2 (
    input logic [31:0]        Op0, Op1, 
    input logic               Src, 
    output logic [31:0]       Result  
);

assign Result = Src ? Op1 : Op0;

endmodule 
