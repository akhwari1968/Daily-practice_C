#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100];
	
	scanf("%d",&n);
	
	int i = 0;
	for (i = 0;i < n;i++)
	{
		int sum = 0;
		
		scanf("%d",&arr[0]);
		
		int j = 0;
		for (j = 1;j <= arr[0];j++)
		{
			scanf("%d",&arr[j]);
		}
		
		for (j = 1;j <= arr[0];j++)
		{
			sum += arr[j];
		}
		
		printf("%d\n",sum);
		printf("\n");
	}	
	
	return 0;
}