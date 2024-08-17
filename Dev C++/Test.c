#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[1001];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(str);
        puts(str);
        printf("\n");
    }
    while (scanf("%s", &str) != EOF)
    {
        printf("%s\n", str);
    }
    return 0;
}