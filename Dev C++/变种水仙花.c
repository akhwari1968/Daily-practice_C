#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int tmp = 10;
	int sum = 0;
	for (i = 10000;i < 100000;i++)
	{
		sum = 0;
		tmp = 10;
		for (j = 0;j < 4;j++)
		{
			sum += (i % tmp) * (i / tmp);
			tmp *= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}