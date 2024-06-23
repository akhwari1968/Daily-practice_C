#include <stdio.h>

int main()
{
	int i = 1;
	int count = 0;
	
	for (i = 1;i < 101;i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		
		if(i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}