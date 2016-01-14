#include<stdio.h>

int main()
{
	int a, b, i, j, s1 = 0, s2 = 0;
	printf("Amicable Numbers(0 - 1000):\n");
	for(i = 1; i <= 1000; i++)
	{
		for(j= i; j <= 1000; j++)
		{
			for(a = 1; a < i; a++)
			{
				if(i % a == 0)
					s1 = s1 + a;
			}
			for(b = 1; b < j; b++)
			{
				if(j % b == 0)
					s2 = s2 + b;
			}
			if(s1 == j && s2 == i && i != j)
				printf("\t%d  %d\n", i, j);
			s1 = 0;
			s2 = 0;
		}
	}
	return 0;
}
