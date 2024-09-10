#include <stdio.h>
#include <string.h>

int main()
{
	char arr[101];
	gets(arr);
	
	int left = 0;
	int right = ((strlen(arr)) - 1);
	int tmp = 0;
	
	while (1)
	{
		if (left == right || left > right)
		{
			break;
		}
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		
		left++;
		right--;
	}
	
	int i = 0;
	for (i = 0;i < strlen(arr);i++)
	{
		printf("%c",arr[i]);
	}
	
	return 0;
}