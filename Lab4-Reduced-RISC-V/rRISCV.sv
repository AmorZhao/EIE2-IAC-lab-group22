module rRISCV #(
    parameter D_WIDTH = 32
)(
    input logic     clk,
    input logic     rst,
    output logic [D_WIDTH-1:0]    a0
);

//connecting wires

logic   [D_WIDTH-1:0]   PC;             //PCReg to Instr Mem
logic   [D_WIDTH-1:0]   instr;          //InstrMem to control unit, reg file and sign extend
logic                   ALUctrl;        //Control Unit to red block
logic                   ALUsrc;         //Control Unit to red block
logic   [D_WIDTH-1:0]   ImmOp;          //sign extend to red block and pcreg
logic                   RegWrite;       //Control unit to reg file
logic                   EQ;             //alu to control unit
logic                   ImmSrc;         //Control unit to Sign extend
logic                   PCsrc;          //Control unit to PC_reg Mux

pcreg PCregister(
    .clk(clk),    // clock
    .rst(rst),    // reset
    .immop(ImmOp),  // jump instruction pc
    .pcsrc(PCsrc),  // pc source
    .pc(PC)
);

ControlUnit Control(
    .instr(instr[6:0]), 
    .EQ(EQ), 
    .RegWrite(RegWrite), 
    .ALUctrl(ALUctrl), 
    .ALUsrc(ALUsrc), 
    .ImmSrc(ImmSrc), 
    .PCsrc(PCsrc)
);


InstrMem InstrMem (
    .A (PC),
    .RD (instr)
); 

red_block RedBlock(
    .clk(clk),           //MAIN INPUT CLK
    .rs1(instr[19:15]),        //instr mem       rs1
    .rs2(instr[24:20]),        //instr mem       rs2
    .rd(instr[11:7]),        //instr mem       rd
    .ALUsrc(ALUsrc),        //control unit    ALUsrc
    .ALUctrl(ALUctrl),       //control unit    ALUctrl
    .ImmOp(ImmOp),         //PCreg           Immop
    .RegWrite(RegWrite),      //control unit    RegWrite
    .EQ(EQ),            //control unit    EQ
    .a0(a0)             //MAIN OUTPUT   
); 

SignExtend SignExtend (
    .ImmSrc     (ImmSrc),
    .instr      (instr),
    .ImmOp      (ImmOp)
); 

ControlUnit ControlUnit (
    .instr      (instr),
    .EQ         (EQ),
    .RegWrite   (RegWrite),
    .ALUctrl    (ALUctrl),
    .ALUsrc     (ALUsrc),
    .ImmSrc     (ImmSrc),
    .PCsrc      (PCsrc)
)

pcreg PC_Reg (
    .clk        (clk),
    .rst        (rst),
    .immop      (ImmOp),
    .pcsrc      (PCsrc),
    .pc         (PC)
)


endmodule
