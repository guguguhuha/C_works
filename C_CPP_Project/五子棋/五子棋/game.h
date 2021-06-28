#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 10
#define COL 10

//��ʼ������ 
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�����
void Player1Move(char board[ROW][COL],int row, int col);

//���2��
void Player2Move(char board[ROW][COL], int row, int col);

//������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char ISWIN(char board[ROW][COL], int row, int col);
 
//�ж������Ƿ�����
int ISFULL(char board[ROW][COL], int row, int col);

