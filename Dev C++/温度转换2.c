#include <stdio.h>

int main()
{
	double h = 0.0;
	double s = 0.0;
	scanf("%lf",&h);
	
	s = (5.0 / 9.0) * (h - 32.0);
	
	printf("%.2lf",s);
	
	return 0;
}