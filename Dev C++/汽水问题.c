#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	
	int a = n;
	int b = 0;
	int tmp = 0;
	int sum = n;
	
	while (a)
	{
		tmp = (a + b) / 2;
		b = (a + b) % 2;
		a = tmp;
		sum += a;
	}

	printf("%d",sum);//自己的方式
	
	//int money = 0;
	//scanf("%d",&money);
	
	/*int total = money;//开始就喝了钱数能买到的汽水
	int empty = money;//喝完就产生钱数对应的空瓶
	
	while (empty >= 2)//空瓶数大于等于2时才可兑换
	{
		total += empty / 2;//每次都能再喝剩余空瓶兑换后瓶数
		empty = empty / 2 + empty % 2;//更新喝完后的空瓶数
	}
	
	printf("%d\n",total);*///置换法
	
	/*if (money > 0)
	{
		printf("%d\n",2 * money - 1);//数学推导
	}
	else
	{
		printf("%d\n",0);
	}*/
	
	return 0;
}