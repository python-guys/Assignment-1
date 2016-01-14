#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three Integers:\n");
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		b = b + a;
		a = b - a;
		b = b - a;
	}
	scanf("%d", &c);
	if(a < c)
	{
		a = a + c;
		c = a - c;
		a = a - c;
	}
	if(a * a == b * b + c * c)
		printf("They are Pythagorean triplets!\n");
	else
		printf("They are not Pythagorean triplets!\n");
	return 0;
}
