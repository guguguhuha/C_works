#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************************************\n");
	printf("*******             1.play          *********\n");
	printf("*******             0.quit          *********\n");
	printf("*********************************************\n");
}

int choice()
{
	int input = 0;
	printf("请输入你的选择：");
	scanf("%d", &input);
	return input;
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);

		ret = ISWIN(board, ROW, COL);
		{
			if (ret != 'c')
				break;
		}

		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);

		ret = ISWIN(board, ROW, COL);
		{
			if (ret != 'c')
				break;
		}
	}
	switch (ret)
	{
	case 'f':
		printf("和局！\n");
		break;
	case '#':
		printf("电脑赢！\n");
		break;
	case '*':
		printf("玩家赢！\n");
		break;
	default:
		break;
	}
}

void play()
{
	int input;
	do
	{
		menu();
		input = choice();
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("谢谢使用，欢迎下次再来！\n");
			break;
		default:
			system("cls");
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}

int main()
{
	play();
	return 0;
}