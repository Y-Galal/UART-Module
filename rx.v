`timescale 10ns / 1ps
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
// Description: the receiver implementation 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module rx(input clock , input rx_in, output reg error, output reg [7:0]Rx );

		parameter Idle_state = 2'b00;		//defining the states for the FSM
		parameter Data_state = 2'b01;
		parameter Parity_state=2'b10;
		
		reg [1:0]state = Idle_state;
		reg [2:0]counter=3'b000;
		reg [7:0]data_received=8'b00000000;
		reg [8:0] clk_per_bit_counter = 9'd433;   //clock is 50 MHz and baudrate is 115200 bps. 
												  //50MHz/ 115200bps = 434 clks/bit	
		
		always@(posedge clock)
		begin
			case(state)
				Idle_state:				//we stay here untill the rx_in gets the start bit '0' for 434 clock cycles
				begin
						if(rx_in == 1'b0) 						// if we have the start bit we will start the counter
						begin
							clk_per_bit_counter<= clk_per_bit_counter-1'b1;
							if(clk_per_bit_counter == 0)		//if the counter reaches 0 then we have to go to the data state.
							begin
								clk_per_bit_counter <=9'd433;
								state<=Data_state;	
							end
						end
						else state<= Idle_state;
						
				end
				
				Data_state:			//receiving the 8-bit data
				begin
						clk_per_bit_counter<= clk_per_bit_counter-1'b1;
						if(clk_per_bit_counter == 0)
						begin
							clk_per_bit_counter <=9'd433;
							counter <= counter + 3'b001;		//counter to count the number of bits received.
							if(counter == 3'b111) 	
							begin 
								state<=Parity_state;	//if we received the 8-bits, we enter the next state to calculate the parity bit
								counter<= 3'b000;
							end
						end
						else 
						begin
							data_received[counter] <= rx_in;	//receiving the data and saving it in a register
						end
						
				end
				
				Parity_state:		//calculating even parity
				begin
							if(rx_in == ^data_received)
							begin	
								error<=1'b0;			
								Rx<= data_received;		//if there's no error, the data is passed to the RX output register
							end
							else 
							begin
								error <=1'b1;	// if there's an error, the error signal will become high and no data will be in the output register
							end
							state<= Idle_state;
							data_received<=8'b00000000;		//clearing the register to receive another packet
						end
				default: 
					begin 
					state<=Idle_state;
					end
			endcase
		end
		//////////////////////////////////////////
		



endmodule
