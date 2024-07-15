#include <stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	double sum = 0;
	
	for (i = 1;i <= 30;i++)
	{
		double mul = 1;
		for (j = 1;j <= i;j++)
		{
			mul *= j;
		}
		
		sum += mul;
	}
	
	printf("%.2e\n",sum);
	
	return 0;
}