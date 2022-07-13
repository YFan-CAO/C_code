#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void initboard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void displayboard(char board[ROW][COL], int row , int col)
{
	//两部分 一部分打印数据 一部分打印分割行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}
		}
		printf("\n");

	}

}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//别再把赋值号打错了
			}
			else
			{
				printf("该位置已被占用。\n");
			}
			break;
		}
		else
		{
			printf("坐标输入错误；\n");
		}
	}


}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;


	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}

static int if_full(char board[ROW][COL], int row ,int col )
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0]	;
	}
	//判断列
	 i = 0;

	for (i = 0; i < col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	int m = 0;
	m = if_full(board, ROW, COL);
	if (m == 1)
	{
		return 'Q';
	}
	else
	{
		return 'c';
	}

}