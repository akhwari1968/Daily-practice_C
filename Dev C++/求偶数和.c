#include <stdio.h>

int main() 
{
	int n = 0;
	int i = 0;
	int num = 0;
	int sum = 0;
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%d",&num);
		if (num % 2 == 0)
		{
			sum += num;
		}
	}
	printf("%d",sum);
	
    return 0;
}
