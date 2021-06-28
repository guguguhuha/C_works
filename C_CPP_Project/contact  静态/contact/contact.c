#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"



void Init(struct contact* p)
{
	p->sz = 0;
	memset(p->num,0, sizeof(p->num));
}

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

void add(struct contact* p)
{
	if (p->sz == MAX)
	{
		printf("通讯录已满,无法添加新联系人！\n");
		return;
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", p->num[p->sz].name);
		//gets(p->num[p->sz].name);
		printf("请输入年龄：");
		scanf("%d", &p->num[p->sz].age);
		printf("请输入性别：");
		scanf("%s", p->num[p->sz].sex);
		printf("请输入电话号码：");
		scanf("%s", p->num[p->sz].tele);
		printf("请输入地址：");
		scanf("%s", p->num[p->sz].addr);

		printf("添加成功！\n");
		p->sz += 1;
	}
}


void del(struct contact* p)
{
	int i = 0,ret;
	char name[NAME_MAX];
	printf("请输入你要删除的联系人姓名:>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret == -1)
	{
		printf("查无此人, 请检查输入！\n");
	}
	else
	{
		for (i = ret; i < p->sz; i++)
		{
			p->num[i] = p->num[i + 1];
		}
		p->sz -= 1;
		printf("删除成功！\n");
	}

}

void search(struct contact* p)
{
	char name[NAME_MAX];
	int ret;
	printf("请输入你要查询的联系人:>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret == -1)
	{
		printf("查无此人, 请检查输入！\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入你所要修改的联系人:>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret == -1)
	{
		printf("查无此人, 请检查输入！\n");
	}
	else
	{
		do
		{
			printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				p->num[ret].name,
				p->num[ret].age,
				p->num[ret].sex,
				p->num[ret].tele,
				p->num[ret].addr);
			printf("***********************\n");
			printf("*****    1.姓名    ****\n");
			printf("*****    2.年龄    ****\n");
			printf("*****    3.性别    ****\n");
			printf("*****    4.电话    ****\n");
			printf("*****    5.地址    ****\n");
			printf("*****    0.退出    ****\n");
			printf("***********************\n");
			printf("请输入你要修改的项目:>");
			scanf("%d", &input);
			switch (input)
			{
			case EXIT:
				printf("退出修改模式！\n");
				break;
			case NAME:
				printf("请输入你要修改的姓名:>");
				scanf("%s", p->num[ret].name);
				break;
			case AGE:
				printf("请输入你要修改的年龄:>");
				scanf("%d", &p->num[ret].age);
				break;
			case SEX:
				printf("请输入你要修改的性别:>");
				scanf("%s", p->num[ret].sex);
				break;
			case TELE:
				printf("请输入你要修改的电话:>");
				scanf("%s", p->num[ret].tele);
				break;
			case ADDR:
				printf("请输入你要修改的地址:>");
				scanf("%s", p->num[ret].addr);
				break;
			default:
				printf("输入非法，请检查输入！\n");
				break;
			}
		} while (input);
	}
	printf("修改成功！\n");
}

void show(struct contact* p)
{
	int i = 0;
	if (p->sz == 0)
	{
		printf("通讯录为空！\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("*****    1.姓名    ****\n");
	printf("*****    2.年龄    ****\n");
	printf("*****    3.性别    ****\n");
	printf("*****    4.电话    ****\n");
	printf("*****    5.地址    ****\n");
	printf("*****    0.退出    ****\n");
	printf("***********************\n");
	printf("请输入你所要排序的参考项:>");
	scanf("%d", &input);
	switch (input)
	{
	case EXIT:
		printf("退出排序");
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
		printf("输入错误，请检查输入！\n");
		break;
	}
	printf("本次排序后的结果为: \n");
	show(p);
	
}

void help()
{
	printf("add---在通讯录中添加联系人\n");
	printf("del---在通讯录中删除联系人\n");
	printf("search---在通讯录中查找联系人\n");
	printf("modify---在通讯录中修改联系人信息\n");
	printf("show---显示通讯录联系人\n");
	printf("sort---在通讯录中按某种要求排序联系人信息\n");
	printf("help---显示帮助信息\n");
	printf("quit---退出\n");
}