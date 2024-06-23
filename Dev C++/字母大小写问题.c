#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char arr[100];
	int i = 0;
	
	fgets(arr, sizeof(arr), stdin);
	
	arr[strcspn(arr, "\n")] = '\0';
	
	int sz = strlen(arr);
	
	for (i = 0;i < sz;i++)
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
	}
	
	printf("%s",arr);
	
	return 0;
}