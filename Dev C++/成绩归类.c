#include <stdio.h>

int main()
{
	int arr[100];
	int i = 0;
	int count = 0;
	while (1)
	{
		scanf("%d",&arr[i]);
		count++;
		if (arr[i] == 0)
		{
			break;
		}
		i++;
	}
	
	int a = 0;
	int b = 0;
	int c = 0;
	for (i = 0;i < count-1;i++)
	{
		if (arr[i] >= 85)
		{
			a++;
		}
		else if (arr[i] < 85 && arr[i] > 59)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	
	printf(">=85:%d\n",a);
	printf("60-84:%d\n",b);
	printf("<60:%d\n",c);
	
	return 0;
}