#include<stdio.h>

int main()
{	
	double interest = 0 , principal = 0 , rate = 0;
	int day = 0;

	printf("Enter loan principal (-1 to end): ");
	scanf_s("%lf", &principal);

	while (principal != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%lf", &rate);

		printf("Enter term of the loan in days:");
		scanf_s("%d", &day);

		interest = (principal * rate * day) / 365;

		printf("The interest charge is $%1.2f\n", interest);

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%lf", &principal);
	}
}