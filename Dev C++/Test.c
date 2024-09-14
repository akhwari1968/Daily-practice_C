#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	scanf("%d",&n);
	
	for (i = 1;i <= n;i++)
	{
		if ((i % 7) == 0)
		{
			sum += i;
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
