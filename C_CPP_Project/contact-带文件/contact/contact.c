#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"


//���ݺ���
int check(struct contact* p)
{
	if (p->sz == p->capacity)
	{
		//����
		struct person* ptr = realloc(p->num, (p->capacity + 1) * sizeof(struct person));
		if (ptr == NULL)
		{
			perror("����ʧ�ܣ�\n");
			exit(0);
		}
		else
		{
			printf("���ݳɹ���\n");
			p->num = ptr;
			p->capacity += 1;
			return 1;
		}
	}
	return 1;

}



////ͨѶ¼������̬��ʼ��
//void Init(struct contact* p)
//{
//	p->sz = 0;
//	memset(p->num,0, sizeof(p->num));
//}

////ͨѶ¼������̬��ʼ��
//void Init(struct contact* p)
//{
//	p->sz = 0;
//	p->capacity = SZ_DEFAULT;
//	p->num = (struct person*)calloc( SZ_DEFAULT, sizeof(struct person));
//	if (p->num == NULL)
//	{
//		printf("ͨѶ¼��ʼ��ʧ�ܣ�\n");
//		printf("%s", strerror(errno));
//		exit(1);
//	}
//}


//���봢�����ϵ��
void load(struct contact* p)
{
	FILE* fp = fopen("contact.dat", "rb");

	if (fp == NULL)
	{
		printf("INIT:%s", strerror(errno));
		exit(1);
	}

	struct person temp = { 0 };//��ʱ������Ϣ

	while (fread(&temp, sizeof(struct person), 1, fp))
	{
		if (check(p))//����Ƿ�����
		{
			p->num[p->sz] = temp;
			p->sz++;

		}
	}
	printf("����%dλ��ϵ������\n", p->sz);

}



//ͨѶ¼������̬-�ļ� ��ʼ��
void Init(struct contact* p)
{
	FILE *fp = fopen("contact.dat", "a");//���������ļ�
	if (fp == NULL)
	{
		printf("INIT:%s", strerror(errno));
		exit(1);
	}
	fclose(fp);

	p->sz = 0;
	p->capacity = SZ_DEFAULT;
	p->num = (struct person*)calloc(SZ_DEFAULT, sizeof(struct person));

	if (p->num == NULL)
	{
		printf("ͨѶ¼��ʼ��ʧ�ܣ�\n");
		printf("%s", strerror(errno));
		exit(1);
	}

	fclose(fp);
	fp = NULL;

	load(p);//���봢�����ϵ��

}


//Ѱ����ϵ����Ϣ
int Find(struct contact* p, char* name)
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(name, p->num[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}


////��̬��Ӱ汾
//void add(struct contact* p)
//{
//	if (p->sz == MAX)
//	{
//		printf("ͨѶ¼����,�޷��������ϵ�ˣ�\n");
//		return;
//	}
//	else
//	{
//		printf("������������");
//		scanf("%s", p->num[p->sz].name);
//		//gets(p->num[p->sz].name);
//		printf("���������䣺");
//		scanf("%d", &p->num[p->sz].age);
//		printf("�������Ա�");
//		scanf("%s", p->num[p->sz].sex);
//		printf("������绰���룺");
//		scanf("%s", p->num[p->sz].tele);
//		printf("�������ַ��");
//		scanf("%s", p->num[p->sz].addr);
//
//		printf("��ӳɹ���\n");
//		p->sz += 1;
//	}
//}
// 

//��̬��Ӱ汾
void add(struct contact* p)
{
	if (check(p))
	{
		printf("������������");
		scanf("%s", p->num[p->sz].name);
		//gets(p->num[p->sz].name);
		printf("���������䣺");
		scanf("%d", &p->num[p->sz].age);
		printf("�������Ա�");
		scanf("%s", p->num[p->sz].sex);
		printf("������绰���룺");
		scanf("%s", p->num[p->sz].tele);
		printf("�������ַ��");
		scanf("%s", p->num[p->sz].addr);

		printf("��ӳɹ���\n");
		p->sz += 1;
	

	}

}


void del(struct contact* p)
{
	int i = 0,ret;
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ����\n");
	}
	else
	{
		char name[NAME_MAX];
		printf("��������Ҫɾ������ϵ������:>");
		scanf("%s", name);
		ret = Find(p, name);
		if (ret == -1)
		{
			printf("���޴���, �������룡\n");
		}
		else
		{
			for (i = ret; i < p->sz; i++)
			{
				p->num[i] = p->num[i + 1];
			}
			p->sz -= 1;
			printf("ɾ���ɹ���\n");
		}
	}
}

void search(struct contact* p)
{
	char name[NAME_MAX];
	int ret;
	printf("��������Ҫ��ѯ����ϵ��:>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret == -1)
	{
		printf("���޴���, �������룡\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
		p->num[ret].name,
		p->num[ret].age,
		p->num[ret].sex,
		p->num[ret].tele,
		p->num[ret].addr);
	}
}

void modify(struct contact* p)
{
	char name[NAME_MAX];
	int ret, input;
	printf("����������Ҫ�޸ĵ���ϵ��:>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret == -1)
	{
		printf("���޴���, �������룡\n");
	}
	else
	{
		do
		{
			printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				p->num[ret].name,
				p->num[ret].age,
				p->num[ret].sex,
				p->num[ret].tele,
				p->num[ret].addr);
			printf("***********************\n");
			printf("*****    1.����    ****\n");
			printf("*****    2.����    ****\n");
			printf("*****    3.�Ա�    ****\n");
			printf("*****    4.�绰    ****\n");
			printf("*****    5.��ַ    ****\n");
			printf("*****    0.�˳�    ****\n");
			printf("***********************\n");
			printf("��������Ҫ�޸ĵ���Ŀ:>");
			scanf("%d", &input);
			switch (input)
			{
			case EXIT:
				printf("�˳��޸�ģʽ��\n");
				break;
			case NAME:
				printf("��������Ҫ�޸ĵ�����:>");
				scanf("%s", p->num[ret].name);
				break;
			case AGE:
				printf("��������Ҫ�޸ĵ�����:>");
				scanf("%d", &p->num[ret].age);
				break;
			case SEX:
				printf("��������Ҫ�޸ĵ��Ա�:>");
				scanf("%s", p->num[ret].sex);
				break;
			case TELE:
				printf("��������Ҫ�޸ĵĵ绰:>");
				scanf("%s", p->num[ret].tele);
				break;
			case ADDR:
				printf("��������Ҫ�޸ĵĵ�ַ:>");
				scanf("%s", p->num[ret].addr);
				break;
			default:
				printf("����Ƿ����������룡\n");
				break;
			}
		} while (input);
	}
	printf("�޸ĳɹ���\n");
}

void show(struct contact* p)
{
	int i = 0;
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < p->sz; i++)
		{
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			p->num[i].name,
			p->num[i].age,
			p->num[i].sex,
			p->num[i].tele,
			p->num[i].addr);
		}
	}
}


int N_sort(const void* e1, const void* e2)
{
	return strcmp(((struct person*)e1)->name, ((struct person*)e2)->name);
}

int A_sort(const void* e1, const void* e2)
{
	return ((struct person*)e1)->age - ((struct person*)e2)->age;
}

int S_sort(const void* e1, const void* e2)
{
	return strcmp(((struct person*)e1)->sex, ((struct person*)e2)->sex);
}
int T_sort(const void* e1, const void* e2)
{
	return  strcmp(((struct person*)e1)->tele, ((struct person*)e2)->tele);
}

int AD_sort(const void* e1, const void* e2)
{
	return  strcmp(((struct person*)e1)->addr, ((struct person*)e2)->addr);
}

void sort(struct contact* p)
{
	int input;
	printf("***********************\n");
	printf("*****    1.����    ****\n");
	printf("*****    2.����    ****\n");
	printf("*****    3.�Ա�    ****\n");
	printf("*****    4.�绰    ****\n");
	printf("*****    5.��ַ    ****\n");
	printf("*****    0.�˳�    ****\n");
	printf("***********************\n");
	printf("����������Ҫ����Ĳο���:>");
	scanf("%d", &input);
	switch (input)
	{
	case EXIT:
		printf("�˳�����");
		break;
	case NAME:
		qsort(p->num,  p->sz, sizeof(p->num[0]),N_sort);
		break;
	case AGE:
		qsort(p->num,  p->sz,sizeof(p->num[0]), A_sort);
		break;
	case SEX:
		qsort(p->num,  p->sz,sizeof(p->num[0]), S_sort);
		break;
	case TELE:
		qsort(p->num,  p->sz, sizeof(p->num[0]),T_sort);
		break;
	case ADDR:
		qsort(p->num,  p->sz,sizeof(p->num[0]), AD_sort);
		break;
	default:
		printf("��������������룡\n");
		break;
	}
	printf("���������Ľ��Ϊ: \n");
	show(p);
	
}

void help()
{
	printf("add---��ͨѶ¼�������ϵ��\n");
	printf("del---��ͨѶ¼��ɾ����ϵ��\n");
	printf("search---��ͨѶ¼�в�����ϵ��\n");
	printf("modify---��ͨѶ¼���޸���ϵ����Ϣ\n");
	printf("show---��ʾͨѶ¼��ϵ��\n");
	printf("sort---��ͨѶ¼�а�ĳ��Ҫ��������ϵ����Ϣ\n");
	printf("help---��ʾ������Ϣ\n");
	printf("quit---�˳�\n");
}

void del_con(struct contact* p)
{
	free(p->num);
	p->num  = NULL;
}

//���溯��
void save(struct contact* p)
{
	int i = 0;
	//printf("%d\n", p->sz);
	FILE* fp = fopen("contact.dat", "wb");

	if (fp == NULL)
	{
		printf("SAVE:%s\n", strerror(errno));
		exit(1);
	}

	
	for (i = 0; i < p->sz; i++)
	{
		fwrite(p->num + i, sizeof(struct person), 1, fp);//����p->num[0]
		//fprintf(fp, "lalalal123124124@#la\n");
	}

	printf("���� %d ����ϵ��",p->sz);

	fclose(fp);
	fp = NULL;
	printf("����ɹ���\n");

}
//void save(struct contact* p)
//{
//	int i = 0;
//	FILE* fp = fopen("contact.dat", "wb");
//	if (fp == NULL)
//	{
//		printf("SAVE:%s\n", strerror(errno));
//		exit(1);
//	}
//	for (i = 0; i < p->sz; i++)
//	{
//		fwrite(p->num + i, sizeof(struct person), 1, fp);
//	}
//	printf("����ɹ���\n");
//	fclose(fp);
//}
