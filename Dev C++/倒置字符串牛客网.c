#include <stdio.h>
#include <string.h>

int main()
{
	char arr[101];
	int i = 0;
	int j = 0;
	
	fgets(arr,101,stdin);
	
	arr[strcspn(arr,"\n")] = '\0';//通过strcspn找到换行的下标位置并更改为终止符
	
	int sz = strlen(arr);
	
	for (i = sz;i >= 0;i--)//从后往前遍历
	{
		if (arr[i] == ' ')//发现空格则进入打印
		{
			for (j = i+1;j < sz;j++)//从空格后一个字母正序打印至原始元素位置
			{
				printf("%c",arr[j]);
			}
			printf(" ");//打印空格
			sz = i;//更新原始元素下标
		}
		
		if (i == 0)//第一个单词前没有空格，所以单独判断以及打印
		{
			for (i = 0;i < sz;i++)
			{
				printf("%c",arr[i]);
			}
			printf(" ");
			break;//打印完后跳出结束循环
		}
	}
	
	return 0;
}