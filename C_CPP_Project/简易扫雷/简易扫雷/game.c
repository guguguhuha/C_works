#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char dero)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = dero;
		}
	}
}

//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (j = 0; j <= col; j++)
		printf("%2d", j);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%2d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
}

//������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	int count = COUNT;
	while (count)
	{
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}

//���׽��
int Result(char board[ROWS][COLS], int row, int col)
{
	//int i, j;
	//int sum = 0;
	//for (i = row - 1; i <= row + 1; i++)
	//{
	//	for (j = col - 1; j <= col + j; i++)
	//	{
	//		sum += board[i][j];
	//	}
	//}
	int sum = board[row - 1][col - 1] +
		board[row - 1][col] +
		board[row - 1][col + 1] +
		board[row ][col - 1] +
		board[row ][col + 1] +
		board[row + 1][col - 1] +
		board[row + 1][col] +
		board[row + 1][col + 1] - 8 * '0';
	return sum;

}

//ɨ����չ
void show_recusion(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0, j = 0;

	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (show[i][j] == '*' && i >= 1 && i <= ROW && j >= 1 && j <= COL)//���̺Ϸ���
			{
				int temp = Result(mine, i, j);//��������
				show[i][j] = temp + '0';
				if (show[i][j] == '0')
				{
					show[x][y] = ' ';
					show_recusion(mine, show, i, j);//�ݹ�ʵ��ɨ�׵���չ
				}
				if (mine[x][y] == '1')
				{
					show[x][y] = '*';
				}

			}
		}
	}
}


//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int sum = row * col - COUNT;
	while (sum)
	{
		printf("������һ�����꣺");
		scanf("%d%d", &i, &j);
		//�ж�����Ϸ� 
		if (i <= row && i >= 1 && j <= col && j >= 1)
		{
			if (mine[i][j] == '1')
			{
				printf("���ѱ�ը����\n��Ϸ������\n");
				Displayboard(mine, row, col);
				break;
			}
			else if (show[i][j] != '*')//�ж������Ƿ�ռ��
			{
				printf("�������������룬���������룡\n");
			}
			else
			{
				sum--;
				show[i][j] = Result(mine, i, j) + 48;
				//show_recusion(mine, show, i, j);
				Displayboard(show, row, col);
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (sum == 0)
	{
		printf("��ϲ�㣬���ѻ�ʤ��\n");
		Displayboard(mine, row, col);
	}
}