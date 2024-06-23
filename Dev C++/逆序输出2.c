#include <stdio.h>

int main()
{
	int a = 0;
	int i = 0;
	int b = 0;
	scanf("%d",&a);
	
	for (i = 0;i < 3;i++)
	{
		b = a % 10;
		a = a / 10;
		printf("%d ",b);
	}
	
	return 0;
}