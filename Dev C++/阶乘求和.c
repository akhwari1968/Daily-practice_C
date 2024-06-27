#include <stdio.h>

int main()
{
	int n = 0;
	long long mul = 1;//错误在此，未考虑数据溢出的情况
	long long sum = 0;
	
	scanf("%d",&n);
	
	int i = 0;
	for (i = 1;i <= n;i++)//遍历1到n个数
	{
		int j = 0;
		mul = 1;
		
		for (j = 1;j <= i;j++)//将上一个循环遍历的每一个数求其阶乘
		{
			mul *= j;
		}
		
		sum += mul;//求和
	}
	
	printf("%lu",sum);
	
	return 0;
}