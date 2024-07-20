#include <stdio.h>

double fact(int n)
{
	int i = 1;
	double mul = 1;
	for (i = 1;i < n+1;i++)
	{
		mul *= i;
	}
	
	return mul;
}

int main()
{
	int n = 0;
	double sum = 0;
	scanf("%d",&n);
	
	int i = 0;
	for (i = 1;i < n+1;i++)
	{
		sum += 1.0 / fact(i);
	}
	
	printf("sum=%.5lf",sum);
	
	return 0;
}