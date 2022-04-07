//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b,c = 0;
//	scanf("%d %d", &a, &b);//辗转相除法 解决最大公约数问题
//	if (a > b) {
//
//		while (1)//每次都要取余 同时里面 ab的只要不断变化
//		{
//
//			c = a % b;
//
//
//			if (c == 0) {
//				printf("%d", b);
//
//				break;
//			}
//			a = b;
//			b = c;
//		}
//		
//
//	}
//	else {
//		while (1)
//		{
//
//			c = b % a;
//
//
//			if (c == 0) {
//				printf("%d", a);
//				break;
//			}
//			b = a;
//			a = c;
//		}
//		
//
//	}
//	return 0;
//}