#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int max_number = 0;
	
	scanf("%d %d",&a,&b);
	
	/*if (a > b)//找出较大者
	{
		max_number = a;
	}
	else
	{
		max_number = b;
	}
	
	while (1)
	{
		if (max_number % a == 0 && max_number % b == 0)
		{
			printf("%d",max_number);
			break;
		}
		max_number++;
	}*/
	
	int i = 1;
	
	while (a * i % b)
	{
		i++; b 
	}
	
	printf("%d\n",i * a);
	
	return 0;
}