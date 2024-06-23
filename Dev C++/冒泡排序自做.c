#include <stdio.h>

 void paopao(int arr[])
{
	int i = 0;
	int a = 0;
	for (a = 0;a < 9;a++)
	{
		//一趟，走九趟
		
		for (i = 0;i < 9;i++)
		{
			if (arr[i] < arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[10] = {};
	
	for (i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	paopao(arr);
	
	for (i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}