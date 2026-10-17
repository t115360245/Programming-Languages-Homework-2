#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{	
	double gross_sales = 0;

	while(gross_sales != -1)
	{	
		printf("Enter sales in dollars (-1 to end):");

		scanf("%lf", &gross_sales);

		if (gross_sales != -1)
		{
			double salary = 200 + gross_sales * 0.09;
			printf("Salary is: %.2f\n", salary);
		}
	}
	return 0;
}