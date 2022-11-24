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

logic [7:0] rom_array [2**ADDRESS_WIDTH-1:0]; 

initial begin
    $display("Loading rom."); 
    $readmemh("Instruction.mem", rom_array); 
end; 

assign RD = {rom_array [A], rom_array [A+1], rom_array [A+2], rom_array [A+3]} ; 

endmodule
