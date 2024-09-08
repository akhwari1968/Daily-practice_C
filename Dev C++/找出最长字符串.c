#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	char max[100];
	int i = 5;
	int len = 0;
	
	while (i--)
	{
		gets(arr);
		if (len < strlen(arr))
		{
			len = strlen(arr);
			for (int j = 0;j < len;j++)
			{
				strcpy(max,arr);
			}
		}
	}
	
	printf("%s",max);
	
	return 0;
}