#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    while (scanf("%d",&n) == 1)
    {
        int i = 0;

        for (i = n;i >= 0;i--)
        {
            for (int a = 0;a < i*2;a++)
            {
                printf(" ");
            }
            for (int j = 0;j <= n-i;j++)
            {
                printf("*");
            }
            printf("\n\n");
        }

        for (i = 1;i <= n;i++)
        {
            for (int a = 0;a < i*2;a++)
            {
                printf(" ");
            }
            for (int j = n;j >= i;j--)
            {
                printf("*");
            }
            printf("\n\n");
        }
    }

    return 0;
}
