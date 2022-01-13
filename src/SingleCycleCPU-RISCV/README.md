# SingleCycleCPU-RISCV

`cpu_shell.v`  是顶层模块，其中包含了同步的数据存储器和指令存储器。在 `reset==1` 时，该程序会将对应测试文件的指令代码写入到指令存储器中。之后 `cpu_shell.v` 主要负责 CPU 和 Mem 的数据交互。

`mycpu.v` 是 CPU 的外部框架，用于将 CPU 的各个部分连接起来。以下梳理地址 addr 处的指令的执行过程：

* 在 `PC=addr-4` 的时钟周期的后半部分，即上升沿到来时，PC 被提前赋成 nextPC，即 addr。CPU 会拿着 nextPC 去指令寄存器中取 addr 处的指令，根据指令进行译码，产生控制信号，并到寄存器堆中取操作数，在 ALU 中计算出结果。这一部分均为组合电路，全部在 `dbg_pc = addr-4` 的时候提前完成。
* 在 `PC=addr` 的时钟周期的前半部分，dbg_pc 被赋成 PC，用于 difftest。此时下地址逻辑（组合电路）的输出也会相应地更新，`nextPC=addr+4`，为本周期后段提前做 `addr+4` 处的指令做准备。下降沿到来时，load 类型指令可以从数据存储器中取数。
* 在 `PC=addr` 的时钟周期的后半部分，虽然 dbg_pc 仍为 addr，但实际上 CPU 已经完全在处理 `addr+4` 处的指令了。在下降沿到来时，CPU 完成对寄存器堆的回写和数据存储器的回写。

`ALU_RV32.v` 是一个封装好的 ALU 模块，其中调用了 `Adder32_p.v`，这是一个组间并行，组内并行的加法器。该加法器的另一个实例化模块用在下地址逻辑中用于计算 PC+4 的值。`Adder32.v` `CLA4.v` `CLA8.v` `CLU4.v` `FA.v` `mux8.v` `barrelshift.v` 均为 ALU 的子模块。

`Regfile.v` 是寄存器堆，支持双口组合读数据和单口上升沿时序写数据。

`NextAddr.v` 和 `JumpCtr.v` 是下地址模块，完全是组合逻辑。为了在 difftest 开始阶段匹配上，当 rst 拉高时下地址模块会输出当前 PC 而不是 nextPC。

`InstrToImm.v` 是立即数扩展器。

`CtrSignal.v` 是控制信号生成器，完全是组合逻辑。当 done 信号到来时，控制信号全部为 0。

