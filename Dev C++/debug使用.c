    #include<stdio.h>
    double fact(int k)//先定义函数，免得声明
    {
     double sum=1;
     int i;
     for(i=1;i<=k;i++)
     {
          sum=sum*i;
     }
     return sum;//直接返回sum的值
    }
    int main()
    {
         int n,i;
         double sum1=0;
         scanf("%d",&n);
         for(i=1;i<=n;i++)
     {
      sum1=sum1+1/fact(i);//各阶乘的倒数分之一的和
     }
     printf("sum=%.5lf",sum1);
     return 0;
    }