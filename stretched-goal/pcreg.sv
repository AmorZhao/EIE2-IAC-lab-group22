// This is a simple flipflop 
// as PCNext has already been determined 
// from previous Mux2 module

module pcreg #(
    parameter WIDTH = 32
)(
    input   logic              clk,         
    input   logic [WIDTH-1:0]  PCNext, 
    output  logic [WIDTH-1:0]  PC
);

always_ff @ (posedge clk) begin
    PC <= PCNext; 
end    
        
endmodule
