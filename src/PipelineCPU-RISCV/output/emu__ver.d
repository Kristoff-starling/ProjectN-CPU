output/emu.cpp output/emu.h output/emu.mk output/emu_Adder32.cpp output/emu_Adder32.h output/emu_Adder32__Slow.cpp output/emu__Slow.cpp output/emu__Syms.cpp output/emu__Syms.h output/emu__ver.d output/emu_classes.mk  : /usr/bin/verilator_bin /usr/bin/verilator_bin src/ALU_RV32.v src/ALU_signal.v src/Adder32.v src/Adder32_p.v src/CLA4.v src/CLA8.v src/CLU4.v src/CtrSignal.v src/EX.v src/FA.v src/ID.v src/IF.v src/InstrToImm.v src/JumpCtr.v src/M.v src/NextAddr.v src/Regfiles.v src/WB.v src/barrelshift.v src/cpu_shell.v src/mux8.v src/mycpu.v 
