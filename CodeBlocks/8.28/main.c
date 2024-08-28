#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int a = 0;
//    int b = 1;
//    int c = 0;
//
//    while (1)
//    {
//        if (n == b)
//        {
//            printf("0\n");
//            break;
//        }
//        else if (n < b)
//        {
//            if (abs(a - n) > abs(b - n))
//            {
//                printf("%d",abs(b - n));
//            }
//            else
//            {
//                printf("%d",abs(a - n));
//            }
//            break;
//        }
//
//        c = a + b;
//        a = b;
//        b = c;
//    }
//
//    return 0;
//}

#include <string.h>

int main()
{
    char arr[100];
    char tmp[200];
    gets(arr);
    int i = 0;
    int j = 0;
    int len = strlen(arr);
    for (i = 0;i < len;i++)
    {
         if (arr[i] != ' ')
         {
             tmp[j] = arr[i];
             j++;
         }
         else if (arr[i] == ' ')
         {
             tmp[j] = '%';
             j++;
             tmp[j] = '2';
             j++;
             tmp[j] = '0';
             j++;
         }
    }

    printf("%s",tmp);

    return 0;
}
