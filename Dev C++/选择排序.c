#include <stdio.h>

int main()
{
	int arr[10] = {0};
	int i = 0;
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0;i < sz;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i = 0;i < sz;i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = i + 1;j < sz;j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}