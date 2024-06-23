#include <stdio.h>

int main()
{
	int left = 1;
	int right = 1;
	int mul = 0;
	
	for (right = 1;right <= 9;right++)
	{
		for (left = 1;left <= right;left++)
		{
			mul = left * right;
			if (mul < 10)
			printf("%d*%d=%d  ",left,right,mul);
			else
			printf("%d*%d=%d ",left,right,mul);
		}
		printf("\n");
	}
	
	return 0;
}