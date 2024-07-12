#include <stdio.h>

int main()
{
	int i = 0;
	int j = 1;
	int n = 0;
	int arr[1000];//dev不是c99环境
	scanf("%d",&n);
	
	for (i = 0;i < n;i++)//用数组存储编号
	{
		arr[i] = j;
		j++;
	}
	
	j = 1;
	i = 0;
	int truen = 0;
	while (truen != 1)//循环停止条件为序列数组只有最后一个不等于0的数时停止
	{
		truen = 0;
		j++;//j为1到3报数
		
		do
		{
			i++;
			if (i >= n)
			{
				i = 0;
			}
		}while (arr[i] == 0);//处理i的增加，每当i到顶时重置，每当i指向元素已经为0（即已经退出报数）时i继续加一
		
		
		if (j == 3)//当数到3时改变元素值即退出报数
		{
			arr[i] = 0;
			j = 0;
		}
		
		for (int a = 0;a < n;a++)//大循环停止的条件为数组只剩下一个为零的元素，遍历数组用truen记录
		{
			if (arr[a] != 0)
			{
				truen++;
			}
		}
		
		if (i == n-1)//数组元素重置
			{
				i = -1;
			}
	}
	
	for (i = 0;i < n;i++)//打印最后不为0的数
	{
		if (arr[i] != 0)
		{
			printf("%d",arr[i]);
		}
	}
	
	return 0;
}