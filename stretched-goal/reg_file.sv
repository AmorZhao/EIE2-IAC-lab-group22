module reg_file #(
    parameter       ADDRESS_WIDTH = 5,
                    DATA_WIDTH = 32
)(
    input logic                         clk, 
    input logic [4:0]                   A1, A2, A3, 
    input logic                         WE3, 
    input logic [DATA_WIDTH-1:0]        WD3, 
    output logic [DATA_WIDTH-1:0]       RD1, RD2 
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

assign RD1 = ram_array[A1];
assign RD2 = ram_array[A2];

always_ff @(posedge clk) begin
    if (WE3 == 1'b1) begin
        ram_array[A3] <= WD3;
    end
end

endmodule
