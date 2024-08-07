#include <stdio.h>
#include <string.h>

int main()
{
	const char* sep = "@.";
	char arr[] = "wushao@qq.com";
	char cp[20] = { 0 };
	strcpy(cp,arr);
	
	char* ret = NULL;
	for (ret = strtok(cp,sep);
		ret != NULL;
		ret = strtok(NULL,sep))
	{
		printf("%s\n",ret);
	}
	
	return 0;
}