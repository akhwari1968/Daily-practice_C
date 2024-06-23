#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	double M = 0;
	int N = 0;
	int i = 0;
	double sum = 0.0;
	scanf("%lf %d", &M, &N);

	//sum = M;
	for (i = 0; i < N; i++)
	{
		sum += M + 0.0;
		M /= 2.0;
		sum += M + 0.0;
	}
	sum += M;

	printf("%.2lf %.2lf", M, sum);

	return 0;
}