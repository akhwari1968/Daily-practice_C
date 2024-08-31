#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 30
int main(void) {
    int i,k=0,flag,b;
       char str[10][N];
    while(gets(str[k])!=NULL)
        k++;                         //输入处理
    char *token;
    for(i=0; i<k; i++) {            //通过循环对每一行IP进行判断
        flag=1;                     //对每一行IP，预先置为1（真）
        token=strtok(str[i],".");
        while(token!=NULL) {
            b=atoi(token);         //b接受转换后函数的返回值，若待转换字串含字母（即转换失败）返回0。
            if(b<=0||b>255) flag=0;
        token=strtok(NULL,".");
        }
        if(flag) printf("Y\n");       //输出处理
        else printf("N\n");
    }
    return 0;
}
