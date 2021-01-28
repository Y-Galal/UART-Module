`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:45:30 01/27/2021 
// Design Name: 
// Module Name:    rx 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module rx(input clock , input rx_in, output reg error, output reg [7:0]Rx );

		parameter Idle_state = 2'b00;
		parameter Data_state = 2'b01;
		parameter Parity_state=2'b10;
		
		reg [1:0]state = Idle_state;
		reg [2:0]counter=3'b000;
		reg [7:0]data_received=8'b00000000;
		reg [7:0] clk_per_bit_counter = 8'd216;   //clock is 50 MHz and baudrate is 115200 bps. 	
		
		always@(posedge clock)
		begin
			case(state)
				Idle_state:
				begin
						if(rx_in == 1'b0) 
						begin
							clk_per_bit_counter<= clk_per_bit_counter-1'b1;
							if(clk_per_bit_counter == 0)
							begin
								clk_per_bit_counter <=8'd216;
								state<=Data_state;	
							end
						end
						else state<= Idle_state;
						
				end
				
				Data_state:
				begin
						clk_per_bit_counter<= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter == 0)
						begin
							clk_per_bit_counter <=8'd216;
							counter <= counter + 3'b001;
							if(counter == 3'b111) 
							begin 
								state<=Parity_state;
								counter<= 3'b000;
							end
						end
						else 
						begin
							data_received[counter] <= rx_in;
						end
						
				end
				
				Parity_state:
				begin
						clk_per_bit_counter<= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter == 0)
						begin
							clk_per_bit_counter <=8'd216;
							if(rx_in == ^data_received)
							begin	
								error<=1'b0;
								Rx<= data_received;
							end
							else 
							begin
								error <=1'b1;
							end
							state<= Idle_state;
							data_received<=8'b00000000;
						end
				end
				default: 
					begin 
					state<=Idle_state;
					end
			endcase
		end
		//////////////////////////////////////////
		



endmodule
