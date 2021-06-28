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
	printf("���������ѡ��");
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
		printf("�;֣�\n");
		break;
	case '#':
		printf("����Ӯ��\n");
		break;
	case '*':
		printf("���Ӯ��\n");
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
			printf("ллʹ�ã���ӭ�´�������\n");
			break;
		default:
			system("cls");
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	play();
	return 0;
}