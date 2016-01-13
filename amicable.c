//Using Thabit ibn Quarra theorem

#include<stdio.h>
#include<math.h>

int prime(int);

int main()
{
	int s, t, a, b, c, p = 0, q = 0, r = 0, n = 2;
	printf("Set of amicable numbers(0-1000):\n");
	while( pow(2, n) * p * q <= 1000)
	{
		a = 3 * pow(2, n - 1) - 1;
		if(prime(a))
		{
			p = a;
			b = 3 * pow(2, n) - 1;
			if(prime(b))
			{
				q = b;
				c = 9 * pow(2, 2 * n - 1) -1;
				if(prime(c))
				{
					r = c;
					s = pow(2, n) * p * q;
					t = pow(2, n) * r;
					printf("\t%d  %d\n", s, t);
				}
			}
		}
		n++;
	}
	return 0;
}
					







int prime(int a) 
{
	int i, t;
	for(i = 2; i < sqrt(a); i++) {
		t = (a % i);
		if(t == 0) {
		break;
		}
	}
	if(t == 0) 
		return 0;
	else 
		return 1;
}


		

		

