#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char input[20] = { 0 };
	system ("shutdown -s -t 60");
	
	again:
		
	printf("请注意你的电脑将在60秒内关机，输入我爱你取消关机\n");
	scanf("%s",input);
	
	if (strcmp(input,"我爱你") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	
	return 0;
}