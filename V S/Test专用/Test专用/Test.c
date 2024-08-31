#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
    int i, k = 0, flag, b;
    char str[10][30];
    while (gets(str[k]) != NULL)
        k++;                         
    char* token;
    for (i = 0; i < k; i++) 
    {            
        flag = 1;                     
        token = strtok(str[i], ".");
        while (token != NULL) 
        {
            b = atoi(token);         
            if (b <= 0 || b > 255) flag = 0;
            token = strtok(NULL, ".");
        }
        if (flag) printf("Y\n");       
        else printf("N\n");
    }
    return 0;
}