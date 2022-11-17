// InstrMem is an asynchronous ROM
// read instructions from InstructionROM.mem file
// input: 32-bit address = A
// output: 32-bit instruction = RD

module InstrMem #(
    parameter   ADDRESS_WIDTH = 32, 
                DATA_WIDTH = 32
)(
    input   logic [ADDRESS_WIDTH-1:0] A, 
    output  logic [DATA_WIDTH-1:0]    RD
); 

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0]; 

initial begin
    $display("Loading rom."); 
    $readmemh("InstructionROM.mem", rom_array); 
end; 

RD <=rom_array [A]; 

endmodule
