#include <stdio.h>
#include <math.h>

int main()
{
	double r = 0;
	double V = 0;
	
	while (scanf("%lf",&r) == 1)
	{
		printf("%.3lf\n",(4.0/3.0*3.1415926535*pow(r,3)));
	}
	
	return 0;
}