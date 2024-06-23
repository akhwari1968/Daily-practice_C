#include <stdio.h>
#include <string.h>

void huan(char* arr1,char* arr2,int sz1,int sz2)
{
	char arr[100];
	int i = 0;
	int j = 0;
	
	for (i = 0;i < sz1;i++)//先把第一个字符串放入新的字符串
	{
		arr[i] = arr1[i];
	}
	
	i = sz1;
	while (j < sz2)//再把第二个字符串放入
	{
		arr[i++] = arr2[j++];
	}
	
	printf("%s",arr);
}

int main()
{
	char arr1[100];
	char arr2[100];
	
	scanf("%s\n%s",arr1,arr2);
	
	int sz1 = strlen (arr1);
	int sz2 = strlen (arr2);
	
	//printf("%s\n%s",arr1,arr2);检查输入
	
	huan(arr1,arr2,sz1,sz2);
	
	return 0;
}