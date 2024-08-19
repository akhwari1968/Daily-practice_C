#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

////静态版本
//void initcontact(contact* pc)//初始化函数的实现
//{
//	assert(pc);
//	pc->conut = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void loadcontact(contact* pc)//加载文件的信息到通讯录中
{
	FILE* pfread = fopen("contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("loadcontact");
		return;
	}

	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pfread) == 1)
	{
		check(pc);
		pc->data[pc->conut] = tmp;
		pc->conut++;
	}

	fclose(pfread);
	pfread = NULL;
}

//动态版本
int initcontact(contact* pc)//初始化函数的实现
{
	assert(pc);
	pc->conut = 0;
	pc->data = (peoinfo*)calloc(3,sizeof(peoinfo));
	if (pc->data == NULL)
	{
		printf("initcontact:%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = default_sz;
	loadcontact(pc);//加载文件的信息到通讯录中
	return 0;
}

void destroycontact(contact* pc)//销毁通讯录
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

////静态版本
//void addcontact(contact* pc)//增加联系人函数的实现
//{
//	assert(pc);
//	if (pc->conut == max)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//
//	printf("请输入名字:");
//	scanf("%s", pc->data[pc->conut].name);
//	printf("请输入年龄:");
//	scanf("%d", &(pc->data[pc->conut].age));
//	printf("请输入性别:");
//	scanf("%s", &(pc->data[pc->conut].sex));
//	printf("请输入电话:");
//	scanf("%s", &(pc->data[pc->conut].tele));
//	printf("请输入地址:");
//	scanf("%s", &(pc->data[pc->conut].addr));
//
//	pc->conut++;
//	printf("增加成功\n");
//}


void check(contact* pc)
{
	if (pc->conut == pc->capacity)//动态扩容
	{
		peoinfo* ptr = (peoinfo*)realloc(pc->data, (pc->capacity + inc_sz) * sizeof(peoinfo));
		if (ptr == NULL)
		{
			printf("addcontact:%s\n", strerror(errno));
		}
		else
		{
			pc->data = ptr;
			pc->capacity += inc_sz;
			printf("增容成功\n");
		}
	}
}
//动态版本
void addcontact(contact* pc)//增加联系人函数的实现
{
	assert(pc);
	check(pc);

	printf("请输入名字:");
	scanf("%s", pc->data[pc->conut].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->conut].age));
	printf("请输入性别:");
	scanf("%s", &(pc->data[pc->conut].sex));
	printf("请输入电话:");
	scanf("%s", &(pc->data[pc->conut].tele));
	printf("请输入地址:");
	scanf("%s", &(pc->data[pc->conut].addr));

	pc->conut++;
	printf("增加成功\n");
}

void showcontact(const contact* pc)
{
	assert(pc);
	int i = 0;
	//printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n","名字","年龄","性别","电话","地址");
	for (i = 0; i < pc->conut; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",	pc->data[i].name,
													pc->data[i].age, 
													pc->data[i].sex, 
													pc->data[i].tele, 
													pc->data[i].addr);
	}
}

int findbyname(contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->conut; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i; 
		}
	}

	return -1;
}

void delcontact(contact* pc)//删除联系人
{
	char name[max_name];
	assert(pc);
	int i = 0;
	if (pc->conut == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	printf("请输入要删除的联系人名字：");
	scanf("%s", name);

	int pos = findbyname(pc,name);
	if (pos == -1) 
	{
		printf("不存在\n");
		return;
	}

	for (i = pos; i < pc->conut-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->conut--;
	printf("删除成功\n");
}

void searchcontact(contact* pc)//查找
{
	assert(pc);
	char name[max_name];
	printf("请输入要查找的联系人名字：");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("不存在\n");
		return;
	}

	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
												pc->data[pos].age,
												pc->data[pos].sex,
												pc->data[pos].tele,
												pc->data[pos].addr);
}

void modifycontact(contact* pc)//修改
{
	assert(pc);
	char name[max_name];
	printf("请输入要修改的联系人名字：");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("不存在\n");
		return;
	}

	printf("请输入名字:");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:");
	scanf("%s", &(pc->data[pos].sex));
	printf("请输入电话:");
	scanf("%s", &(pc->data[pos].tele));
	printf("请输入地址:");
	scanf("%s", &(pc->data[pos].addr));
}

int cmp_people_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}

void sortcontact(contact* pc)//排序
{
	assert(pc);
	qsort(pc->data,pc->conut,sizeof(peoinfo), cmp_people_name);
	printf("排序成功\n");
}

void savecontact(const contact* pc)//保存通讯录到文件
{
	assert(pc);
	FILE* pfwrite = fopen("contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("savecontact");
		return;
	}

	int i = 0;
	for (i = 0; i < pc->conut; i++)
	{
		fwrite(pc->data + i, sizeof(peoinfo), 1, pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}