#include <stdio.h>

int main()
{
	char arr[20];
	int i;
	gets(arr);
	if (arr[0] == '1')
	{
		for (i = 1;i < 16;i++)
		{
			if (arr[i] == '0')
			{
				arr[i] = '1';
			}
			else
			{
				arr[i] = '0';
			}
		}
		
		for (i = 15;i >= 1;i--)
		{
			if (arr[i] == '1')
			{
				arr[i] = '0';
			}
			else
			{
				arr[i] = '1';
				break;
			}
		}
	}	
	puts(arr);
		
	return 0;
}