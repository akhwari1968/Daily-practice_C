#include <stdio.h>

int count_num_of_1(unsigned int x)//解决负数
{
	int count = 0;
	/*while (x)
	{
		if ((x % 2) == 1)
		{
			count++;
		}
		x = x / 2;
	}*/
	while (x)
	{
		x = x & (x - 1);
		count++;
	}
	return count;
}

int main() 
{
	int num = 0;
	scanf("%d",&num);
	
	int n = count_num_of_1(num);
	printf("%d\n",n);
	
	return 0;
}