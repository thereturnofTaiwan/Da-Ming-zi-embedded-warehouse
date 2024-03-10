`timescale 1ns/1ns

module tb_mux2_1();

reg in_1;
reg in_2;
reg sel;

wire out;

initial 
    begin
        in_1  <= 1'b0;
        in_2  <= 1'b0;
        sel   <= 1'b0;
    end

always #10 in_1

