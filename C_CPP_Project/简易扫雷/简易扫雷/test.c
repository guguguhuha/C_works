#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	//Displayboard(mine, ROW, COL);
	InitBoard(show, ROWS, COLS, '*');
	//Displayboard(show, ROW, COL);
	SetMine(mine, ROW, COL);

	Displayboard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);
}

void menu()
{
	printf("********************************************\n");
	printf("********           1.play          *********\n");
	printf("********           0.exit          *********\n");
	printf("********************************************\n");
}

void play()
{
	srand((unsigned)time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("谢谢使用，欢迎下次再来！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
}

int main()
{
	play();
	return 0;
}