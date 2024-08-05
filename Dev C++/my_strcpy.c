#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* p2,const char* p1)
{
	assert(p2 && p1);

	char* ret = p2;
	
	while (*p2++ = *p1++)
	{
		;
	}
	
	return ret;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = {0};
	
	my_strcpy(arr2,arr1);
	printf("%s\n",arr2);
	
	return 0;
}