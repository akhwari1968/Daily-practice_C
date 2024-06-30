#include <stdio.h>
#include <string.h>

void copy(char* arr,int n,int m,int sz)
{
	char tmp[1000];
	int i = 0;
	int j = m-1;
	while (j < sz)
	{
		tmp[i++] = arr[j++];
	}
	
	tmp[i] = '\0';//封口防止打印未知内容，因为i多++了一次
	
	printf("%s",tmp);
}

int main()
{
	int n = 0;
	char arr[1000];
	int m = 0;
	
	scanf("%d\n%s\n%d",&n,arr,&m);
	
	int sz = strlen(arr);
	
	//printf("%d %d %s",n,m,arr);
	
	copy(arr,n,m,sz);
	
	return 0;
}