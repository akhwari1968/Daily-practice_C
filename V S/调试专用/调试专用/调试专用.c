#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)//遍历1到n的所有数进行完数判断
	{
		int j = 0;
		int factors[10000] = { 0 };//因子数组用于判断成功后的输出
		int tmp = 0;
		sum = 0;

		for (j = 1; j < i; j++)//计算每一个数的因数并相加
		{
			if (i % j == 0)
			{
				sum += j;
				factors[tmp++] = j;//此处tmp先使用后++，相当于多+了一次
			}
		}

		if (sum == i)//完数的判断以及输出
		{
			printf("%d its factors are ", i);
			for (j = 0; j < tmp; j++)//所有此处小于tmp而不是等于
			{
				printf("%d ", factors[j]);
			}
			printf("\n");
		}
	}

	return 0;
}