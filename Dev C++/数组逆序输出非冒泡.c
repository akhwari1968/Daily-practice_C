#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = {};
	
	for (i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i = 9;i >= 0;i--)
	{
		printf("%d ",arr[i][j]);
	}
	
	return 0;
}