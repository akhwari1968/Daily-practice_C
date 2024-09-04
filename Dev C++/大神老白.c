#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int sum = 0;
	
	while (scanf("%d",&n) != EOF)
	{
		sum = 0;
		int tmp = n;
		int i = 0;
		for (i = 0;i < tmp;i++)
		{
			scanf("%d",&n);
			sum += (abs(n));
		}
		
		printf("%d\n",sum);
	}
	
	return 0;
}