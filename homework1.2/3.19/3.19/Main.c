#include <stdio.h>
int main() {
	float principal;
	float rate;
	int day;
	do {
		putchar('\n');
		printf("Enter loan principal (-1 to end) :");
		scanf_s("%f", &principal);
		if (principal == -1) {
			break;
		}
		printf("Enter interest rate :");
		scanf_s("%f", &rate);
		printf("Enter term of the loan days :");
		scanf_s("%d", &day);
		printf("The interest charge is $%.2f\n", principal*rate*day / 365);

	} while (principal != 1);
	system("pause");
	return 0;
}