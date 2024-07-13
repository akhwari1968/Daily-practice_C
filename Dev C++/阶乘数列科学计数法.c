#include <stdio.h>

int main()
{
	int i = 1;
	long long mul = 1;
	long long sum = 0;
	
	for (i = 1;i <= 30;i++)
	{
		int j = 1;
		mul = 1;
		for (j = 1;j <= i;j++)
		{
			mul *= j;
		}
		sum += mul;
	}
	
	printf("%lld",sum);
	
	return 0;
}