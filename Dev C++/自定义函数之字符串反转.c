#include <stdio.h>
#include <string.h>

void ni(char* arr,int sz)
{
	int i = 0;
	int j = sz-1;
	char tmp[200];
	
	while (i < sz)//用第二个数组存储逆序后原数组
	{
		tmp[i++] = arr[j--];
	}
	
	for (i = 0;i < sz;i++)//将原数组逐一改变
	{
		arr[i] = tmp[i];
	}
}

int main()
{
	char arr[100];
	
	scanf("%s",arr);
	int sz = strlen (arr);
	
	ni(arr,sz);//逆序处理
	
	printf("%s",arr);
	
	return 0;
}