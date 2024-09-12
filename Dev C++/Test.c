#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	
	for (i = 1;i < 1001;i++)
	{
	sum += i;
	}
	
	printf("%d",sum);
	
	return 0;
}
