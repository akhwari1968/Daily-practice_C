#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char arr[81];
	
	fgets (arr,sizeof(arr),stdin);
	
	arr[strcspn(arr,"\n")] = '\0';
	
	int sz = strlen(arr);
	
	int i = 0;
	int count = 0;
	for (i = 0;i < sz;i++)
	{
		if (arr[i] == ' ')
		{
			count++;
		}
	}
	
	printf("%d",count + 1);
	
	return 0;
}