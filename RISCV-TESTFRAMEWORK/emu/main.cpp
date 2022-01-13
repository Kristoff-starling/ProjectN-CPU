#include "SingleRiscv.h"
#include "emu.h"
#include <memory>
#include <iostream>
#include <verilated.h>
#include <stdint.h>
#include <assert.h>

//SingleRiscv运行一个周期
void next_cycle_r(std::shared_ptr<SingleRiscv> dut){
  dut->eval();
  dut->clk = 0;
  dut->eval();
  dut->eval();
  dut->clk = 1;
  dut->eval();
}

//mycpu运行一个周期
void next_cycle(std::shared_ptr<emu> mycpu){
  mycpu->eval();
  mycpu->clk = 0;
  mycpu->eval();
  mycpu->eval();
  mycpu->clk = 1;
  mycpu->eval();
}

//检查Pc和dbgregs
bool cycle_check(std::shared_ptr<SingleRiscv> dut, std::shared_ptr<emu> mycpu){
  if(dut->dbg_pc != mycpu->dbg_pc){ printf("right pc:%x your pc:%x\n",dut->dbg_pc,mycpu->dbg_pc);return false;}
  if(dut->dbgregs_0 != mycpu->dbgregs_0){ printf("right dbgregs_0:%x your dbgregs_0:%x\n",dut->dbgregs_0,mycpu->dbgregs_0);return false;}
  if(dut->dbgregs_1 != mycpu->dbgregs_1){ printf("right dbgregs_1:%x your dbgregs_1:%x\n",dut->dbgregs_1,mycpu->dbgregs_1);return false;}
  if(dut->dbgregs_2 != mycpu->dbgregs_2){ printf("right dbgregs_2:%x your dbgregs_2:%x\n",dut->dbgregs_2,mycpu->dbgregs_2);return false;}
  if(dut->dbgregs_3 != mycpu->dbgregs_3){ printf("right dbgregs_3:%x your dbgregs_3:%x\n",dut->dbgregs_3,mycpu->dbgregs_3);return false;}
  if(dut->dbgregs_4 != mycpu->dbgregs_4){ printf("right dbgregs_4:%x your dbgregs_4:%x\n",dut->dbgregs_4,mycpu->dbgregs_4);return false;}
  if(dut->dbgregs_5 != mycpu->dbgregs_5){ printf("right dbgregs_5:%x your dbgregs_5:%x\n",dut->dbgregs_5,mycpu->dbgregs_5);return false;}
  if(dut->dbgregs_6 != mycpu->dbgregs_6){ printf("right dbgregs_6:%x your dbgregs_6:%x\n",dut->dbgregs_6,mycpu->dbgregs_6);return false;}
  if(dut->dbgregs_7 != mycpu->dbgregs_7){ printf("right dbgregs_7:%x your dbgregs_7:%x\n",dut->dbgregs_7,mycpu->dbgregs_7);return false;}
  if(dut->dbgregs_8 != mycpu->dbgregs_8){ printf("right dbgregs_8:%x your dbgregs_8:%x\n",dut->dbgregs_8,mycpu->dbgregs_8);return false;}
  if(dut->dbgregs_9 != mycpu->dbgregs_9){ printf("right dbgregs_9:%x your dbgregs_9:%x\n",dut->dbgregs_9,mycpu->dbgregs_9);return false;}
  if(dut->dbgregs_10 != mycpu->dbgregs_10){ printf("right dbgregs_10:%x your dbgregs_10:%x\n",dut->dbgregs_10,mycpu->dbgregs_10);return false;}
  if(dut->dbgregs_11 != mycpu->dbgregs_11){ printf("right dbgregs_11:%x your dbgregs_11:%x\n",dut->dbgregs_11,mycpu->dbgregs_11);return false;}
  if(dut->dbgregs_12 != mycpu->dbgregs_12){ printf("right dbgregs_12:%x your dbgregs_12:%x\n",dut->dbgregs_12,mycpu->dbgregs_12);return false;}
  if(dut->dbgregs_13 != mycpu->dbgregs_13){ printf("right dbgregs_13:%x your dbgregs_13:%x\n",dut->dbgregs_13,mycpu->dbgregs_13);return false;}
  if(dut->dbgregs_14 != mycpu->dbgregs_14){ printf("right dbgregs_14:%x your dbgregs_14:%x\n",dut->dbgregs_14,mycpu->dbgregs_14);return false;}
  if(dut->dbgregs_15 != mycpu->dbgregs_15){ printf("right dbgregs_15:%x your dbgregs_15:%x\n",dut->dbgregs_15,mycpu->dbgregs_15);return false;}
  if(dut->dbgregs_16 != mycpu->dbgregs_16){ printf("right dbgregs_16:%x your dbgregs_16:%x\n",dut->dbgregs_16,mycpu->dbgregs_16);return false;}
  if(dut->dbgregs_17 != mycpu->dbgregs_17){ printf("right dbgregs_17:%x your dbgregs_17:%x\n",dut->dbgregs_17,mycpu->dbgregs_17);return false;}
  if(dut->dbgregs_18 != mycpu->dbgregs_18){ printf("right dbgregs_18:%x your dbgregs_18:%x\n",dut->dbgregs_18,mycpu->dbgregs_18);return false;}
  if(dut->dbgregs_19 != mycpu->dbgregs_19){ printf("right dbgregs_19:%x your dbgregs_19:%x\n",dut->dbgregs_19,mycpu->dbgregs_19);return false;}
  if(dut->dbgregs_20 != mycpu->dbgregs_20){ printf("right dbgregs_20:%x your dbgregs_20:%x\n",dut->dbgregs_20,mycpu->dbgregs_20);return false;}
  if(dut->dbgregs_21 != mycpu->dbgregs_21){ printf("right dbgregs_21:%x your dbgregs_21:%x\n",dut->dbgregs_21,mycpu->dbgregs_21);return false;}
  if(dut->dbgregs_22 != mycpu->dbgregs_22){ printf("right dbgregs_22:%x your dbgregs_22:%x\n",dut->dbgregs_22,mycpu->dbgregs_22);return false;}
  if(dut->dbgregs_23 != mycpu->dbgregs_23){ printf("right dbgregs_23:%x your dbgregs_23:%x\n",dut->dbgregs_23,mycpu->dbgregs_23);return false;}
  if(dut->dbgregs_24 != mycpu->dbgregs_24){ printf("right dbgregs_24:%x your dbgregs_24:%x\n",dut->dbgregs_24,mycpu->dbgregs_24);return false;}
  if(dut->dbgregs_25 != mycpu->dbgregs_25){ printf("right dbgregs_25:%x your dbgregs_25:%x\n",dut->dbgregs_25,mycpu->dbgregs_25);return false;}
  if(dut->dbgregs_26 != mycpu->dbgregs_26){ printf("right dbgregs_26:%x your dbgregs_26:%x\n",dut->dbgregs_26,mycpu->dbgregs_26);return false;}
  if(dut->dbgregs_27 != mycpu->dbgregs_27){ printf("right dbgregs_27:%x your dbgregs_27:%x\n",dut->dbgregs_27,mycpu->dbgregs_27);return false;}
  if(dut->dbgregs_28 != mycpu->dbgregs_28){ printf("right dbgregs_28:%x your dbgregs_28:%x\n",dut->dbgregs_28,mycpu->dbgregs_28);return false;}
  if(dut->dbgregs_29 != mycpu->dbgregs_29){ printf("right dbgregs_29:%x your dbgregs_29:%x\n",dut->dbgregs_29,mycpu->dbgregs_29);return false;}
  if(dut->dbgregs_30 != mycpu->dbgregs_30){ printf("right dbgregs_30:%x your dbgregs_30:%x\n",dut->dbgregs_30,mycpu->dbgregs_30);return false;}
  if(dut->dbgregs_31 != mycpu->dbgregs_31){ printf("right dbgregs_31:%x your dbgregs_31:%x\n",dut->dbgregs_31,mycpu->dbgregs_31);return false;}
  return true;
}

void print_reg(std::shared_ptr<SingleRiscv> dut, std::shared_ptr<emu> mycpu)
{

printf("right pc:%x your pc:%x\n",dut->dbg_pc,mycpu->dbg_pc);
printf("right dbgregs_0 :%10x your dbgregs_0 :%10x\n",dut->dbgregs_0,mycpu->dbgregs_0);
printf("right dbgregs_1 :%10x your dbgregs_1 :%10x\n",dut->dbgregs_1,mycpu->dbgregs_1);
printf("right dbgregs_2 :%10x your dbgregs_2 :%10x\n",dut->dbgregs_2,mycpu->dbgregs_2);
printf("right dbgregs_3 :%10x your dbgregs_3 :%10x\n",dut->dbgregs_3,mycpu->dbgregs_3);
printf("right dbgregs_4 :%10x your dbgregs_4 :%10x\n",dut->dbgregs_4,mycpu->dbgregs_4);
printf("right dbgregs_5 :%10x your dbgregs_5 :%10x\n",dut->dbgregs_5,mycpu->dbgregs_5);
printf("right dbgregs_6 :%10x your dbgregs_6 :%10x\n",dut->dbgregs_6,mycpu->dbgregs_6);
printf("right dbgregs_7 :%10x your dbgregs_7 :%10x\n",dut->dbgregs_7,mycpu->dbgregs_7);
printf("right dbgregs_8 :%10x your dbgregs_8 :%10x\n",dut->dbgregs_8,mycpu->dbgregs_8);
printf("right dbgregs_9 :%10x your dbgregs_9 :%10x\n",dut->dbgregs_9,mycpu->dbgregs_9);
printf("right dbgregs_10:%10x your dbgregs_10:%10x\n",dut->dbgregs_10,mycpu->dbgregs_10);
printf("right dbgregs_11:%10x your dbgregs_11:%10x\n",dut->dbgregs_11,mycpu->dbgregs_11);
printf("right dbgregs_12:%10x your dbgregs_12:%10x\n",dut->dbgregs_12,mycpu->dbgregs_12);
printf("right dbgregs_13:%10x your dbgregs_13:%10x\n",dut->dbgregs_13,mycpu->dbgregs_13);
printf("right dbgregs_14:%10x your dbgregs_14:%10x\n",dut->dbgregs_14,mycpu->dbgregs_14);
printf("right dbgregs_15:%10x your dbgregs_15:%10x\n",dut->dbgregs_15,mycpu->dbgregs_15);
printf("right dbgregs_16:%10x your dbgregs_16:%10x\n",dut->dbgregs_16,mycpu->dbgregs_16);
printf("right dbgregs_17:%10x your dbgregs_17:%10x\n",dut->dbgregs_17,mycpu->dbgregs_17);
printf("right dbgregs_18:%10x your dbgregs_18:%10x\n",dut->dbgregs_18,mycpu->dbgregs_18);
printf("right dbgregs_19:%10x your dbgregs_19:%10x\n",dut->dbgregs_19,mycpu->dbgregs_19);
printf("right dbgregs_20:%10x your dbgregs_20:%10x\n",dut->dbgregs_20,mycpu->dbgregs_20);
printf("right dbgregs_21:%10x your dbgregs_21:%10x\n",dut->dbgregs_21,mycpu->dbgregs_21);
printf("right dbgregs_22:%10x your dbgregs_22:%10x\n",dut->dbgregs_22,mycpu->dbgregs_22);
printf("right dbgregs_23:%10x your dbgregs_23:%10x\n",dut->dbgregs_23,mycpu->dbgregs_23);
printf("right dbgregs_24:%10x your dbgregs_24:%10x\n",dut->dbgregs_24,mycpu->dbgregs_24);
printf("right dbgregs_25:%10x your dbgregs_25:%10x\n",dut->dbgregs_25,mycpu->dbgregs_25);
printf("right dbgregs_26:%10x your dbgregs_26:%10x\n",dut->dbgregs_26,mycpu->dbgregs_26);
printf("right dbgregs_27:%10x your dbgregs_27:%10x\n",dut->dbgregs_27,mycpu->dbgregs_27);
printf("right dbgregs_28:%10x your dbgregs_28:%10x\n",dut->dbgregs_28,mycpu->dbgregs_28);
printf("right dbgregs_29:%10x your dbgregs_29:%10x\n",dut->dbgregs_29,mycpu->dbgregs_29);
printf("right dbgregs_30:%10x your dbgregs_30:%10x\n",dut->dbgregs_30,mycpu->dbgregs_30);
printf("right dbgregs_31:%10x your dbgregs_31:%10x\n",dut->dbgregs_31,mycpu->dbgregs_31);

}

//将输入的Test的字符串读取为Int64传入硬件，使其初始化读取Mem。
uint64_t char2int(char *argv){
  uint64_t re = 0;
  int i = 0;
  for(i = 0;i < 8;i++){
    if(argv[i] != '\0')
      re = (re << 8) + (uint64_t)argv[i];
    else
      break;
  }
  return re;
}

int main(int argc, char **argv) {
  std::shared_ptr<SingleRiscv> dut = std::make_shared<SingleRiscv>();
  std::shared_ptr<emu> mycpu = std::make_shared<emu>();
  for (int tst = 1; tst < argc; tst ++)
  {
    printf("Test No.%d: %s\n", tst, argv[tst]);
    uint64_t testcase = char2int(argv[tst]);
    // initial， reset的时候imem读取对应的testbench。
    dut->reset = 1;
    mycpu->reset = 1;
    dut->testcase = testcase;
    mycpu->testcase = testcase;
    next_cycle_r(dut);
    next_cycle_r(dut);
    next_cycle(mycpu);
    next_cycle(mycpu);
    dut->reset = 0;
    mycpu->reset = 0;
    bool pass = false;
    for (int i = 0; i < 10000; i++) {
      next_cycle(mycpu);
      if(mycpu->wb == 1){
        next_cycle_r(dut);
        if(cycle_check(dut,mycpu) == false){
          print_reg(dut,mycpu);
          return 0;
        }
      }
      if(dut->done == 1 && mycpu->done == 1){
        printf("Pass Test\n"); pass = true;
        break;
      }
    }
    if (!pass) {printf("Dead\n"); return 0;}
  }
  return 0;
}
