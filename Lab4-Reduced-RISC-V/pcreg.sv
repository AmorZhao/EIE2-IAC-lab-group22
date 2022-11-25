module pc #(
    parameter WIDTH = 32
)(
    // interface signals
    input   logic             clk,    // clock
    input   logic             rst,    // reset
    input   logic [WIDTH-1:0] immop,  // jump instruction pc
    input   logic             pcsrc,  // pc source
    output  logic [WIDTH-1:0] pc      // pc output
);

always_ff @ (posedge clk, posedge rst)
    if (rst) pc <= {WIDTH{1'b0}};
    else case(pcsrc)
        1'b0: pc <= pc + {{WIDTH-3{1'b0}}, en, {2{1'b0}}};
        1'b1: pc <= pc + immop;
        default: pc <= pc;
    endcase
        
        
endmodule