# Veriloc
Veriloc is a C compiler that converts C code to normal Verilog code.


# How to Build
* From the top folder of the project, run `toolchain/launcher.pyc build`

* You can see what scripts are available by running `toolchain/launcher.pyc -h`

* The output file will be the compiler executable, which will be outputted into the folder 'bin'

# How to Run

* In order to run the compiler simply go to 'bin' and execute:
 `veriloc filename`.

* You can also do this by going into the folder 'testbench', where you can **drag and drop** a test file into the script 'run_test.pyc'. The test file's **filename** must have this format: test_yourname.txt.
**Example filenames**: test1, test_mytest.txt, test_trythis.vc

# Examples

# Example 1 - AND Gate
**Veriloc** code:
```c++
module AND {
public:
	input a, b;	
	output q = a & b;
};
```
**Verilog** output:
```verilog
module AND(input a, b, output q);
	assign q = a & b;
endmodule
```

# Example 2 - D Flip Flop
**Veriloc** code:
```c++
module DFF {
public:
	input data, clk, reset;
	output reg q;
	
	always(posedge clk, negedge reset) {
		if(~reset)
			q <= 1b0;
		else
			q <= 0;
	}
};
```
**Verilog** output:
```verilog
module DFF(input data, clk, reset, output reg q);

always @(posedge clk or negedge reset)
begin
        if(~reset)
        begin
                q <= 1'b0;
        end
        else
        begin
                q <= 0;
        end
end
endmodule
```

# Example 3 - Up Counter
**Veriloc** code:
```c++
module up_counter {
public:
	input enable, clk, reset;
	output reg out[7:0];
	
	always(posedge clk) {
		if(reset) {
			out <= 8b0;
		} elsif (enable) {
			out <= out + 1;
		}
	}
};
```
**Verilog** output:
```verilog
module up_counter(input enable, clk, reset, output reg [7:0] out);

always @(posedge clk)
begin
        if(reset)
        begin
                out <= 8'b0;
        end
        else if(enable)
        begin
                out <= out + 1;
        end
end
endmodule
```

# Example 4 - 8x8 Memory RAM
**Veriloc** code:
```c++
module RAM8x8 {
public:
	/* Interfacing ports: */
	input clk, cs, we, oe;
	input address[7:0];
	inout data[7:0];
	
	/* You can also make assignments on the constructor */
	RAM8x8() {
		data = (cs && oe && !we) ? data_out : 8bz;
	}
	
private:
	/* Internal variables and processes: */
	reg data_out[7:0];
	reg memory[7:0;7:0];
	reg oe_r;
	
	always(posedge clk) {
		if(cs && we) {
			memory[address] = data;
		}
	}
	
	always(posedge clk) {
		if(cs && !we && oe) {
			data_out = memory[address];
			oe_r = 1;
		} else {
			oe_r = 0;
		}
	}
};
```
**Verilog** output:
```verilog
module RAM8x8(input clk, cs, we, oe, input [7:0] address, inout [7:0] data);

reg [7:0] data_out;
reg [7:0] memory[7:0];
reg oe_r;
	
assign data = (cs && oe && !we) ? data_out : 8'bz;

always @(posedge clk)
begin
        if(cs && we)
        begin
                memory[address] = data;
        end
end

always @(posedge clk)
begin
        if(cs && !we && oe)
        begin
                data_out = memory[address];
                oe_r = 1;
        end
        else
        begin
                oe_r = 0;
        end
end
endmodule
```


# Example 5 - Memory ROM
**Veriloc** code:
```c++
module ROM {
public:
	input address[3:0];
	output reg data[7:0];
	input read_en, cs;
	
	always(cs, read_en, address) {
		switch(address) {
		case 0: data = 50;
		case 1: data = 55;
		case 2: data = 244;
		case 3: data = 0;
		case 4: data = 1;
		case 5: data = 8hFF;
		case 6: data = 8h11;
		case 7: data = 8h1;
		case 8: data = 10;
		case 9: data = 8h0;
		case 10: data = 8h10;
		case 11: data = 8h15;
		case 12: data = 8h60;
		case 13: data = 8h90;
		case 14: data = 8h70;
		case 15: data = 8h2;
		}
	}
};
```
**Verilog** output:
```verilog
module ROM(input [3:0] address, output reg [7:0] data, input read_en, cs);

always @(cs or read_en or address)
begin
        case(address)
                0:
                        data = 50;
                1:
                        data = 55;
                2:
                        data = 244;
                3:
                        data = 0;
                4:
                        data = 1;
                5:
                        data = 8'hFF;
                6:
                        data = 8'h11;
                7:
                        data = 8'h1;
                8:
                        data = 10;
                9:
                        data = 8'h0;
                10:
                        data = 8'h10;
                11:
                        data = 8'h15;
                12:
                        data = 8'h60;
                13:
                        data = 8'h90;
                14:
                        data = 8'h70;
                15:
                        data = 8'h2;
        endcase
end
endmodule

```
