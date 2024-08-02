#include <stdio.h>

int main()
{
	int arr[4];
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 3-i;j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for (i = 0;i < 4;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}