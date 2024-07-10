#include <stdio.h>

void max(double x,double y,double z)
{
	if (x >= y && x >= z)
	{
		printf("%.3lf\n",x);
	}
	else if (y > x && y > z)
	{
		printf("%.3lf\n",y);
	}
	else if (z > y && z > x)
	{
		printf("%.3lf\n",z);
	}
}

#define big(x,y,z) {if (x >= y && x >= z)printf("%.3lf",x);else if (y > x && y > z)printf("%.3lf",y);else if (z > y && z > x)printf("%.3lf",z);}

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	max(a,b,c);
	big(a,b,c);
	
	return 0;
}