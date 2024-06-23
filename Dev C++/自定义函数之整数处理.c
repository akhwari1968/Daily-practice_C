#include <stdio.h>

void print(int arr[10],int x)//输出
{
	int i = 0;
	for (i = 0;i < x;i++)
	{
		printf("%d ",arr[i]);
	}
}

void pai(int arr[10],int x)//交换
{
	int i = 0;
	int tmp = 0;
	int small = 0;
	int big = 0;
	
	for (i = 1;i < x;i++)//找出最大最小的下标
	{
		if (arr[i] < arr[small])
		{
			small = i;
		}
		if (arr[i] > arr[big])
		{
			big = i;
		}
	}
	
	if (small != 0)
	{
		tmp = arr[0];
		arr[0] = arr[small];
		arr[small] = tmp;
	}
	
	if (big == 0)
	{
		big = small;
	}
	
	if (big != x - 1)
	{
		tmp = arr[x-1];
		arr[x-1] = arr[big];
		arr[big] = tmp;
	}

	print(arr,x);
}

void scan(int arr[10],int x)
{
	int i = 0;
	
	for (i = 0;i < x;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	pai(arr,x);
}

int main()
{
	int arr[10];
	scan(arr,10);
	int count = 0;
	
	
	return 0;
}