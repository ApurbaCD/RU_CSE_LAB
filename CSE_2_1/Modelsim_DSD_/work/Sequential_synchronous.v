
module master(q,qb,j,k,clr,clk);
input j,k,clr,clk;
output q,qb;
wire a,y,c,b,z,d,clkb;
not(clkb,clk);
nand(a,qb,clk,j,clr);
nand(b,q,k,clk);
nand(y,z,a);
nand(z,y,clr,b);
nand(c,clkb,y);
nand(d,clkb,z);
nand(q,qb,c);
nand(qb,clr,q,d);
endmodule
module seq(c,clk,clr);
wire [3:0]a,b;
output [3:0] c;
input clk,clr;
wire c1,c2,c3,c4;
not(c1,c[0]);
not(c2,c[1]);
not(c3,c[2]);
not(c4,c[3]);
and(a[0],c[3],c[2],c[1]);
and(b[0],c4,c3,c2);
 master m1 (c[0],,a[0],b[0],clr,clk);
and(a[1],c[3],c[2],c1);
and(b[1],c4,c3,c[0]);
master m2 (c[1],,a[1],b[1],clr,clk);
and(a[2],c[3],c1,c2);
and(b[2],c4,c[0],c[1]);
master m3 (c[2],,a[2],b[2],clr,clk);
and(a[3],c3,c1,c2);
and(b[3],c[2],c[0],c[1]);
master m4 (c[3],,a[3],b[3],clr,clk);
endmodule