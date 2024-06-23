#include <stdio.h>

int main()
{
	int N = 0;//用户输入
	double a = 2.0;//分子
	double b = 1.0;//分母
	int i = 0;//计数器
	int t = 0;//暂存a
	double sum1 = 0.0;//小和
	double sum2 = 0.0;//总和
	scanf("%d",&N);
	
	sum2 += a / b;//第一项已经得到，直接加入总和
	
	for (i = 1;i < N;i++)//从0到N-1次循环
	{
		t = a;
		a = a + b;//算下一项分子
		b = t;//下一项分母等于前一项分子
		sum1 = a / b;
		sum2 += sum1;//每次循环将求得项值加入总和  
	}
	
	printf("%0.2lf",sum2);
	
	return 0;
}