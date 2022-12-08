## **Notes on building and testing the single cycle Reduced RISC-V:**

---

### **Hardware description**

---

#### Made changes in following modules: 
- ControlUnit.sv -- implemented Jump /Branch /Load / Store instructions
- alu.sv -- added instructions
- pcreg.sv -- changed into a simple register of PC
- SignExtend.sv -- added immediate types

#### Added following modules: 
- DataMemory.sv -- an async-read, sync-write ram memory
- Plus.sv -- used when determining value of PCPlus4 and PCTarget
- Mux2.sv -- used when determining value of Result and PCNext
- RISCV.sv -- overall connection based on schema in lecture 7 slide 16

#### The following modules stays almost the same (with only minor changes to signal names)
- InstruMem.sv 
- reg_file.sv

---

### **Signal Explained**

---
| Signal name   | value  |           Meaning             |     Annotation     |
| ------------- | ------ | ----------------------------- | ------------------ |
| PCSrc         |   00   |  PCPlus4                      |   Non-Jump
|               |   10   |  PCTarget = PC + ImmExt       |   Jal / Branch  
|               |   11   |  PCLink = RD1 + ImmExt        |   Jalr
| ResultSrc     |   00   |  ALU result                   |   R-type
|               |   01   |  Read data from data memory   |   load 
|               |   10   |  PC plus 4                    |   Jal
| MemWrite      |   0    |  Write disable
|               |   1    |  Write enable
| Branch        |   0    |  No Branch
|               |   1    |  Branch  
| ALUControl    |  000   |  add
|               |  001   |  subtract
|               |  010   |  and
|               |  011   |  or  
|               |  100   |  SLT (set less than)
|               |  101   |
|               |  110   |
|               |  111   |
| ALUSrc        |   0    |  op2 = RD2
|               |   1    |  op2 = ImmExt
| ImmSrc        |  00    |  [31:20]                     |  I-type
|               |  01    |  [31:25]+[11:7]              |  S-type
|               |  10    |  [31]+[7]+[30:25]+[11:8]     |  B-type
|               |  11    |  [31]+[19:12]+[20]+[30:21]   |  J-type
| RegWrite      |   0    |  Write disable
|               |   1    |  Write enable   

---

### **Testing**

---

#### Made necessary changes to following hardware, to enable jalr instructions: 
- **PCSrc was changed to a 2-bit signal:** to choose from PCPlus4 / PC+Imm / Rd+Imm. ( for jal and jalr )
- **ResultSrc was changed to a 2-bit signal:** to choose from ALUResult / ReadData / PC+Imm. ( for jal )
- **Added Plus block for RD1+ImmExt:** ( for jalr )

#### With the above idea, the following schema have been implemented: 

![374263040323319029](https://user-images.githubusercontent.com/87839533/206577722-5364691f-0d6a-4b2b-b74a-627e73091c27.jpg)

#### Tested lw and sw with following simple instructions: 
```
    addi x1 , x0,   0x0A  // 00a00093
    sw   x1 , 0x05 (x0)   // 001022a3
    lw   x2 , 0x05 (x0)   // 00502103
```
#### It could be seen in the waveform that the instructions are working correctly: 

<img width="515" alt="image" src="https://user-images.githubusercontent.com/87839533/206577756-c9479411-3ad7-4d1e-8eca-d1276d0b5a6d.png">

---
