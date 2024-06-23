#include <stdio.h>

int main()
{
	int arr[20] = {};
	int i = 0;
	for (i = 0;i < 20;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	/*for (i = 0;i < 20;i++)
	{
		printf("%d ",arr[i]);
	}*///检查输入
	
	int count = 0;
	for (i = 0;i < 20;i++)//判断负数
	{
		if (arr[i] < 0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	
	double sum = 0;
	count = 0;
	for (i = 0;i < 20;i++)//求正数均值
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
			count++;
		}
	}
	if (count == 0)
	{
		printf("0.00");
	}
	else
	{
		printf("%.2lf",sum / count);
	}
	
	return 0;
}