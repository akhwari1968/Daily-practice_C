#include <stdio.h>
#include <stdlib.h>
//求一个整数存储在内存中的二进制中1的个数
int main()
{
    int a = 0;
    int b = 0;
    int i = 64;
    int count = 0;
    scanf("%d",&a);

    while (i > 0)
    {
        b = a & 1;

        if (b == 1)
        {
            count++;
        }
        a = a >> 1;
        i--;
    }

    printf("%d",count);

    return 0;
}
