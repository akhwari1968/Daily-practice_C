#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[4][20] = {"bowl","knife","fork","chopsticks"};
    char p[4][20] = {'\0'};
    int i,j,num;

    while (scanf("%d",&num) != EOF)
    {
        for (i = 1;i <= num;i++)
        {
            scanf("%s",p[i]);
        }
        for (j = 1;j <= i-1;j++)
        {
            if ((strcmp(p[j],arr[2])&&strcmp(p[j],arr[1])&&strcmp(p[j],arr[0])&&strcmp(p[j],arr[3])) == 0)
            {
                printf("%s ",p[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
