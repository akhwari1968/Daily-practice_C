#include <stdio.h>
#include <string.h>

void is_yuan(char arr[100],int sz)
{
	char yuan[100];
	int i = 0;
	int j = 0;
	
	for (i = 0;i < sz;i++)
	{
		if (arr[i] == 97 || arr[i] == 101 || arr[i] == 105 || arr[i] == 111 ||arr[i] == 117)
		{
			yuan[j] = arr[i];
			j++;
		}
	}
	
	for (i = 0;i < j;i++)
	{
		printf("%c",yuan[i]);
	}
	
}

int main()
{
	char arr[100];
	int i = 0;
	
	scanf("%s",arr);
	
	int sz = strlen (arr);
	//printf("%d",sz);
	
	/*for (i = 0;i < sz;i++)
	{
		printf("%c",arr[i]);
	}*/
	
	is_yuan(arr,sz);
	
	return 0;
}