#include <stdio.h>
#include <math.h>       //C语言数学头文件，pow() 函数包含在此内
   
int main() 
{
    int num;                            //定义数字
    scanf("%d", &num);                  //输入数字
    
    int n = 0;                          //定义数字的位数
    if (num == 0) n = 1;                //如果数字是0，则位数为1
    int temp = num;                     //定义 temp 来代替 num 进行计算
    
    while (temp) {                      //将temp循环除以 10，到 0 为止
        n++;        
        temp /= 10;     
    }       
    printf("%d\n", n);                  //输出数字位数
    
    for (int i = n - 1; i >= 0; i--) {  //第二循环，从左往右输出
        temp = num / pow(10, i);        //除以 10 的 i 次方
        printf("%d ", temp % 10);       //输出对 10 取余
    }
    printf("\n");                       //输出回车
    
    for (int i = 0; i < n; i++) {       //第三循环，从右往左循环
        temp = num / pow(10, i);        //除以 10 的 i 次方
        printf("%d", temp % 10);        //输出对 10 取余
    }
    
    return 0;
}