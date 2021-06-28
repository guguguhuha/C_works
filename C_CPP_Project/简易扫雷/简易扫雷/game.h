#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int row, int col, char dero);

//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col);

//放置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//找雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//找雷结果
int Result(char board[ROWS][COLS], int row, int col);

//扫雷扩展
void show_recusion(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
