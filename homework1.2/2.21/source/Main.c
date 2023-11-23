#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }



int main()
{
	dut(10);
	nn();
	int c = 8;
	while (c--)
		{
			dut(1); sp(8); dut(1); nn();
		}
	dut(10); nn(); nn();


	sp(2); dut(3); nn();
	sp(1); dut(1); sp(3); dut(1); nn();
	c = 6;
	while (c--)
	{
		dut(1); sp(5); dut(1); nn();
	}
	sp(1); dut(1); sp(3); dut(1); nn();
	sp(2); dut(3); nn(); nn();

	sp(2); dut(1); nn();
	sp(1); dut(3); nn();
	dut(5); nn();
	c = 6;
	while (c--)
	{
		sp(2); dut(1); nn();
	}
	nn(); 

	
	sp(4); dut(1); nn();
	sp(3); dut(1); sp(1); dut(1); nn();
	sp(2); dut(1); sp(3); dut(1); nn();
	sp(1); dut(1); sp(5); dut(1); nn();
	sp(0); dut(1); sp(7); dut(1); nn();
	sp(1); dut(1); sp(5); dut(1); nn();
	sp(2); dut(1); sp(3); dut(1); nn();
	sp(3); dut(1); sp(1); dut(1); nn();
	sp(4); dut(1);









	return 0;
}