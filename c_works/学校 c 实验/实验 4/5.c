#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

char funGet(void)
{
	char order;
	while (1)
	{
		printf("eStudent_system3 >  ");
		while ((order = getchar()) == '	');
		//while ((order = getchar()) =='	');
		while((getchar())!='\n');
		if (order == 'P' || order == 'H' || order == 'Q')
		{
			printf("%c\n", order);
			break;
		}
		else if (order == 'p' || order == 'h' || order == 'q')
		{
			order -= 32;
			printf("%c\n", order);
			break;
		}
		else
			printf("����������Ч�ַ�������\n");
	}
	return order;
}
void funQ()
{
	printf("ллʹ�ã��ټ���\n1908178011-��˧˧");
	exit(0);
}
void funH(void)
{
	printf("�Ϻ�����ѧѧ����Ϣ����V0.3��֧�ֵ������У�\n�������H����ʾ�������ʹ�ð�����Ϣ\n�������Q���˳������\n�������P��ѧ����Ϣ\n");
}
void funP(void)
{
	int num;
	float score;
	while(1)
	{
	printf("������ ѧ�ż��ɼ���");
	scanf("%d%f", &num, &score);
	if (!(num >= 1e9 && num < 1e10) || !(score<= 100 && score >= 0))
		printf("���������ѧ�Ż�ɼ��Ƿ���ȷ\nѧ�ţ�1000000000~9999999999\n�ɼ�:0~100\n");
	else
		break;
	}
	pandj(score);
}
int pandj(float score)
{
	if (score >= 85)
		printf("�����ĳɼ��ȼ�Ϊ�����㼶\n");
	else if (score >= 70)
		printf("�����ĳɼ��ȼ�Ϊ�����ü�\n");
	else if(score >= 60)
		printf("�����ĳɼ��ȼ�Ϊ���ϸ�\n");
	else
		printf("�����ĳɼ��ȼ�Ϊ�����μ�\n");
	return 0;
}

int main()
{
	int score, stu_num;
	char order;
	printf("\t\t\t\t\t\t[eStudent_system3]\n");
	while (1)
	{
		order = funGet();
		if (order == 'P')
			funP();
		else if (order == 'H')
			funH();
		else
			funQ();
	}
}
