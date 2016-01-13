#include<stdio.h>

int main()
{

	int out = 0, tmp = 0, n, t;
	printf("Enter an Integer:");
	scanf("%d", &n);
	t = n;
	while(n > 0)
	{
		tmp = n % 10;
		n = n / 10;
		out = out + (tmp * tmp * tmp);
	}
	if(out == t)
		printf("Its an Armstrong Number\n");
	else
		printf("It is not an Armstrong Number\n");
	return 0;
}  
		
