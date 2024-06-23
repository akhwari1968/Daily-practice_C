#include <stdio.h>

int add1(int x)
{
	int i = 1;
	int sum = 0;
	for (i = 1;i <= x;i++)
	{
		sum += i;
	}
	return sum;
}

int add2(int y)
{
	int i = 1;
	int sum = 0;
	for (i = 1;i <= y;i++)
	{
		sum += i * i;
	}
	return sum;
}

double add3(int z)
{
	int i = 1;
	double sum = 0;
	for (i = 1;i <= z;i++)
	{
		sum += 1.0 / i;
	}
	return sum;
}

int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	double sum = 0.0;
	scanf("%d %d %d",&a,&b,&c);
	
	int sum1 = add1( a );
	//printf("%d",sum1);
	int sum2 = add2( b );
	//printf("%d",sum2);
	double sum3 = add3( c );
	//printf("%lf",sum3);
	
	sum = sum1 + sum2 + sum3;
	printf("%.2lf",sum);
	
    return 0;
}
