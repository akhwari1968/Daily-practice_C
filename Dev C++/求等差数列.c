#include <stdio.h>

int main()
{
	int n = 0;
	int sum = 0;
	int i = 0;
	scanf("%d",&n);
	
	for (i = 2;n > 0;n--)
	{
		sum += i;
		i += 3;
	}
	printf("%d",sum);
	
	return 0;
}