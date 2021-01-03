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
			printf("你输入了无效字符！！！\n");
	}
	return order;
}
void funQ()
{
	printf("谢谢使用，再见！\n1908178011-张帅帅");
	exit(0);
}
void funH(void)
{
	printf("上海理工大学学生信息管理V0.3，支持的命令有：\n命令符“H”显示本程序的使用帮助信息\n命令符“Q”退出命令交互\n命令符“P”学生信息\n");
}
void funP(void)
{
	int num;
	float score;
	while(1)
	{
	printf("请输入 学号及成绩：");
	scanf("%d%f", &num, &score);
	if (!(num >= 1e9 && num < 1e10) || !(score<= 100 && score >= 0))
		printf("请检查输入的学号或成绩是否正确\n学号：1000000000~9999999999\n成绩:0~100\n");
	else
		break;
	}
	pandj(score);
}
int pandj(float score)
{
	if (score >= 85)
		printf("该生的成绩等级为：优秀级\n");
	else if (score >= 70)
		printf("该生的成绩等级为：良好级\n");
	else if(score >= 60)
		printf("该生的成绩等级为：合格级\n");
	else
		printf("该生的成绩等级为：补课级\n");
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
