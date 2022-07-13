#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******** 1.play *************\n");
	printf("******** 0.exit *************\n");
	printf("*****************************\n");

}
void game()
{

	char board[ROW][COL] = {0};
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	char ret = ' ';
	while (1)
	{
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret=is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		
	}

	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}


}
void test()
{

	int input = 0;
	do              //具体下棋步骤
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("现在开始三子棋>\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}


	} while (input);

}




int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}