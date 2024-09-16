#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0;
	scanf("%d",&x);
	
	int i = 0;
	for (i = 1;i <= x;i++)
	{
		printf("%d ",i);
		for (int j = 1;j < i;j++)
		{
			if ((i % j) == 0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
