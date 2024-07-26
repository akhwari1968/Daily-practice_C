#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char arr[100];
	
	fgets (arr,sizeof(arr),stdin);
	
	arr[strcspn(arr,"\n")] = '\0';
	
	int sz = strlen(arr);
	
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		if (islower(arr[i]) || isupper(arr[i]))
		{
			printf("%c",arr[i]);
		}
	}
	
	return 0;
}