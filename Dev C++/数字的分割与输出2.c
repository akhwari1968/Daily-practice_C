#include <stdio.h>
#include <math.h>

int main()
{
	int num = 0;//定义变量
	int i = 0;//位数变量
	scanf("%d",&num);//输入数
	int temp = num;//替代num
	
	if (num == 0)//解决输入为零的情况
	{
		i = 1;
	}
	else
	{
		for (i = 0;temp > 0;i++)//如果num输入值为 0 则不进入循环，计数器i的值得以保留，不影响后续计算
		{
			temp /= 10;
		}
	}
	printf("%d\n",i);
	
	int n = 0;
	for (n = i - 1;n >= 0;n--)//从左至右循环
	{
		temp = num / pow(10,n);
		printf("%d ",temp % 10);//第二个循环，正序输出
	}
	printf("\n");
	
	for (n = 0;n < i;n++)//从右至左循环
	{
		temp = num / pow(10,n);
		printf("%d",temp %10);//第二个循环，逆序输出
	}
	
	return 0;
}