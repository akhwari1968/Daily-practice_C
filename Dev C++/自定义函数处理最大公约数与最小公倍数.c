#include <stdio.h>

int yue(int x,int y)
{
	int a = 0;
	
	while (a = x % y)
	{
		x = y;
		y = a;
	}
	
	return y;
}

int bei(int x,int y)
{
	return (x * y) / yue(x,y);
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int ret1 = 0;
	int ret2 = 0;
	scanf("%d %d",&num1,&num2);
	
	ret1 = yue(num1,num2);
	ret2 = bei(num1,num2);
	
	printf("%d %d",ret1,ret2);
	
	return 0;
}