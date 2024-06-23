#include <stdio.h>
#include <string.h>

int main() 
{
	/*int password = 176769;
	int password1 = 0;
	int i = 1;
	scanf("%d",&password1);
	
	while (i < 4)
	{
		if (password1 == password)
		{
			printf("登录成功");
			break;
		}
		
		else if (password1 != password)
		{
			printf("请重新输入：");
			scanf("%d",&password1);
		}
		i++;
	}*/
	
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0;i < 3;i++)
	{
		printf("输入密码:");
		scanf("%s",password);
		if (strcmp(password,"176769") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
			if ( i == 2 )
			{
				printf("三次密码均输入错误，退出程序\n");
			}
		}
	}

	
    return 0;
}