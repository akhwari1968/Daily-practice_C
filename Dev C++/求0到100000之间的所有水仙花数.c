#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int tmp = 0;
	int n = 1;
	int sum = 0;
	
	for (i = 0;i <= 100000;i++)
	{
		tmp = i;//循环内不要改变循环标量，所以用临时变量进行操作
		n = 1;
		
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		
		tmp = i;//重置变量
		sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10,n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}