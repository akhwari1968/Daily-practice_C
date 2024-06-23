#include <stdio.h>

int main()
{
	int z = 3;
	int f = 2;
	double sum1 = 0.0;
	double sum2 = 1.0;
	
	for (z = 3;z < 100;z += 2)
	{
		sum1 += 1.0 / z;
	}
	//printf("%.2lf",sum1);
	
	sum2 = 1;
	for (f = 2;f < 101;f += 2)
	{
		sum2 -= 1.0 / f;
	}
	
	printf("%.2lf",sum1 + sum2);
	
	return 0;
}