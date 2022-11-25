# IAC Lab 4 - A Reduced RISC-V CPU [Group 22]
---
## Group Members:
- Amor Zhao
- Junyu Meng
- Robin Masih
- Vidisha Mistry
---

https://github.com/EIE2-IAC-Labs/Lab4-Reduced-RISC-V
---

![image](https://user-images.githubusercontent.com/87839533/203973935-0802a4c2-0315-46ae-9c5c-e89835aafddb.png)

---

## Debug notes: 

- Always use if/else conditions in always_comb with blocking assignments
(usually considered as hardware connection with and/or gates in reality)
- Always use nonblocking assignments in always_ff with @ when there's change in signals
(if there's no change in signal, always_ff would not be suitable)
- Error message "$readmem file address beyond bounds of array" may be caused by defining too long an array
(2**32 is too long, 4GB actually, which could not be simulated by verilator)
- rst signal in testbench: pay more attention in rst conditions at the end of for loop
(if not writen properly, it may cause issue that PC=0 executing for more than 1 clk cycle, or resetting at unexpected times)
- Instruction memory has been modified: bne jumping back by 8 address in memory (rather than the original 4 bits) so that a0 changes as a1 counts per cycle
- a0 and a1 refers to x10 and x11 in register file, these signals represents the actual return values in computer achitecture
- Similarly, t1 is a temporiry which stores the upper limit of counter
