#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }


int zzz(x)
{
	while (x--)printf("z");
}
int yyy(x)
{
	while (x--)printf("y");
}
int xxx(x)
{
	while (x--)printf("x");
}

int main()
{
	zzz(1); sp(7); zzz(1); nn();
	zzz(3); sp(5); zzz(1); nn();
	zzz(1); sp(2); zzz(2); sp(3); zzz(1); nn();
	zzz(1); sp(4); zzz(2); sp(1); zzz(1); nn();
	zzz(1); sp(6); zzz(2); nn(); nn();
	
	sp(7); yyy(2); nn();
	sp(6); yyy(1); nn();
	yyy(6); nn();
	sp(6); yyy(1); nn();
	sp(7); yyy(2); nn(); nn();

	sp(2); xxx(1); sp(3); xxx(1); nn();
	sp(3); xxx(1); sp(1); xxx(1); nn();
	sp(4); xxx(1); nn();
	sp(3); xxx(1); sp(1); xxx(1); nn();
	sp(2); xxx(1); sp(3); xxx(1);

	return 0;
}