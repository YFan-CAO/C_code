#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printf_weishu(int x)
{
	int f = x;
	int n = 0;
	int b = 0;
	int *pb = &b;
	while(1)  //shu wei shu
	{
		n++;
		*pb = x / 10;
		x = *pb;
		if (*pb == 0)
			break;

	}
	int i = 1;
	int di = 1;
	for (i = 1; i < n; i++)
	{
		di = di * 10;

	}
	int a = f / di;
	int ret = (f - a * di);
	if (1)
	{
		
		printf("%d\n", a);
		if (ret != 0) {
			return printf_weishu(ret);
		}
	}

}
int main()
{

	int a = 0;
	scanf("%d", &a);
	printf_weishu(a);
	return 0;
}