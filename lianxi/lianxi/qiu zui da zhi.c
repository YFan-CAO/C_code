#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

	}
	int max = 0;
	int n = 0;
	for (n = 0; n < 9; n++)//a 如果小于等于10 在加1后会越界访问
	{
		if (arr[n] > arr[n + 1])
		{
			max = arr[n];
		}
		else {
			max = arr[n + 1];
		}
	}
	printf("%d", max);

	return 0;
}