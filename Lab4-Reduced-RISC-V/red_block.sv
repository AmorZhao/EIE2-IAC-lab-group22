module red_block #(  
    parameter   D_WIDTH = 32
)(
    input logic                     clk,            //MAIN INPUT CLK
    input logic     [4:0]           rs1,            //instr mem       rs1
    input logic     [4:0]           rs2,            //instr mem       rs2
    input logic     [4:0]           rd,             //instr mem       rd
    input logic                     ALUsrc,         //control unit    ALUsrc
    input logic                     ALUctrl,        //control unit    ALUctrl
    input logic     [D_WIDTH-1:0]   ImmOp,          //PCreg           Immop
    input logic                     RegWrite,       //control unit    RegWrite
    output logic                    EQ,             //control unit    EQ
    output logic    [D_WIDTH-1:0]   a0              //MAIN OUTPUT
); 

//connectiong wires
logic     [D_WIDTH-1:0]   ALUop1;        //RD1 to ALUop1
logic     [D_WIDTH-1:0]   regop2;        //RD2 to mux2
logic     [D_WIDTH-1:0]   ALUop2;        //mux2 to ALUop2
logic     [D_WIDTH-1:0]   ALUout;        //ALUsum to WD3

mux2 Mux2 (
    .RegOp2     (regop2),
    .ImmOp      (ImmOp),
    .ALUsrc     (ALUsrc),
    .ALUop2     (ALUop2)
); 

alu ALU(
    .ALUctrl    (ALUctrl),
    .ALUop1     (ALUop1),
    .ALUop2     (ALUop2),
    .ALUout     (ALUout),
    .EQ         (EQ)
); 

reg_file REG_FILE(
    .clk    (clk),
    .AD1    (rs1),
    .AD2    (rs2),
    .AD3    (rd),
    .WE3    (RegWrite),
    .WD3    (ALUout),
    .RD1    (ALUop1),
    .RD2    (regop2),
    .a0     (a0)
); 

endmodule
