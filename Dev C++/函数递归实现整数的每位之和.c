#include <stdio.h>

int digitsum(int num)
{
	if (num > 9)
	{
		return digitsum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	
	int ret = 0;
	ret = digitsum(num);
	
	printf("%d",ret);
	
	return 0;
}