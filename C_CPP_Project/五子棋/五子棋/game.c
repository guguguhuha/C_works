#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < col; i++)
		printf("   %d", i + 1);
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%2d", i + 1);
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//打印分割行
		if (i < row - 1)
		{
			printf("  ");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Player1Move(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
	{
		printf("请输入玩家1要下的棋的坐标：");
		scanf("%d%d", &i, &j);
		//检查是否越界
		if (1 <= i && i <= row && j >= 1 && j <= col)
		{
			if (board[i-1][j-1] != ' ')
				printf("此坐标已被占用！\n");
			else
			{
				board[i-1][j-1] = '*';
				break;
			}
		}
		else
			printf("坐标非法访问！\n");
	}
	system("cls");
}

void Player2Move(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
	{
		printf("请输入玩家2要下的棋的坐标：");
		scanf("%d%d", &i, &j);
		//检查是否越界
		if (1 <= i && i <= row && j >= 1 && j <= col)
		{
			if (board[i - 1][j - 1] != ' ')
				printf("此坐标已被占用！\n");
			else
			{
				board[i - 1][j - 1] = '#';
				break;
			}
		}
		else
			printf("坐标非法访问！\n");
	}
	system("cls");
}

//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0, j = 0;
//	printf("电脑走：\n");
//	while (1)
//	{
//		i = rand() % row;
//		j = rand() % col;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//	}
//	Sleep(1000);
//	system("cls");
//}

int ISFULL(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char ISWIN(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;

	
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < col - 4; j++)
		{
			//判断横行
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4] && board[i][j] != ' ')
				return board[i][j];
			//判断对角线
			else if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i][j] && board[i][j] == board[i + 3][j + 3] && board[i][j] == board[i + 4][j + 4] && board[i][j] != ' ')
				return board[i][j];
			else if (board[col - 1 - i][j] == board[col - 2 - i][j + 1] && board[col - 3 - i][j + 2] == board[col - 1 - i][j] && board[col - 4 - i][j + 3] == board[col - 2 - i][j + 1] && board[col - 5 - i][j + 4] == board[col - 2 - i][j + 1] && board[col - 1 - i][j] != ' ')
				return board[col - 1 - i][j];
		}
	}
	for (i = 0; i < col - 4; i++)
	{
		for (j = 0; j < col ; j++)
		{
			//判断竖行
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && board[i][j] == board[i + 4][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断是否满盘
	if (1 == ISFULL(board, row, col))
	{
		return 'f';
	}
	
	return 'c';
}