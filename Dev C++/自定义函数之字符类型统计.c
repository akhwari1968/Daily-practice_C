#include <stdio.h>
#include <string.h>

int is_qita(int sz,int z,int s,int k)
{
	int q = sz - z - s - k;
	return q;
}

int is_kongge(char* p3,int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0;i < sz;i++)
	{
		if (p3[i] == 32)//ASCLL码判断
		{
			count++;
		}
	}
	
	return count;
}

int is_shuzi(char* p2,int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0;i < sz;i++)
	{
		if (p2[i] > 47 && p2[i] < 58)//ASCLL码判断
		{
			count++;
		}
	}
	
	return count;
}

int is_zimu(char* p1,int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0;i < sz;i++)
	{
		if ((p1[i] > 64 && p1[i] < 91) || (p1[i] > 96 && p1[i] < 123))//ASCLL码判断
		{
			count++;
		}
	}
	
	return count;
}

int main()
{
	int z = 0;
	int s = 0;
	int k = 0;
	int q = 0;
	char arr[200];
	
	fgets(arr, 200, stdin);//使用fgets函数输入避免scanf函数的缺陷
	
	arr[strcspn(arr, "\n")] = '\0';//移除输入时获取的换行
	
	int sz = strlen (arr);
	
	z = is_zimu(arr,sz);//判断字母
	s = is_shuzi(arr,sz);//判断数字
	k = is_kongge(arr,sz);//判断空格
	q = is_qita(sz,z,s,k);//判断其他情况
	
	printf("%d %d %d %d",z,s,k,q);
	
	return 0;
}