#include<stdio.h>
void main()
{
 int i, j;
 double sum1 = 1, sum = 0;
 for (i = 1; i < 31; i++) 
 {
  for (j = 1; j <= i; j++) 
  {
   sum1 *= j;
  }
  sum += sum1;
  sum1 = 1;
 }
  printf("%lf\n", sum);
 printf("%.2e\n", sum);
}