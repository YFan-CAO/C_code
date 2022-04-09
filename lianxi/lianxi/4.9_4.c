#include <cstdio>
#include<cstring>
char total[15][15];
int lok[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int demo[15][15];
int flag = 1;
void change(int x, int y)
{
	if (total[x][y] == 'E')
	{
		total[x][y] = '*';
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				printf("%c", total[i][j]);
			}
			printf("\n");
		}
		flag = 0;
	}
	total[x][y] = '*';
	demo[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int m = x + lok[i][0];
		int n = y + lok[i][1];
		if (m < 10 && m >= 0 && n < 10 && n >= 0 && flag)
		{
			if (!demo[m][n] &&
				(total[m][n] == ' ' ||
					total[m][n] == 'E'))
			{
				change(m, n);
			}
		}
	}
	total[x][y] = '!';
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%c", &total[i][j]);
		}
		getchar();
	}
	memset(demo, 0, sizeof(demo));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (total[i][j] == 'S')
			{
				change(i, j);
				break;
			}
		}
	}
}
