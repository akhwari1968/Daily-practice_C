#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char arr[100];
	int i = 0;
	int count = 0;
	
	fgets (arr,sizeof(arr),stdin);//使用fgets更安全
	
	arr[strcspn(arr,"\n")] = '\0';//如果不需要保留换行符可以删除它
	
	int sz = strlen(arr);
	
	for (i = 0;i < sz;i++)
	{
		if (islower(arr[i]) || isupper(arr[i]))//判断是否为字母
		{
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}