#include <stdio.h>

int main()
{
	int arr[100];
	
	while (1)
	{
		int sum = 0;
		
		scanf("%d",&arr[0]);
		if (arr[0] == 0)
		{
			break;
		}
		int i = 0;
		for (i = 1;i <= arr[0];i++)
		{
			scanf("%d",&arr[i]);
		}
		
		for (i = 1;i <= arr[0];i++)
		{
			sum += arr[i];
		}
		
		printf("%d\n",sum);
	}
	
	return 0;
}