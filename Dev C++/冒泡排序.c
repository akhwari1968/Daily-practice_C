#include <stdio.h>

void dubble_sort(int arr[],int sz)
{
	//趟数
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)//-i的目的是优化算法，提升效率
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//把数据进行升序排序
	int sz = sizeof(arr) / sizeof arr[0];//不可放在函数内部查找
	
	dubble_sort(arr,sz);
	
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}