#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	double sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//1 2 3 4 5 6 7 8 9 10
	}

	sum = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) / 10.0;//求平均值
	//printf("%.1lf", sum);
	int n = 0;
	for (i = 0; i <= 9; i++)
	{
		if (arr[i] > sum)//遍历数组内元素进行比对
		{
			n++;
		}
	}
	printf("%d", n);
	
	return 0;
}