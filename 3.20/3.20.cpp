#include<stdio.h>

int main() 
{
	int hours;
	float rate , salary;

	printf("%s", "Enter # of hours worked (-1 to end): ");
	scanf_s("%d", &hours);

	while (hours != -1)
	{
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);

		salary = hours * rate;
		printf("Salary is $%.2f\n", salary);

		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
	}

}