#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int a = 0;
    char b;
    scanf_s("%d", &a);

    if (a >= 90)
    {
        b = 'A';
    }
    else
        if (a >= 80)
        {
            b = 'B';
        }
        else
            if (a >= 70)
            {
                b = 'C';
            }
            else
                if (a >= 60)
                {
                    b = 'D';
                }
                else
                    if (a < 60)
                    {
                        b = 'E';
                    }
    printf("%c", b);

    return 0;
}