module RISCV #(
    parameter D_WIDTH = 32
)(
    input logic     clk
);

//----------- PC  and instr ------------- 
logic   [D_WIDTH-1:0]   PC;  
logic   [D_WIDTH-1:0]   PCNext; 
logic   [D_WIDTH-1:0]   PCPlus4; 
logic   [D_WIDTH-1:0]   PCTarget; 
logic   [D_WIDTH-1:0]   PCLink; 
logic   [D_WIDTH-1:0]   PCJump; 
logic   [D_WIDTH-1:0]   instr;   
//-------- Control Signals --------------
logic   [1:0]           PCSrc; 
logic   [1:0]           ResultSrc; 
logic                   MemWrite; 
logic   [2:0]           ALUControl;  
logic                   ALUSrc;   
logic   [1:0]           ImmSrc; 
logic                   RegWrite;  
//-------- Register ---------------------
logic   [D_WIDTH-1:0]   RD1;
logic   [D_WIDTH-1:0]   RD2; 
//---------- Extend and ALU -------------
logic   [D_WIDTH-1:0]   ImmExt; 
logic   [D_WIDTH-1:0]   SrcB; 
logic                   Zero;   
logic   [D_WIDTH-1:0]   ALUResult; 
//---- Data Memory and Result -----------
logic   [D_WIDTH-1:0]   ReadData; 
logic   [D_WIDTH-1:0]   DataResult; 
logic   [D_WIDTH-1:0]   Result;  

mux2 For_PCJump(
    .Op0(PCTarget), 
    .Op1(PCLink), 
    .Src(PCSrc[0]), 
    .Result(PCJump)
); 

mux2 For_PCNext(
    .Op0(PCPlus4), 
    .Op1(PCJump), 
    .Src(PCSrc[1]), 
    .Result(PCNext)
); 

pcreg PCregister(
    .clk(clk),    
    .PCNext(PCNext),  
    .PC(PC)
);

InstrMem Instr(
    .A(PC),
    .RD(instr)
); 

Plus For_PCPlus4(
    .Op0(PC), 
    .Op1(32'd4), 
    .Result(PCPlus4)
);

ControlUnit Control(
    .op(instr[6:0]), 
    .funct3(instr[14:12]), 
    .funct7_5(instr[30]), 
    .Zero(Zero), 
    .PCSrc(PCSrc), 
    .ResultSrc(ResultSrc), 
    .MemWrite(MemWrite), 
    .ALUControl(ALUControl), 
    .ALUSrc(ALUSrc), 
    .ImmSrc(ImmSrc), 
    .RegWrite(RegWrite)
); 

reg_file Register(
    .clk(clk),
    .A1(instr[19:15]), 
    .A2(instr[24:20]),
    .A3(instr[11:7]), 
    .WD3(Result), 
    .WE3(RegWrite), 
    .RD1(RD1), 
    .RD2(RD2)
); 

SignExtend SignExt(
    .ImmSrc(ImmSrc),
    .instr(instr),
    .ImmExt(ImmExt)
); 

mux2 For_SrcB(
    .Op0(RD2), 
    .Op1(ImmExt), 
    .Src(ALUSrc), 
    .Result(SrcB)
); 

alu ALU_module(
    .ALUControl(ALUControl), 
    .SrcA(RD1), 
    .SrcB(SrcB), 
    .Zero(Zero), 
    .ALUResult(ALUResult)
); 

Plus For_PCTarget(
    .Op0(PC), 
    .Op1(ImmExt), 
    .Result(PCTarget)
); 

Plus For_PCLink(
    .Op0(RD1), 
    .Op1(ImmExt), 
    .Result(PCLink)
); 

DataMemory Data(
    .clk(clk), 
    .A(ALUResult), 
    .WD(RD2), 
    .WE(MemWrite), 
    .RD(ReadData)
); 

mux2 For_DataResult(
    .Op0(ALUResult), 
    .Op1(ReadData), 
    .Src(ResultSrc[0]), 
    .Result(DataResult)
);

mux2 For_Result(
    .Op0(DataResult), 
    .Op1(PCPlus4), 
    .Src(ResultSrc[1]), 
    .Result(Result)
);

endmodule
