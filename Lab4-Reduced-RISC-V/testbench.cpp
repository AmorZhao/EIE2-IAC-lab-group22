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
    for (i=0; i<30; i++) {

        //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);        //unit is in ps
            top->clk = !top->clk;
            top->eval ();
        }

        if (Verilated::gotFinish())  exit(0);
    }

    vbdClose(); //++++
    tfp->close();
    exit(0);
}
