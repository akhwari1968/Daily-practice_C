#include <stdio.h>
#include <math.h>

int main()
{
	double d;
	double a = 0;
	int n = 0;
	
	scanf("%d %lf",&n,&d);
	
	a = d * pow(2,n);
	
	long long int sum = round(a);
	
	printf("%lld",sum);
	
	return 0;
}