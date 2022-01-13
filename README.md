# ProjectN-CPU
The project includes:
- [x] RISCV Single Cycle CPU
- [x] RV32I standard tests
- [x] I/O Devices
- [x] RISCV 5-stage Pipeline CPU

## RISC-V Single Cycle CPU

 A Chinese version of technical details is available at `/src/SingleCycleCPU-RISCV`.

## RV32I Standard tests

To run tests, you should install verilog 4.038:

```bash
sudo apt-get install verilog
```

You can follow the instructions in `/RISCV-TESTFRAMEWORK` for details.

(Note: some dummy tests are available at `dummy` , it includes a bubblesort program written in assembly and some load-store tests.)

## I/O Devices

ProjectN-CPU uses memory-mapped I/O to support I/O devices (Note: some of the devices are based on Xilinx's FPGA development board), the addresses of range `0xa0000000~0xffffffff` are distributed to I/O devices. A list of available devices is shown below:

* Clock

    Read-only device counting the executing time of CPU in microseconds.

* LED lights

    Read-and-write device. A halfword at LED_ADDR represent seach light's status. `lh` instruction can be used to query the status of lights and `sh` instruction can be used to change the status.

* Switches

    Read-only devices. `lh` instruction can be used to query the status of switches.

* Buttons

* Serial

    Read-only device that can transfer the data at SERIAL_ADDR to the serial. `lw` instruction can be used to do outputs.

And the table below shows the addresses distributed for each device:

| Device      | Clock      | LED        | Switches   | Buttons    | Serial     |
| ----------- | ---------- | ---------- | ---------- | ---------- | ---------- |
| **Address** | 0xa0000048 | 0xa0000400 | 0xa0000500 | 0xa0000600 | 0xa00003f8 |

## RISC-V Pipeline CPU

The pipeline CPU consists of 5 pipeline sections:

* **IF** (Instruction Fetching): It transmits the current PC value to the instruction memory, gets the current instruction and calculates the static "next PC", i.e. PC+4.
* **ID** (Instruction Decoding): It decodes the instruction and produces all the controlling signals needed for this instruction. Regfiles are in this section. ID is responsible for reading values of specific registers. If there's a RAW data adventure, ID will send a "block" signal and the IF, ID sections will be suspended until the adventure is solved.
* **EX** (Execution): It uses ALU to calculate results and generates correspondent controlling signals.
* **M** (Memory): It writes the data to the data memory. If M detects a branch/jump instruction, it will send a "flush" signal, transmit to IF the right PC, and restart the pipeline.
* **WB** (Writing Back): It contains a MUX to select the right value and writes the data back to the regfiles.