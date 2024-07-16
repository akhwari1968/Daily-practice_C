#include <stdio.h>

double fact(int n)
{
	int i = 1;
	long long mul = 1;
	for (i = 1;i < n+1;i++)
	{
		mul *= i;
	}
	
	return mul;
}

double mypow(double x,long long n)
{
	int i = 0;
	double mul = x;
	for (i = 1;i < n;i++)
	{
		mul *= x;
	}
	
	return mul;
}

int main()
{
	double x = 0;
	long long n = 0;
	double mul = 0;
	scanf("%lf %d",&x,&n);
	
	int i = 0;
	int tmp = 1;
	for (i = 1;i < n+1;i++)
	{
		mul += tmp * mypow(x,i) / fact(i);
		tmp = -tmp;
	}
	
	printf("%.4lf",mul);
	
	return 0;
}