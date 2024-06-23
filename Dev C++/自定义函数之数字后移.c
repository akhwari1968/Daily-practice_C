#include <stdio.h>

void move(int* arr,int n,int m)
{
	int tmp[100];//数组存储后m个数字
	int i = 0;
	
	for (i = 0;i < m;i++)
	{
		tmp[i] = *(arr+(n-m+i));
		//tmp[i] = arr[n-m+i];
	}
	
	for (i = n-m-1;i >= 0;i--)//剩余元素整体后移
	{
		arr[i+m] = arr[i];
	}
	
	for (i = 0;i < m;i++)//后m个数字前移
	{
		arr[i] = tmp[i];
	}
	
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int arr[100];
	int m = 0;
	int i = 0;
	
	for (i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&m);
	
	int* p = &arr[0];
	
	move(p,n,m);
	
	for (i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}