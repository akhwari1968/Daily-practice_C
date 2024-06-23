#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()//菜单
{
	printf("*************************\n");
	printf("********  1.play  *******\n");
	printf("********  0.exit  *******\n");
	printf("*************************\n");
}

void game()
{
	int guess = 0;
	//生成随机数
	int ret = rand() % 100 + 1;
	//printf("%d",ret);
	
	while (1)
	{
		printf("请输入数字\n");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
	
}

int main()
{
	srand ((unsigned int) time(NULL));//rand调用种子
	int input = 0;
	do
	{
		menu();//开始菜单
		printf("请选择");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				game ();//进入游戏
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
	
	return 0;
}