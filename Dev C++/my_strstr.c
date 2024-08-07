#include <stdio.h>
#include <assert.h>

const char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}

int main()
{
	my_strstr()
	
	return 0;
}