#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	
	int arr[50] = {0};
	int i = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int number = 0;
	scanf("%d",&number);
	
	/*for (i = 0;i < n;i++)
	{
		if (arr[i] == number)
		{
			arr[i] = 0;
		}
	}
	
	for (i = 0;i < n;i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ",arr[i]);
		}
	}*/
	
	int j = 0;
	for (i = 0;i < n;i++)
	{
		if (arr[i] != number)
		{
			arr[j] = arr[i];
		}
	}
	
	for (i = 0;i < j;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}