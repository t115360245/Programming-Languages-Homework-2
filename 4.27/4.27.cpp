#include<stdio.h>
#include<cmath>

int main()
{
	int a, b, c;

	printf("%s", "side1 side2 hyp \n");
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					printf("%d   %d   %d  ", a, b, c);
					printf("%s", "\n");
				}
			}
		}
	}

}