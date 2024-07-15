#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10];
	int i = 0;
	int xu = 0;

	for (i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int tmp = arr[0];
	for (i = 1;i < 10;i++)//找出绝对值最小值
	{
		if (abs(tmp) > abs(arr[i]))
		{
			tmp = arr[i];
			xu = i;
		}
	}
	
	if (xu != 9)//序号为9不必交换
	{
		tmp = arr[9];
		arr[9] = arr[xu];
		arr[xu] = tmp;
	}
	
	for (i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}