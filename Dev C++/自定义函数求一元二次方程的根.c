#include <stdio.h>
#include <math.h>

// 当判别式大于0时，计算并输出两个不同的实数根
void solve_real_and_different(double a, double b, double c) 
{
    double delta = b * b - 4.0 * a * c;
    double x1 = (-b + sqrt(delta)) / (2.0 * a);
    double x2 = (-b - sqrt(delta)) / (2.0 * a);
    printf("x1=%.3lf x2=%.3lf\n", x1, x2);
}

// 当判别式等于0时，计算并输出一个实数根
void solve_real_and_equal(double a, double b, double c) 
{
    double x = -b / (2.0 * a);
    printf("x=%.3lf\n", x);
}

// 当判别式小于0时，计算并输出共轭复数根
void solve_complex(double a, double b, double c) 
{
    double delta = b * b - 4 * a * c;
    double realPart = -b / (2.0 * a);
    double imagPart = sqrt(-delta) / (2.0 * a);
    printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n", realPart, imagPart, realPart, imagPart);
}

int main()
{
	double a,b,c;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double delta = (b * b) - (4.0 * a * c);
	
	//一元二次根的三种情况
	if (delta > 0)
	{
		solve_real_and_different(a, b, c);
	}
	else if (delta == 0)
	{
		solve_real_and_equal(a, b, c);
	}
	else
	{
		solve_complex(a, b, c);
	}
	
	return 0;
}