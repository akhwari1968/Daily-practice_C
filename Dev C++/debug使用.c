#include<stdio.h>
int main()
{
    int i,j;
    int N,a;
    scanf("%d",&N);
    for(i=2;i<=N;i++)        //因为 1 不是素数，所以 i 要从 2 开始
    {
        a=0;                // a 要赋值 0 否则会出错
        for(j=2;j<i;j++)    //第二个循环判断 i 能否能被其它数整除
        {
            if(i%j==0)        //如果 i 能被其它数整除，a 就自增
            a++;    
        }
        if(a==0)            //判断 a=0 如果这个数除了本身和 1 没有数能整除它就输出
            printf("%d\n",i);//输出这边注意要换行
    }
    return 0;
}