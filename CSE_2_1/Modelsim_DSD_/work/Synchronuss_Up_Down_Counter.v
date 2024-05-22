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

module syynn(q, qb, clr, clk, m);
input  clr , clk , m;
output [2:0] q , qb;
wire a1 , a2 , a3 , a4 , o1 , o2 , mb;
not (mb , m);
master m1(q[0] , qb[0] , 1 , 1 , clr , clk);
and ( a1 , mb , q[0] );
and ( a2 , m , qb[0] );
or ( o1 , a1 , a2 );
master m2 ( q[1] , qb[1] , o1 , o1 , clr , clk);
and ( a3 , q[1] , a1);
and ( a4 , qb[1] , a2);
or ( o2 , a3 , a4);
master m3 ( q[2] , qb[2] , o2 ,o2 , clr , clk);
endmodule
