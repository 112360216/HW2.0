#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }




int main()
{
	int one, two, three, four, five;

	printf("一整天的總里程數");
	scanf("%d", &one);
	printf("\n汽油一公升多少錢");
	scanf("%d", &two);
	printf("\n平均一公升能行駛多少公里");
	scanf("%d", &three);
	printf("\n一天的停車費");
	scanf("%d", &four);
	printf("\n一天的通行費");
	scanf("%d", &five);

	int sum=0;
	sum = five + four + (one / three * two);
	printf("\n一天共花費%d元",sum);

	return 0;
}