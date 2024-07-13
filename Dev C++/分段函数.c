#include <stdio.h>

void han(int x)
{
	double y = 0;
	if (x < 1)
	{
		y = x;
		printf("%.2lf",y);
	}
	else if (x >= 1 && x < 10)
	{
		y = 2.0 * x - 1.0;
		printf("%.2lf",y);
	}
	else if (x >= 10)
	{
		y = 3.0 * x - 11.0;
		printf("%.2lf",y);
	}
}

int main()
{
	int x = 0;
	scanf("%d",&x);
	
	han(x);
	
	return 0;
}