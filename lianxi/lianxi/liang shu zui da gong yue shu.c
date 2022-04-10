//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////int main()
//{
//	int a, b,c = 0;
//	scanf("%d %d", &a, &b);//辗转相除法 解决最大公约数问题.简化辗转相除法
// ---------------------------
// int a,b,m=0;
// 假定现在a大，如果a小用？选出大的那个
// while(m=a%b)
// {  a=b;
//    b=m;
// } 
// printf("%d",m);//ok
// 
// ----------------------------
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


//简单方法
//最大公约数肯定比最小的数还小，那么我们可以从最小的数倒叙去试整除
//最小公倍数就从大的数升序查找看有没有可以整除这两个数的
//也有个快速算法  最小公倍数就是a*b/最大公约数

/*int main()
{
	int a, b,d = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		d = a;
		a = b;
		b = d;
	}          //改进  int min=(a>b?b:a);
	int i = 0;
	i = a;
	for (i =a ; i >=1; i--)

	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	


	return 0;
}*/