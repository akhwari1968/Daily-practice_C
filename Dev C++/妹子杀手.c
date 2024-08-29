#include <stdio.h>

int main()
{
	long long a = 0;
	long long b = 0;
	long long sum = 0;
	while (1)
	{
		scanf("%d %d",&a,&b);
		if (a == 0 && b == 0)
		{
			break;
		}
		
		sum = a * b;
		printf("%lld\n",sum);
	}
	
	return 0;
}