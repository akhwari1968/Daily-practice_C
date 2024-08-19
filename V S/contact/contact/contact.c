#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

////��̬�汾
//void initcontact(contact* pc)//��ʼ��������ʵ��
//{
//	assert(pc);
//	pc->conut = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void loadcontact(contact* pc)//�����ļ�����Ϣ��ͨѶ¼��
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

//��̬�汾
int initcontact(contact* pc)//��ʼ��������ʵ��
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
	loadcontact(pc);//�����ļ�����Ϣ��ͨѶ¼��
	return 0;
}

void destroycontact(contact* pc)//����ͨѶ¼
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

////��̬�汾
//void addcontact(contact* pc)//������ϵ�˺�����ʵ��
//{
//	assert(pc);
//	if (pc->conut == max)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//
//	printf("����������:");
//	scanf("%s", pc->data[pc->conut].name);
//	printf("����������:");
//	scanf("%d", &(pc->data[pc->conut].age));
//	printf("�������Ա�:");
//	scanf("%s", &(pc->data[pc->conut].sex));
//	printf("������绰:");
//	scanf("%s", &(pc->data[pc->conut].tele));
//	printf("�������ַ:");
//	scanf("%s", &(pc->data[pc->conut].addr));
//
//	pc->conut++;
//	printf("���ӳɹ�\n");
//}


void check(contact* pc)
{
	if (pc->conut == pc->capacity)//��̬����
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
			printf("���ݳɹ�\n");
		}
	}
}
//��̬�汾
void addcontact(contact* pc)//������ϵ�˺�����ʵ��
{
	assert(pc);
	check(pc);

	printf("����������:");
	scanf("%s", pc->data[pc->conut].name);
	printf("����������:");
	scanf("%d", &(pc->data[pc->conut].age));
	printf("�������Ա�:");
	scanf("%s", &(pc->data[pc->conut].sex));
	printf("������绰:");
	scanf("%s", &(pc->data[pc->conut].tele));
	printf("�������ַ:");
	scanf("%s", &(pc->data[pc->conut].addr));

	pc->conut++;
	printf("���ӳɹ�\n");
}

void showcontact(const contact* pc)
{
	assert(pc);
	int i = 0;
	//printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");
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

void delcontact(contact* pc)//ɾ����ϵ��
{
	char name[max_name];
	assert(pc);
	int i = 0;
	if (pc->conut == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}

	printf("������Ҫɾ������ϵ�����֣�");
	scanf("%s", name);

	int pos = findbyname(pc,name);
	if (pos == -1) 
	{
		printf("������\n");
		return;
	}

	for (i = pos; i < pc->conut-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->conut--;
	printf("ɾ���ɹ�\n");
}

void searchcontact(contact* pc)//����
{
	assert(pc);
	char name[max_name];
	printf("������Ҫ���ҵ���ϵ�����֣�");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("������\n");
		return;
	}

	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
												pc->data[pos].age,
												pc->data[pos].sex,
												pc->data[pos].tele,
												pc->data[pos].addr);
}

void modifycontact(contact* pc)//�޸�
{
	assert(pc);
	char name[max_name];
	printf("������Ҫ�޸ĵ���ϵ�����֣�");
	scanf("%s", name);
	int pos = findbyname(pc, name);
	if (pos == -1)
	{
		printf("������\n");
		return;
	}

	printf("����������:");
	scanf("%s", pc->data[pos].name);
	printf("����������:");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:");
	scanf("%s", &(pc->data[pos].sex));
	printf("������绰:");
	scanf("%s", &(pc->data[pos].tele));
	printf("�������ַ:");
	scanf("%s", &(pc->data[pos].addr));
}

int cmp_people_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}

void sortcontact(contact* pc)//����
{
	assert(pc);
	qsort(pc->data,pc->conut,sizeof(peoinfo), cmp_people_name);
	printf("����ɹ�\n");
}

void savecontact(const contact* pc)//����ͨѶ¼���ļ�
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