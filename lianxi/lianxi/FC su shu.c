#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void sushu(int i)
{
	int  k;
	
		int p = 1; //用p来判断当前数是否是质数 ，p=1是质数,p=0不是质数
		for (k = 2; k < sqrt(i); k++)
		{
			if (i % k == 0)
			{
				p = 0;
				break;
			}
		}
		if (p == 1)
			printf("%d ", i);
	
}
int main()
{
	int i = 0;
	for ( i = 100; i <=200; i++)
	{
		sushu(i);
	}

	return 0;
}