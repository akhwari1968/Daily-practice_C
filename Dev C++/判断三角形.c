#include <stdio.h>

int main()
{
	long long a,b,c = 0;
	while (scanf("%lld %lld %lld",&a,&b,&c) != EOF)
	{
		if (a+b>c&&a+c>b&&b+c>a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}