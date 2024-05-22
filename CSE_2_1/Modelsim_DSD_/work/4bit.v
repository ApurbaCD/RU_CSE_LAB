
module fulladderfor4(A,B,C,S,COUT,K);
input A,B,C,K;
output S,COUT;
wire w1,w2,w3,w4;
xor(w4,K,B);
xor(w1,A,w4);
xor(S,w1,C);
and(w2,A,w4);
and(w3,w1,C);
or(COUT,w2,w3);


endmodule
//////
module fulladder4bit(a1,b1,c1,s1,cout1);
input [3:0]a1,b1;
output [3:0]s1;
input c1;
output cout1;
wire w1,w2,w3;
fulladderfor4 fa1(a1[0],b1[0],c1,s1[0],w1,c1);
fulladderfor4 fa2(a1[1],b1[1],w1,s1[1],w2,c1);
fulladderfor4 fa3(a1[2],b1[2],w2,s1[2],w3,c1);
fulladderfor4 fa4(a1[3],b1[3],w3,s1[3],cout1,c1);


endmodule
module TB_fa;
reg [3:0] a,b;
reg cin;
wire [3:0] s2;
wire cout;
fulladder4bit bg(a,b,cin,s2,cout);
initial 
begin
a=4'b0000;b=4'b0000;cin=1'b0;
#100;
a=4'b0001;b=4'b0001;cin=1'b0;
#100;
a=4'b1111;b=4'b1111;cin=1'b1;
#100;
a=4'b1100;b=4'b1010;cin=1'b1;
#100;
a=4'b0101;b=4'b0110;cin=1'b0;
#100;
end
endmodule
