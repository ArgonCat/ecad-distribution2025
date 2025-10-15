module updowncounter
  (
   input logic        clk,
   input logic        rst,
   input logic        up,
   output logic [3:0] count
   );


   always_ff @(posedge clk)
   begin
	if(rst) begin
		count <= 0;
	end else begin
   		if(up) 
   			count <= count + 1;
		else
   			count <= count - 1;
	end
   end
endmodule
