#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void move(int* p, int n, int m)
{
	int tmp[100];//����洢��m������
	int i = 0;

	p = p + (n - m);
	for (i = 0; i < m; i++)
	{
		tmp[i] = *p;
		p++;
	}

	for (i = 0; i < n; i++)//�������
	{
		*(p + n - 1 + m) = *(p + n - 1);
	}

	for (i = 0; i < m; i++)//��m������ǰ��
	{
		*p = tmp[i];
		p++;
	}

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100];
	int m = 0;
	int i = 0;

	scanf("%d", &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int* p = arr;

	move(p, n, m);

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}