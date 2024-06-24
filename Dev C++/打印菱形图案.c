#include <stdio.h>

int main()
{
	int line = 0;
	scanf("%d",&line);
	
	int i = 0;
	for (i = 0;i < line;i++)//分上下两部分解决
	{
		int j = 0;
		for (j = 0;j < line-1-i;j++)//打印上部分空格
		{
			printf(" ");
		} 
		
		for (j = 0;j < 2*i+1;j++)//打印上部分星号
		{
			printf("*");
		}
		printf("\n");
	}
	
	for (i = 0;i < line-1;i++)//解决下半部分，下部分总是少1行
	{
		int j = 0;
		for (j = 0;j <= i;j++)//打印下部空格
		{
			printf(" ");
		}
		
		for (j = 0;j < 2*(line-1-i)-1;j++)//打印下部星号
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}