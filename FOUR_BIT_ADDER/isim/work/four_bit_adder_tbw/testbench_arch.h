////////////////////////////////////////////////////////////////////////////////
//   ____  ____   
//  /   /\/   /  
// /___/  \  /   
// \   \   \/  
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /---/   /\     
// \   \  /  \  
//  \___\/\___\
////////////////////////////////////////////////////////////////////////////////

#ifndef H_Work_four_bit_adder_tbw_testbench_arch_H
#define H_Work_four_bit_adder_tbw_testbench_arch_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_four_bit_adder_tbw_testbench_arch: public HSim__s6 {
public:


HSimFileVar Results;
HSim__s4 V18;
HSimAccessVar V1b;
    HSim__s1 SA[6];
    Work_four_bit_adder_tbw_testbench_arch(const char * name);
    ~Work_four_bit_adder_tbw_testbench_arch();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_four_bit_adder_tbw_testbench_arch(const char *name);

#endif
