#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0;
	double num = 0;
	scanf("%d",&x);
	
	if (x < 0)
	{
		num = fabs(x);
	}
	else if (x >= 0 && x < 2)
	{
		num = sqrt(x+1);
	}
	else if (x >= 2 && x < 4)
	{
		num = pow(x+2,5);
	}
	else if (x >= 4)
	{
		num = 2 * x + 5;
	}
	
	printf("%.2lf",num);
	
	return 0;
}