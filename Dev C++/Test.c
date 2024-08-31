#include<stdio.h>
int main()
{
    int k,a,b,c,d;
    char s[100];
    while(~(k=scanf("%d.%d.%d.%d",&a,&b,&c,&d)))//遇到错误时返回0取反为-1， 输入几个正确数据就返回几
    {
        gets(s);//吃掉输入错误的字符跟多出来的字符
        if(s[0]!='\0')//如果有错误字符跟多余字符就输出N
        {
            printf("N\n");
            continue;
        }
        else if(k<4)//如果没有错误字符，但是输入的正确数据不满四个就输出N
        {
            printf("N\n");
            continue; 
        }
        else if(a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255&&d>=0&&d<=255)//如果没有以上情况，当满足条件时输出Y，条件不满则N
        printf("Y\n");
        else
        printf("N\n");
    }
}