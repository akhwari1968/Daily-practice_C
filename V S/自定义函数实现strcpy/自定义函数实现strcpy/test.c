#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;

	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[20] = "XXXXXXXXXXXXX";
	char arr2[] = "hello bit";

	my_strcpy(arr1, arr2);

	printf("%s", my_strcpy(arr1, arr2));

	return 0;
}