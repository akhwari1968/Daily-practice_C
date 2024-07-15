#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	
	double xn = a+1;
	double tmp = xn;
	
	while (1)
	{
		tmp = xn;
		xn = (xn + a / xn) / 2;
		
		if (fabs(tmp - xn) < 0.00001)
		{
			break;
		}
	}
	
	printf("%.3lf",xn);
	
	return 0;
}