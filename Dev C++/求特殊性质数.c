#include <stdio.h>

int main()
{
	int i = 0;
	int left = 0;
	int right = 0;
	int sum = 0;
	
	for (i = 1000;i < 10000;i++)
	{
		left = i / 100;
		right = i % 100;
		
		sum = (left + right) * (left + right);
		if (sum == i)
		{
			printf("%d ",i);
		}
		
	}
	
	
	return 0;
}