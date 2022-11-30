#include "VrRISCV.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc,argv);
    //init top verilog instance
    VrRISCV* top = new VrRISCV;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("rRISCV.vcd");

    //init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab 4: rRISCV");

    
        vbdSetMode(1);

    //initialize simulation inputs
    top->clk = 1;
    top->rst = 0;

    //run simulation for many clock cycles
    for (i=0; i<50; i++) {

        //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);        //unit is in ps
            top->clk = !top->clk;
            top->eval ();
        }

        vbdHex(4, (top->a0 >> 16) & 0XF);
        vbdHex(3, (top->a0 >> 8) & 0XF);
        vbdHex(2, (top->a0 >> 4) & 0XF);
        vbdHex(1, top->a0 & 0XF);
        vbdCycle(i+1);
        //---- end of Vbuddy output section

        if (Verilated::gotFinish())  exit(0);
    }

    vbdClose(); //++++
    tfp->close();
    exit(0);
}
