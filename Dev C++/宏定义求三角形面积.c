#include <stdio.h>
#include <math.h>

#define area1(A,x,y,z) sqrt(A*(A-x)*(A-b)*(A-c));
#define tmp(x,y,z) (x+y+z)/2;

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double S = tmp(a,b,c);
	double area = area1(S,a,b,c);
	
	printf("%.3lf",area);
	
	return 0;
}