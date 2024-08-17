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
      if (x == (*p+i)[j])
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
	scanf("%d %d",&n,&m);
	int i = 0;
	  int j = 0;
	  for (i = 0;i < n;i++)
	  {
	    for (j = 0;j < m;j++)
	    {
	      scanf("%d ",arr[i][j]);
	    }
	  }
	  int tmp = 0;
	  int tmp1 = 0;
	  int big_tmp = 0;
	  int the_num = 0;
	  int a = 0;
	  for (i = 0;i < n;i++)
	  {
	    for (j = 0;j < m;j++)
	    {
	      tmp = ji(arr[i][j],arr,n,m);
	      if (i != 0 || j != 0)
	      {
	        if (tmp1 <= tmp)
	      {
	        big_tmp = tmp;
	        the_num = arr[i][j];
	      }
	      else
	      {
	        big_tmp = tmp1;
	        the_num = a;
	      }
	      tmp1 = tmp;
	      a = arr[i][j];
	      }
	    }
	  }
	
	  printf("%d",the_num);
	
	return 0;
}