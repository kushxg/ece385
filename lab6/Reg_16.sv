module reg_16 (input  logic Clk, Reset, Load,
               input  logic [15:0]  D,
               output logic [15:0]  Out);

    always_ff @ (posedge Clk)
    begin
	 	 if (Reset) //notice, this is a sycnrhonous reset, which is recommended on the FPGA
			  Out <= 16'h0000;
		 else if (Load)
			  Out <= D;
    end
endmodule
