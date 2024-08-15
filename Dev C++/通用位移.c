#include <stdio.h>
#include <math.h>

unsigned int move(int x,int y)
{
	unsigned int a = 0;
	int i = 0;
	if (y > 0)
	{
		for (i = 0;i < y;i++)
		{
			a = x & 1;
			x >>= 1;
			if (a == 1)
			{
				x = x | 0x80000000;
			}
		}
	}
	else
	{
		for (i = 0;i < abs(y);i++)
		{
			a = x & 0x80000000;
			x <<= 1;
			if (a == 0x80000000)
			{
				x = x | 1;
			}
		}
	}
	
	return x;
}

int main()
{
	unsigned int value = 0;
	int n = 0;
	scanf("%u %d",&value,&n);
	unsigned int sz = move(value,n);
	printf("%u",sz);
	
	return 0;
}