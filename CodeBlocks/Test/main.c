#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 30
int main(void) {
    int i,k=0,flag,b;
       char str[10][N];
    while(gets(str[k])!=NULL)
        k++;                         //���봦��
    char *token;
    for(i=0; i<k; i++) {            //ͨ��ѭ����ÿһ��IP�����ж�
        flag=1;                     //��ÿһ��IP��Ԥ����Ϊ1���棩
        token=strtok(str[i],".");
        while(token!=NULL) {
            b=atoi(token);         //b����ת�������ķ���ֵ������ת���ִ�����ĸ����ת��ʧ�ܣ�����0��
            if(b<=0||b>255) flag=0;
        token=strtok(NULL,".");
        }
        if(flag) printf("Y\n");       //�������
        else printf("N\n");
    }
    return 0;
}
