#include <stdio.h>

int main() {
    int x = 5;
    printf("原始的x值为：%d\n", x);
    printf("执行++x后，x的值为：%d\n", ++x);
    x = 5;  // 重置x的值
    printf("执行x++后，x的值为：%d\n", x++);
    printf("执行x++后，现在x的值为：%d\n", x);
    return 0;
}
