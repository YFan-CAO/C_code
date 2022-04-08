#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 4;
	scanf("%d", &a);
	while (b != 0)
	{
		printf("%d", a % 10);
		a = a / 10;
		b--;


	}

	return 0;
}