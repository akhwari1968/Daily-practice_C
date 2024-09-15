#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0;
	scanf("%d",&x);
	
	int i = 0;
	for (i = 1;i <= (x / 2);i++)
	{
		if (x % i == 0)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
