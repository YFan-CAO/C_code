#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3 //用define定义的棋盘行列大小  是因为方便后续扩大棋盘
#define COL 3

void initboard (char board[ROW][COL], int row, int col );//初始化棋盘
void displayboard (char board[ROW][COL], int row, int col );//打印棋盘
void playermove(char board[ROW][COL], int row, int col);//玩家下棋
void computermove(char board[ROW][COL], int row, int col);//电脑下棋

char is_win(char board[ROW][COL], int row, int col);//判断输赢或平局