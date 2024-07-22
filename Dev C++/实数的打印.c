#include<stdio.h>
int main(void)
{
    double a;
    scanf("%lf",&a);
    printf("%6.2lf\n",a);
    printf("%6.2lf %6.2lf\n",a,a);
    printf("%6.2lf %6.2lf %6.2lf\n",a,a,a);
    return 0;
}