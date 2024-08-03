#include <stdio.h>

int main()
{
	int arr[10];
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i = 0;i < 9;i++)
	{
		int j = 0;
		for (j = 0;j < 9-i;j++)
		{
			if (arr[j] < arr[j+1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for (i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}