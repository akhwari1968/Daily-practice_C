#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)//����1��n�����������������ж�
	{
		int j = 0;
		int factors[10000] = { 0 };//�������������жϳɹ�������
		int tmp = 0;
		sum = 0;

		for (j = 1; j < i; j++)//����ÿһ���������������
		{
			if (i % j == 0)
			{
				sum += j;
				factors[tmp++] = j;//�˴�tmp��ʹ�ú�++���൱�ڶ�+��һ��
			}
		}

		if (sum == i)//�������ж��Լ����
		{
			printf("%d its factors are ", i);
			for (j = 0; j < tmp; j++)//���д˴�С��tmp�����ǵ���
			{
				printf("%d ", factors[j]);
			}
			printf("\n");
		}
	}

	return 0;
}