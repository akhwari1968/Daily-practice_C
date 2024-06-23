#include <stdio.h>

int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;//定义变量接受各类计算结果
	
	for (i = 100;i < 1000;i++)//遍历题目范围内的所有数进行判断
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		sum = a * a * a + b * b * b + c * c * c;
		
		if (sum == i)//判断水仙花
			{
				printf("%d\n",i);
			}
	}
	
	return 0;
}