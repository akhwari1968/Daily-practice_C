#include <stdio.h>

int main()
{
	int kg = 0;
	int cm = 0;
	int m = 0;
	double bmi = 0.0;
	scanf("%d %d",&kg,&cm);
	
	m = cm * 10;
	bmi = kg / m * m;
	
	printf("%.2lf",bmi);
	
	return 0;
}