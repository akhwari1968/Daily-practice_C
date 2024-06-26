#include <stdio.h>

int main()
{
	int n = 0;
	int tmp = 0;
	
	scanf("%d",&n);
	
	printf("%d\n",2);
	
	int i = 0;
	
	for (i = 2;i <= n;i++)
	{
		int j = 0;
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				tmp = 0;
				break;
			}
			else
			{
				tmp = 1;
			}
		}
		if (tmp == 1)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}