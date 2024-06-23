#include <stdio.h>

int main()
{
	int i = 10;
	int sum = 0;
	while (i < 1001)
	{
		sum = i % 2 + i % 3 + i % 7;//&&可以重复多次使用
		if (sum > 0)
		{
			i++;
		}
		else
		{
			printf("%d\n",i);
			i++;
		}
	}
	
	return 0;
}