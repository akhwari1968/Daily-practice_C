#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i = 2;i <= n;i++)
	{
		for(j = 2;j <= sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;
			}
			if (j > sqrt(i))
			{
				printf("%d\n",i);
			}
		}
	}
	
	return 0;
}