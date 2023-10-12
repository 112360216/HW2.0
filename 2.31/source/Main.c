#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }



int main()
{
	
	printf("number  square  cube");
	int c = 0;
	nn();
		while (c < 11)
		{
			printf("%d\t%d\t%d\t", c, c*c, c*c*c); nn();
			c++;
		}


	return 0;
}