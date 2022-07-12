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
	//������ һ���ִ�ӡ���� һ���ִ�ӡ�ָ���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < row; j++)
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
		printf("����������>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//���ٰѸ�ֵ�Ŵ����
			}
			else
			{
				printf("��λ���ѱ�ռ�á�\n");
			}
			break;
		}
		else
		{
			printf("�����������\n");
		}
	}


}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	x = rand() % row ;
	y = rand() % col ;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}