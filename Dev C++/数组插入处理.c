/*#include <stdio.h>

int main()
{
	int num = 0;
	int arr[9] = {};
	int i = 0;
	
	for (i = 0;i < 9;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&num);
	
	for (i = 0;i < 10;i++)
	{
		if (arr[i] <= num)
		{
			printf("%d\n",arr[i]);
		}
		else
		{
			printf("%d\n",num);
			break;
		}
	}
	//printf("%d",i);
	int a = 0;
	for (a = i;a < 9;a++)
	{
		printf("%d\n",arr[a]);
	}
	
	return 0;
}*/
#include <stdio.h>

int main()
{
    int num = 0;
    int arr[10] = {0};  // 定义大小为10的数组
    int i = 0;
    
    // 输入9个已排序好的元素
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // 输入要插入的元素
    scanf("%d", &num);
    
    // 找到插入位置
    int pos = 9;
    for (i = 0; i < 9; i++)
    {
        if (arr[i] > num)
        {
            pos = i;
            break;
        }
    }
    
    // 移动元素以腾出位置给新元素
    for (i = 9; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    // 插入新元素
    arr[pos] = num;
    
    // 输出新的数组
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
