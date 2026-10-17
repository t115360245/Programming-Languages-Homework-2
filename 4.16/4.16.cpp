#include<stdio.h>

int main()
{
	int i, j;

	// A
	printf("%s","(a)\n");
	for(i=1 ; i < 11 ; i++)
	{ 
		for(j=1 ; j<11 ; j++)
		{
			if (i >= j)
				printf("%s", "*");
			else
				printf("%s", " ");
		}
		printf("\n");
	}

	// B
	printf("%s", "(b)\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (i+j<=11)
				printf("%s", "*");
			else
				printf("%s", " ");
		}
		printf("\n");
	}

	//C
	printf("%s", "(c)\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (i <=j)
				printf("%s", "*");
			else
				printf("%s", " ");
		}
		printf("\n");
	}

	// D
	printf("%s", "(d)\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (i + j >= 11)
				printf("%s", "*");
			else
				printf("%s", " ");
		}
		printf("\n");
	}
}