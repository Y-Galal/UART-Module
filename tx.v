`timescale 10ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:43 01/28/2021 
// Design Name: 
// Module Name:    tx 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: transmitter implementation
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module tx(input [7:0] Data_to_send, input Tx_Start, input clock, output reg Tx, output reg Tx_Busy     );

		parameter Idle_state = 2'b00;	//defining the states in the FSM
		parameter StartBit_state = 2'b01;
		parameter Data_state = 2'b10;
		parameter Parity_state=2'b11;
		
		
		reg [1:0]state = Idle_state;
		reg [2:0]counter=3'b000;
		reg [8:0] clk_per_bit_counter = 9'd433;   //clock is 50 MHz and baudrate is 115200 bps. 	
		
		always@(posedge clock)
			begin
			case(state)
				Idle_state:
				begin
						Tx<= 1'b1;
						Tx_Busy<=1'b0;
						if(Tx_Start==1'b1)		// if the tx_start signal is triggered, then tx will start sending the data
						begin
							state<= StartBit_state;
							Tx_Busy<=1'b1;
						end
				end
				StartBit_state:
				begin
						Tx<=1'b0;						//sending the start bit and waiting for 434 clock cycles.
						clk_per_bit_counter <= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter == 9'd0)
						begin
							clk_per_bit_counter <=9'd433;
							state<=Data_state;		
						end	
				end
				

				Data_state:
				begin	
						Tx <= Data_to_send[counter];				//sending the 8 bits saved in the Data_to_send Register
						clk_per_bit_counter <= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter == 9'd0)
						begin
								clk_per_bit_counter <=9'd433;
								counter <= counter + 3'b001;
								if(counter == 3'b111) 
								begin 
									state<=Parity_state;
									counter<= 3'b000;
								end
						end	
				end
				
				Parity_state:
				begin
						Tx<= ^Data_to_send;			//sending the parity bit for error checking
						clk_per_bit_counter <= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter-1 == 9'd0)
							begin
								clk_per_bit_counter <=9'd433;
								state<= Idle_state;
							end	

				end

				default: 
					begin 
						state<= Idle_state;
					end
			endcase
		
		end
		//////////////////////////////////////////

endmodule
