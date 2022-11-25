module reg_file #(
    parameter       ADDRESS_WIDTH = 5,
                    DATA_WIDTH = 32
)(
    input logic               clk, //clock
    input logic [4:0]         AD1, AD2, AD3, //inputs rs1, rs2, rd
    input logic               WE3, //RegWrite
    input logic [DATA_WIDTH-1:0]        WD3, //ALUout; to be written
    output logic [DATA_WIDTH-1:0]       RD1, RD2, //outputs
    output logic [DATA_WIDTH-1:0]       a0 // value stored in register location 1

);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if (WE3 == 1'b1)
        ram_array[AD3] <= WD3;
end

always_ff @(posedge clk) begin
    RD1 <= ram_array[AD1];
    RD2 <= ram_array[AD2];
end
    
assign a0 = ram_array[5'd10];

endmodule
