#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	
	while (~scanf("%s",arr))
	{
		int len = 0;
		int sum = 0;
		len = strlen(arr);
		for (int i = 0;i < len;i++)
		{
			sum += (arr[i]-'0');
		}
		printf("%d\n",sum);
	}
	
	return 0;
}