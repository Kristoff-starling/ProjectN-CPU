src = $(wildcard *.v ./ALU/*.v)

.PHONY: run clean display

run:
	@mkdir -p ./build
	iverilog -o ./build/main.exec $(src)
	./build/main.exec

clean:
	rm ./build -r

display:
	gtkwave ./build/wave.vcd