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
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//��ӡ�ָ���
		if (i < row - 1)
		{
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

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
	{
		printf("��������Ҫ�µ�������꣺");
		scanf("%d%d", &i, &j);
		//����Ƿ�Խ��
		if (1 <= i && i <= row && j >= 1 && j <= col)
		{
			if (board[i - 1][j - 1] != ' ')
				printf("�������ѱ�ռ�ã�\n");
			else
			{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
			printf("����Ƿ����ʣ�\n");
	}
	system("cls");
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	printf("�����ߣ�\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
	Sleep(1000);
	system("cls");
}

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

	//�ж��Ƿ�����
	if (1 == ISFULL(board, row, col))
	{
		return 'f';
	}
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			//�жϺ���
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
			//�ж϶Խ���
			else if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i][j] && board[i][j] != ' ')
				return board[i][j];
			else if (board[col - 1 - i][j] == board[col - 2 - i][j + 1] && board[col - 3 - i][j + 2] == board[col - 1 - i][j] && board[col - 1 - i][j] != ' ')
				return board[col - 1 - i][j];
		}
	}
	for (i = 0; i < col - 2; i++)
	{
		for (j = 0; j < col; j++)
		{
			//�ж�����
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	return 'c';
}