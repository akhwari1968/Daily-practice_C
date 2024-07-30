#include <stdio.h>
#include <math.h>

void function(double a,double b,double c)
{
	double x1,x2;
	if (pow(b,2)-4*a*c > 0)
	{
		x1 = (-b+sqrt(pow(b,2)-4*a*c)) / (2*a);
		x2 = (-b-sqrt(pow(b,2)-4*a*c)) / (2*a);
	}
	
	if (pow(b,2)-4*a*c == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;
	}
	
	printf("%.2f %.2lf\n",x1,x2);
}

int main()
{
	double a,b,c;
	while (scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	{
		function(a,b,c);
	}
	
	return 0;
}