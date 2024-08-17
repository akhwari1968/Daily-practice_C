#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	int i = 0;
	char arr[1001];
	
	scanf("%d",&n);
	getchar();
	while (n)
	{
		gets(arr);
		printf("%s\n\n",arr);
		n--;
	}
	//printf("\n");
	
	while (gets(arr) != NULL)
	{
		int sz = strlen(arr);
		while (sz)
		{
			if (arr[i] != ' ')
			{
				printf("%c",arr[i]);
			}
			
			if (arr[i] == ' ')
			{
				printf("\n\n");
			}
			i++;
			sz--;
		}
		printf("\n");
		i = 0;
	}
		
	return 0;
}