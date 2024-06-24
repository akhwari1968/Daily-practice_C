#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10001] = {0};
	
	gets(arr);
	
	int left = 0;
	int right = strlen(arr) - 1;
	
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		
		left++;
		right--;
	}
	
	printf("%s\n",arr);
	
	return 0;
}