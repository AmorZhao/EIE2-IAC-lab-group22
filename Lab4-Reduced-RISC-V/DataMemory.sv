module DataMemory #(
    parameter       DATA_WIDTH = 32
)(
    input logic                        clk,   
    input logic                        WE, 
    input logic  [DATA_WIDTH-1:0]      WD, 
    input logic  [DATA_WIDTH-1:0]      A, 
    output logic [DATA_WIDTH-1:0]      RD
);

logic [DATA_WIDTH-1:0] ram_array [1000:0];

always_ff @(posedge clk) begin
    if (WE3 == 1'b1)
        ram_array[A] <= WD;
end

always_ff @(posedge clk) begin
    RD <= ram_array[A];
end

endmodule
