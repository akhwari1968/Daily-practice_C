#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int e = 0;
	int k = 0;
	int s = 0;
	int q = 0;
	char arr[1000];

	fgets(arr,sizeof(arr),stdin);
	
	arr[strcspn(arr,"\n")] = '\0';
	
	int sz = strlen(arr);
	
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		if (isalpha(arr[i]))
		{
			e++;
		}
		else if (arr[i] == ' ')
		{
			k++;
		}
		else if (isdigit(arr[i]))
		{
			s++;
		}
		else
		{
			q++;
		}
	}
	
	printf("%d\n%d\n%d\n%d",e,k,s,q);
	
	return 0;
}