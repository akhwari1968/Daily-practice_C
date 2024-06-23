#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int num = 0;
	
	scanf("%d %d",&m,&n);
	
	num = m ^ n;
	
	int count = 0;
	
	while (num)
	{
		if (num & 1 == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	
	printf("%d",count);
	
	return 0;
}