#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define COUNT 10

//��ʼ������
void InitBoard(char board[ROWS][COLS], int row, int col, char dero);

//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col);

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//���׽��
int Result(char board[ROWS][COLS], int row, int col);

//ɨ����չ
void show_recusion(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
