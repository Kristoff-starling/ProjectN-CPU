.PHONY: all emu clean-all run-emu

OBJ_DIR := output
SRC_DIR := src
V_FILES := $(shell find $(SRC_DIR) -name "*.v")

EMU_SRC_DIR := emu
EMU_TOP_MODULE := cpu_tst
EMU_MK := $(OBJ_DIR)/emu.mk
EMU_BIN := $(OBJ_DIR)/emulator
EMU_CXXFILES := $(shell find $(EMU_SRC_DIR) -name "*.cpp")
TEST = sw sh sb\
lw lh lhu lb lbu\
beq bge bgeu blt bltu bne\
lui auipc\
add addi and andi sub xor xori or ori\
srl srli sra srai sll slli\
slt slti sltu sltiu\
jal jalr\
simple

emu: $(EMU_BIN)
run-emu: emu
	@cd testcase && ../$(EMU_BIN) $(TEST)

$(EMU_MK): $(V_FILES) $(EMU_CXXFILES)
	@verilator --cc --exe --top-module $(EMU_TOP_MODULE) \
	  -o $(notdir $(EMU_BIN)) -Mdir $(@D) \
	  --prefix $(basename $(notdir $(EMU_MK))) $^ -CFLAGS "-g"

$(EMU_BIN): $(EMU_MK) $(EMU_CXXFILES)
	@cd $(@D) && make -s -f $(notdir $<)

clean-all:
	rm -rf $(OBJ_DIR)
