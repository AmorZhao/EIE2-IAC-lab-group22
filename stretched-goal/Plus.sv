// This is a simple plus module
// which was used in both PCTarget and PCPlus4

module Plus (
    input logic [31:0]        Op0, Op1,  
    output logic [31:0]       Result  
);

assign Result = Op0 + Op1;

endmodule 
