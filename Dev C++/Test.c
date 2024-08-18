#include <stdio.h>

// 计算元素 x 在二维数组中的出现次数
int ji(int x,int(*p)[1000],int n,int m)
{
  int i = 0;
  int j = 0;
  int count = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (x == *(*(p+i)+j))
      {
        count++;
      }
    }
  }

  return count;
}

int main()
{
  int n = 0;
  int m = 0;
  int arr[10000][1000];
  
  // 输入行数n和列数m
  scanf("%d %d",&n,&m);

  // 读取数组输入
  int i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int tmp = 0;
  int max_count = 0;
  int most_frequent_num = arr[0][0];

  // 查找出现次数最多的元素
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      tmp = ji(arr[i][j], arr, n, m);
      if (tmp > max_count)
      {
        max_count = tmp;
        most_frequent_num = arr[i][j];
      }
    }
  }

  // 输出结果
  printf("%d", most_frequent_num);
  
  return 0;
}
