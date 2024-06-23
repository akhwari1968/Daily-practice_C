#include <stdio.h>
int main() {
    char i = 0;
    printf("请输入一个字符:");
    scanf("%c", &i); // 输入一个字符，并将其存放在 "i" 中
    printf("%c", i); // 通过读取 "i" 的值，找到对应的ASCII码的十进制数并打印出来
    return 0;
}
