module rRISCV #(
    parameter A_WIDTH = 32,
    parameter D_WIDTH = 32
)(
    input logic     clk,
    input logic     rst,
    output logic    a0
);

//connecting wires

logic   [A_WIDTH-1:0]   PC,             //PCReg to Instr Mem
logic   [D_WIDTH-1:0]   instr,          //InstrMem to control unit, reg file and sign extend
logic                   ALUctrl,        //Control Unit to red block
logic                   ALUsrc,         //Control Unit to red block
logic   [D_WIDTH-1:0]   ImmOp,          //sign extend to red block and pcreg
logic                   RegWrite        //Control unit to reg file
logic                   EQ,             //alu to control unit
logic                   ImmSrc,         //Control unit to Sign extend




InstrMem InstrMem (
    .A (PC),
    .RD (instr)
)

red_block RedBlock(
    .clk,       (clk),           //MAIN INPUT CLK
    .rs1,       (instr[19:15]),        //instr mem       rs1
    .rs2,       (instr[24:20]),        //instr mem       rs2
    .rd,        (instr[11:7]),        //instr mem       rd
    .ALUsrc,    (ALUsrs),        //control unit    ALUsrc
    .ALUctrl,   (ALUctrl),       //control unit    ALUctrl
    .ImmOp,     (ImmOp),         //PCreg           Immop
    .RegWrite,  (RegWrite),      //control unit    RegWrite
    .EQ,        (EQ),            //control unit    EQ
    .a0         (a0)             //MAIN OUTPUT   
)

SignExtend SignExtend (
    .ImmSrc     (Immsrc),
    .instr      (instr),
    .ImmOp      (ImmOp)
)



endmodule