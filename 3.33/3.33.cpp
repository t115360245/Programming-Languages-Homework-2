#include<stdio.h>

int main()
{
	int i, j;
	int length, breadth;
	printf("%s", "Enter length and breadth:");
	scanf_s("%d %d", &length, &breadth);

	for (i = 0; i < breadth ; i++)
	{
		for (j = 0; j < length ; j++)
			if (i == 0 || i == (breadth-1) || j == 0 || j == (length-1))
				printf("%s", "+");
			else
				printf("%s", " ");
		printf("\n");
	}
	return 0;
}