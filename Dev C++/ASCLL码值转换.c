#include <stdio.h>

int main()
{
	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
	int i = 0; 
	//sizeof(arr)  计算数组的总大小，单位字节；
	//sizeof(arr[0])  计算数组单个元素的大小
	//两者相除得到数组元素的个数。
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	while(i<sz)
	{
		printf("%c",arr[i]);
		i++;
	}
	
	return 0;
}