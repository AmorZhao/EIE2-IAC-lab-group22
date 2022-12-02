module add #(
    parameter WIDTH = 32
)(
    input logic     [WIDTH-1:0]      PCE, ImmExt,
    output logic    [WIDTH-1:0]      PCTargetE,
);

assign PCTargetE = PCE + ImmExt;

endmodule