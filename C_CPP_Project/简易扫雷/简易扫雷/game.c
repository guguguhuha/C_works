#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘
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

//打印棋盘
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

//放置雷
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

//找雷结果
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

//扫雷扩展
void show_recusion(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0, j = 0;

	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (show[i][j] == '*' && i >= 1 && i <= ROW && j >= 1 && j <= COL)//棋盘合法性
			{
				int temp = Result(mine, i, j);//附近雷数
				show[i][j] = temp + '0';
				if (show[i][j] == '0')
				{
					show[x][y] = ' ';
					show_recusion(mine, show, i, j);//递归实现扫雷的扩展
				}
				if (mine[x][y] == '1')
				{
					show[x][y] = '*';
				}

			}
		}
	}
}


//找雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int sum = row * col - COUNT;
	while (sum)
	{
		printf("请输入一个坐标：");
		scanf("%d%d", &i, &j);
		//判断坐标合法 
		if (i <= row && i >= 1 && j <= col && j >= 1)
		{
			if (mine[i][j] == '1')
			{
				printf("你已被炸亡！\n游戏结束！\n");
				Displayboard(mine, row, col);
				break;
			}
			else if (show[i][j] != '*')//判断坐标是否被占用
			{
				printf("此坐标以曾输入，请重新输入！\n");
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
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (sum == 0)
	{
		printf("恭喜你，你已获胜！\n");
		Displayboard(mine, row, col);
	}
}