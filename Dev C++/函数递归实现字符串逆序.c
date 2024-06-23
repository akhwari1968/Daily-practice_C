#include <stdio.h>
#include <string.h>

/*void reverse(char* str)//地址传参，指针接受，形参影响实参
{
	char tmp = *str;//保留a
	
	int len = strlen(str);//求字符串长度
	
	*str = *(str + len - 1);//str + len - 1通过对地址进行操作解引用后得到f位置，并赋值给下标0位置
	
	*(str + len - 1) = '\0';//改变f位置元素为\0
	
	if (strlen(str + 1) >= 2)//限制条件，中间部分元素小于两个个则结束传递，开始回归
	{
		reverse(str + 1);//原地址加一个单位，从b开始计算中间保留部分
	}
	
	*(str + len - 1) = tmp;//返回起始点
}

int main()
{
	char arr[] = "abcdef";
	
	reverse(arr);
	
	printf("%s",arr);//传递的是a的地址
	
	return 0;
}*/

/*void reverse(char arr[],int left,int right)
{
	char tmp = arr[left];
	
	arr[left] = arr[right];
	
	arr[right] = tmp;
	
	if (left < right)
		reverse(arr,left+1,right-1);
}

int main()
{
	char arr[] = "abcdefg";
	
	int left = 0;
	int right = strlen(arr)-1;
	
	reverse(arr,left,right);
	
	printf("%s\n",arr);
	
	return 0;
}*/











