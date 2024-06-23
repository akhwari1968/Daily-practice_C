#include <stdio.h>

int main()
{
	int i = 0;
	int N = 0;
	scanf("%d",&N);
	
	int arr[10][10] = {};
	
	for (i = 0;i < N;i++)
	{
		int j = 0;
		for (j = 0;j < N;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	/*for (i = 0;i < N;i++)//检查输入
	{
		j = 0;
		for (j = 0;j < N;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	
	int sum1 = 0;//需要两个sum分开解决主副对角线问题
	int sum2 = 0;
	
	if (N % 2 == 0)//判断行数是否为偶数
	{
		for (i = 0;i < N;i++)
		{
			sum1 += arr[i][i];
		}
		for (i = 0;i < N;i++)
		{
			sum2 += arr[i][N-1-i];
		}
		printf("%d",sum1 + sum2);
	}
	else if (N % 2 != 0)//判断行数是否为奇数
	{
		for (i = 0;i < N;i++)
		{
			sum1 += arr[i][i];
		}
		for (i = 0;i < N;i++)
		{
			sum2 += arr[i][N-1-i];
		}
		
		int a = 0;//减去多加入的一个值
		int sum = 0;
		a = i / 2;
		sum = sum1 + sum2 - arr[a][a];
		printf("%d",sum);
	}
	
	return 0;
}