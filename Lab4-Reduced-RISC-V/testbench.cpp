#include "VrRISCV.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc,argv);
    //init top verilog instance
    VrRISCV* top = new VrRISCVr;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lfsr.vcd");

    //init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Lab 3: rRISCV");

    
        vbdSetMode(1);

    //initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    //run simulation for many clock cycles
    for (i=0; i<30; i++) {

        //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);        //unit is in ps
            top->clk = !top->clk;
            top->eval ();
        }

        vbdHex(2, (top->data_out >> 4) & 0XF);
        vbdHex(1, top->data_out & 0XF);
        vbdBar(top->data_out & 0xFF);
        // vbdPlot(int(top->count), 0, 255);
        vbdCycle(i+1);
        //---- end of Vbuddy output section

        top->rst = (i <2) | (i == 17);
        top->en = (i>4) ^ (i > 13 && i < 16);
        if (Verilated::gotFinish())  exit(0);
    }

    vbdClose(); //++++
    tfp->close();
    exit(0);
}
