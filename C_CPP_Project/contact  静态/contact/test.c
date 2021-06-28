#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void menu()
{
	printf("********************************************************\n");
	printf("************       1.add       2.del        ************\n");
	printf("************       3.search    4.modify     ************\n");
	printf("************       5.show      6.sort       ************\n");
	printf("************       7.help      0.quit       ************\n");
	printf("********************************************************\n");
}

void test()
{
	struct contact data;
	struct contact* p = &data;
	Init(p);
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case QUIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		case ADD:
			add(p);
			system("pause");
			system("cls");
			break;
		case DEL:
			del(p);
			system("pause");
			system("cls");
			break;
		case SEARCH:
			search(p);
			system("pause");
			system("cls");
			break;
		case MODIFY:
			modify(p);
			system("pause");
			system("cls");
			break;
		case SHOW:
			show(p);
			system("pause");
			system("cls");
			break;
		case SORT:	
			sort(p);
			system("pause");
			system("cls");
			break;
		case HELP:
			help();
			system("pause");
			system("cls");
			break;
		default:
			printf("�Ƿ����룬�������룡\n");
			system("pause");
			system("cls");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}