#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//4. 自定义3 个函数，函数的功能分别实现以下（1）~（3)功能。输入一个10~10000的正整数，通过菜单选择可以：
//（1）求出它是几位数；
//（2）输出每一位数字；
//（3）判断其逆序后是否仍与原数相同（是否为回文数），并输出结果。
//要求菜单选择具有容错功能，输入10~10000数据如果输入错误，可以重复输入直至正确（可以容错）；
//菜单可以无限次选择，直至主动退出。界面可参考第3题“菜单选择求一个数的函数值”。

void digit(int num1)
{
	int i=0;
	int num = num1;
	while (num)
	{
		num /= 10;
		i++;
	}
	printf("%d为%d位数\n", num1, i);
}
int per_digit(int num1)
{
	int num = num1;
	if (num1 > 9)
		per_digit(num1/10);
	printf("%d\t\n",num1 % 10);
}
int pal(int num1)
{
	int num = num1;
	int PAL = 0;
	int i;
	do
	{
		i = num % 10;
		PAL = PAL * 10 + i;
		num /= 10;
	} while (num > 0);
	if (PAL == num1)
		printf("%d是回文数\n", num1);
	else
		printf("%d不是回文数\n", num1);
}
int INPUT()
{
	int num;
	while (1)
	{
		printf("请输入一个数（10~10000）:  \n");
		scanf("%d", &num);
		if (num >= 10 && num <= 10000)
			return num;
	}
}
int main()
{
	int num,choice;
	int flag = 0;
	char esc;
	printf("本程序可以完成一些判断及计算\n");
	printf("###################################################################\n");
	printf("# 1 求出它是几位数\t\t\t\t\t\t###\n");
	printf("# 2 输出每一位数字\t\t\t\t\t\t###\n");
	printf("# 3 判断其逆序后是否仍与原数相同（是否为回文数），并输出结果\t###\n");
	printf("# 0 退出\t\t\t\t\t\t\t###\n");
	printf("###################################################################\n");
	while (1)
	{
		while (1)
		{
			printf("请按菜单键进行选择( 0~3 ):  \n");
			scanf("%d", &choice);
			if (choice >= 0 && choice <= 3)
				break;
		}

		
		switch (choice)
		{
		case 1:
			num = INPUT();
			digit(num);
			break;
		case 2:
			num = INPUT();
			per_digit(num);
			break;
		case 3:
			num = INPUT();
			pal(num);
			break;
		case 0:
			printf("你确定要退出吗？（y/n）");
			getchar();
			scanf("%c", &esc);
			if (esc == 'y')
			{
				printf("谢谢使用！ \n");
				flag = 1;
			}
			break;
		}
		if (flag)
			break;
		
	}
	return 0;
}
	