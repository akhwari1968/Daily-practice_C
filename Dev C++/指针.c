#include <stdio.h>

int main() 
{
   int  a = 10;   /* 实际变量的声明 */
   int  *p = &a;        /* 指针变量的声明 */
   *p = 20;

   //ip = &var;  /* 在指针变量中存储 var 的地址 */

   printf("%x\n", &a  );

   /* 在指针变量中地址可用的值 */
   printf("%x\n", p );

   /* 使用指针访问值 */
   printf("%d\n", *p );
   printf("%d\n", a );

   return 0;
}