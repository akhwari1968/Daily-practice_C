#include <stdio.h>

int main()
{
	
	int n = 0;
	scanf("%d",&n);
	
	int arr[10000];
	int i = 0;
	int big_num = 0;
	int small_num = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] > big_num)
		{
			big_num = arr[i];
		}
		if (arr[i] < small_num)
		{
			small_num = arr[i];
		}
	}
	
	/*int big_num = arr[0];
	int small_num = arr[0];
	for (i = 1;i < n;i++)
	{
		if (arr[i] > big_num)
		{
			big_num = arr[i];
		}
		if (arr[i] < small_num)
		{
			small_num = arr[i];
		}
	}*/
	
	printf("%d",big_num - small_num);
	
	return 0;
}