#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }



int main()
{
	sp(4); dut(1); nn();
	sp(3); dut(3); nn();
	sp(2); dut(5); nn();
	sp(1); dut(7); nn();
	dut(9);



	return 0;
}