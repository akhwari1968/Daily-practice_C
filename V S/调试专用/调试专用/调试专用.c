#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[81];
	char arr1[81];//��Ϊʹ��fgets���������Ա�Ҫ���һ��λ�÷�ֹ���

	while (fgets(arr, sizeof(arr), stdin) != NULL)//����������������Ƿ�������򣬽��������������
	{		
		arr[strcspn(arr, "\n")] = '\0';//����洢�Ķ���\n

		int sz = strlen(arr);

		int i = 0;
		int j = 0;
		for (i = 0, j = 0; i < sz; i++)//�������飬��Ϊ�ո������һ��������
		{
			if (arr[i] != ' ')
			{
				arr1[j] = arr[i];
				j++;
			}
		}
		arr1[j] = '\0';//��Ԫ�ز���80ʱ��\0���

		printf("%s\n", arr1);

		memset(arr, '\0', sizeof(arr));//������������
		memset(arr1, '\0', sizeof(arr1));//������������
	}

	return 0;
}