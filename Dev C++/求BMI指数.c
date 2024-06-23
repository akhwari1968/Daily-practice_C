#include <stdio.h>

int main()
{
	int kg = 0;
	int cm = 0;
	double m = 0.0;
	double bmi = 0.0;
	scanf("%d %d",&kg,&cm);
	
	m = cm / 100.0;
	bmi = kg / (m * m);
	
	printf("%.2lf",bmi);
	
	return 0;
}