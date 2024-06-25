#include <stdio.h>
#include <string.h>

int main()
{
	char arr[81];
	char arr1[81];//因为使用fgets函数，所以比要求多一个位置防止溢出

	while (fgets(arr, sizeof(arr), stdin) != NULL)//根据输入情况决定是否结束程序，解决多行输入问题
	{		
		arr[strcspn(arr, "\n")] = '\0';//清理存储的多余\n

		int sz = strlen(arr);

		int i = 0;
		int j = 0;
		for (i = 0, j = 0; i < sz; i++)//遍历数组，不为空格放入另一个数组内
		{
			if (arr[i] != ' ')
			{
				arr1[j] = arr[i];
				j++;
			}
		}
		arr1[j] = '\0';//当元素不到80时用\0封口

		printf("%s\n", arr1);

		memset(arr, '\0', sizeof(arr));//清理数组内容
		memset(arr1, '\0', sizeof(arr1));//清理数组内容
	}

	return 0;
}