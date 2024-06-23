#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "hello bit";
	
	int len = my_strlen(arr);
	
	printf("%d\n",len);
	
	return 0;
}