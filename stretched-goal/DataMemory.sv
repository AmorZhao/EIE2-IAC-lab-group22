// Data Memory is a async-read, sync-write ram memory

module DataMemory #(
    parameter           DATA_WIDTH = 32
)(
    input logic                          clk, 
    input logic [DATA_WIDTH-1:0]         A, 
    input logic                          WE, 
    input logic [DATA_WIDTH-1:0]         WD, 
    output logic [DATA_WIDTH-1:0]        RD
);

logic [DATA_WIDTH-1:0] ram_array [10000:0];

assign RD = ram_array[A];

always_ff @(posedge clk) begin
    if (WE == 1'b1) begin
        ram_array[A] <= WD;
    end
end

endmodule
