#include <stdio.h>
#include <math.h>

void is_prime(int x)
{
	int i = 0;
	if (x <= 1)
	{
		printf("not prime");
		return;
	}
	for (i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
		{
			printf("not prime");
			return;
		}
	}
	printf("prime");
}

int main()
{
	int number = 0;
	scanf("%d",&number);
	
	is_prime(number);
	
	return 0;
}