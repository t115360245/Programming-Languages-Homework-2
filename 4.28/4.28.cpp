#include <stdio.h>

int main()
{
	int employ_num;
	double salary;
	double hourly_rate, hours, sales, piece_rate;
	int pieces;

	printf("%s", "Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
	scanf_s(" %d", &employ_num); 

	while (employ_num != -1)
	{
		
		switch (employ_num)
		{
		case 1: 
		{
			printf("Enter manager's fixed weekly salary: ");
			scanf_s("%lf", &salary);
			printf("The manager's pay is $%.2f\n\n", salary);
			break; 
		}

		case 2: 
		{
			printf("Enter hourly wage: ");
			scanf_s("%lf", &hourly_rate);
			printf("Enter total hours worked: ");
			scanf_s("%lf", &hours);

			if (hours <= 40.0) {
				salary = hours * hourly_rate;
			}
			else {
				salary = (40.0 * hourly_rate) + ((hours - 40.0) * hourly_rate * 1.5);
			}
			printf("The hourly worker's pay is $%.2f\n\n", salary);
			break;
		}

		case 3: 
		{
			printf("Enter gross weekly sales: ");
			scanf_s("%lf", &sales);
			salary = 250.0 + (sales * 0.057);
			printf("The commission worker's pay is $%.2f\n\n", salary);
			break;
		}

		case 4: 
		{
			printf("Enter fixed amount per item: ");
			scanf_s("%lf", &piece_rate);
			printf("Enter number of items produced: ");
			scanf_s("%d", &pieces);
			salary = pieces * piece_rate;
			printf("The pieceworker's pay is $%.2f\n\n", salary);
			break;
		}

		default: 
		{
			printf("Invalid paycode! Please enter 1 to 4.\n\n");
			break;
		}
		} 

		printf("%s", "Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
		scanf_s(" %d", &employ_num);
	} 

	return 0;
}