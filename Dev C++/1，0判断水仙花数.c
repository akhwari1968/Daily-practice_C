#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int sum = 0;
	scanf("%d",&a);//读取数字
	
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;//拆分数字
	//printf("%d %d %d",b,c,d);
	
	sum = b * b * b + c * c *c + d * d * d;//计算立方和
	
	if (sum == a)//判断水仙花
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
	return 0;
}