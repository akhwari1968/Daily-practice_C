#include <stdio.h>

int ji(int x,int(*p)[1000],int n,int m)
{
  int i = 0;
  int j = 0;
  int count = 0;
  for (i = 0;i < n;i++)
  {
    for (j = 0;j < m;j++)
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
  // 请在此输入您的代码
  int n = 0;
  int m = 0;
  int arr[10000][1000];
  scanf("%d %d",&n,&m);
  int i = 0;
  int j = 0;
  for (i = 0;i < n;i++)
  {
    for (j = 0;j < m;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  	int tmp = 0;
  	int max_count = 0;
	int most_frequent_num = arr[0][0];
  for (i = 0;i < n;i++)
  {
    for (j = 0;j < m;j++)
    {
      tmp = ji(arr[i][j],arr,n,m);
      if (tmp > max_count)
        {
        	max_count = tmp;
        	most_frequent_num = arr[i][j];
        }
    }
  }

  printf("%d",most_frequent_num);
  return 0;
}