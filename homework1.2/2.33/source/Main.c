#include <stdio.h>

int dut(x)
{while (x--)printf("*");}
int sp(x)
{while (x--)printf(" ");}
int nn() { printf("\n"); }




int main()
{
	int one, two, three, four, five;

	printf("�@��Ѫ��`���{��");
	scanf("%d", &one);
	printf("\n�T�o�@���ɦh�ֿ�");
	scanf("%d", &two);
	printf("\n�����@���ɯ��p�h�֤���");
	scanf("%d", &three);
	printf("\n�@�Ѫ������O");
	scanf("%d", &four);
	printf("\n�@�Ѫ��q��O");
	scanf("%d", &five);

	int sum=0;
	sum = five + four + (one / three * two);
	printf("\n�@�Ѧ@��O%d��",sum);

	return 0;
}