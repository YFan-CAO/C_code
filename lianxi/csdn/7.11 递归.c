#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//////void print(int x)
////{
////	if ( x!= 0)
////	{
////		printf("%d", x % 10);
////
////		print(x/ 10);
////	}
////
////	
////}
////int len(char* str)
////{
////	
////	if (*str != '\0')
////	{
////		return 1+len(str+1);
////	}
////
////	else
////	{
////		return 0;
////	}
////}
////
////int my_strlen(char* str)
////
////{
////
////	if (*str != '\0')
////
////	{
////
////		return 1 + my_strlen(str + 1);
////
////	}
////
////	return 0;
////
////}
////
////
////
////void reverse_string(char* string)
////
////{
////
////	int len = my_strlen(string);
////
////	char temp = 0;
////
////	temp = *string;
////
////	*string = *(string + len - 1);
////
////	*(string + len - 1) = '\0';
////
////	if (my_strlen(string + 1) > 1)
////
////	{
////
////		reverse_string(string + 1);
////
////	}
////
////	*(string + len - 1) = temp;
////
////}
//
////int main()
////
////{
////
////	char arr[] = "abcdef";
////
////	reverse_string(arr);
////
////	int i = 0;
////
////	for (i = 0; i < my_strlen(arr); i++)
////
////	{
////
////		printf("%c", arr[i]);
////
////	}
////
////	return 0;
////
////}
////
//
//
////
////int DigitSum(int x)
////{
////	if (x > 9)
////	{
////		return x % 10 + DigitSum(x / 10);
////	}
////	else
////		return x;
////}
////
////int main()
////{
////	int num = 1729;
////	int ret = DigitSum(num);
////	printf("%d\n", ret);
////	return 0;
////}
//
//////#include <stdio.h >
//////
//////int power(int n, int k)
//////{
//////	if (k > 1)
//////	{
//////		return power(n, k - 1) * n;
//////	}
//////	else
//////		return n;
//////}
//////
//////int main()
//////{
//////	int n = 0;
//////	int k = 0;
//////	scanf("%d", &n);
//////	scanf("%d", &k);
//////	int ret = power(n, k);
//////	printf("%d ", ret);
//////	return 0;
//////}
//
//
//
////int main()
////{
////	//int n = 0;
////	//scanf("%d", &n);
////	//print(n);
////
////	//char ch[] = "abc";
////	//char str[20] = { '0' };
////	//scanf("%s", ch);
////	//int n=len(ch);
////	//str[20] = reverse_string(ch);
////
////	//printf("%s", str);
////	int arr[20] = { 0 };
////
////	DigitSum(n)
////	return 0;
////}
////#include<stdio.h>	
////void main()
////{
////	int n[10] = { 25,35,68,79,21,13,98,7,16,62 };
////	int i, j, temp;
////	for (i = 1; i <= 9; i++)
////	{
////		for (j = 0; j <= 9 - i; j++)
////		{
////			if (n[j] > n[j + 1])
////			{
////				temp = n[j];
////				n[j] = n[j + 1];
////				n[j + 1] = temp;
////			}
////		}
////	}
////	printf("排序过后的数顺序:\n");
////	for (i = 0; i < 10; i++)
////		printf("%-4d", n[i]);
////	printf("\n");
////}
//
////void Init(int arr[],int k)
////{
////	int i = 0;
////	for (i = 0; i < k; i++)
////	{
////		arr[i]== 0;
////   }
////}
////void print(int arr[],int k)
////{
////	int i = 0;
////	for (i = 0; i < k; i++)
////	{
////		printf("%d", arr[i]);
////	}
////}
////void reverse(int arr[],int sz)
////{
////	int left = 0;
////
////	int right = sz - 1;
////
////	while (left < right) {
////
////		int tmp = arr[left];
////
////		arr[left] = arr[right];
////
////		arr[right] = tmp;
////
////		left++;
////
////		right--;
////
////	}
////
////
////}
////void swap(int A[], int B[])
////{
////	int tmp1 = 0;
////	int tmp2 = 0;
////	int n = 0;
////
////	while (tmp1 < 3)
////	{
////		n=A[tmp1];
////		A[tmp1] = B[tmp2];
////		B[tmp2] = n;
////		tmp1++;
////		tmp2++;
////	}
////
////}
//
//int main()
//{
//
//
//	//int arr[3] = {0};
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//	//reverse(arr, sz);
//	//print(arr, sz);
//
//	//int A[3] = { 1,2,3 };
//	//int B[3] = { 4,5,6 };
//
//	//swap(A, B);
//
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d", A[i]);
//	//}
//	//printf("\n");
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d", B[i]);
//	//}
//	////
//	//char ch[] = "hello,world!";
//	//	char ch2[] = "############";
//	//	int sz = sizeof(ch) / sizeof(ch[0]);
//	//
//	//	int mid = sz / 2;
//	//	int n = 0;
//	//	int i = 0;
//	//	int j = sz-2;//字符串后面有个/0  但如果上面用strlen()就-1就可以
//	//
//	//	while (i<=j)
//	//	{
//	//		ch2[i] = ch[i];
//	//		ch2[j] = ch[j];
//	//		printf("%s\n", ch2);
//	//		Sleep(1000);//延时函数 延迟1秒  头文件windows
//	//		system("cls");//删除函数 打印完这次删掉  下次一起打印出来
//	//		i++;
//	//		j--;
//	//	}
//	//	printf("%s\n", ch2);
//
//	
//	
//	//int a, b, c;
//	//a = 5;
//	//b = a++;
//	//c = ++a;
//	//printf("%d %d %d", a, b, c);
//		
//
//	
//	return 0;
//}

//#include <stdio.h>
//
//
//
//int main()
//
//{
//
//	int m = 0;
//
//	scanf("%d", &m);
//
//
//
//
//
//	int i = 0;
//
//
//
//	for (i = 31; i >= 1; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	printf("\n");
//
//
//
//	for (i = 30; i >= 0; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	return 0;
//
//}
//#include <stdio.h>
//
//
//
//int find_1(int n)
//
//{
//
//    int count = 0;
//
//    for (int i = 0; i < 32; i++)
//
//    {
//
//        if (((n >> i) & 1) == 1)
//
//        {
//
//            count++;  // 统计 1 的个数
//
//        }
//
//    }
//
//    return count;
//
//}
//
//
//
//int main()
//
//{
//
//    int n = 0;
//
//    scanf("%d", &n);
//
//    int ret = find_1(n);
//
//    printf("%d\n", ret);
//
//
//
//    return 0;
//
//}#include <stdio.h>

//#include <stdio.h>
//int main()
//
//{
//
//	int a = 5;
//
//	int b = 3;
//
//	printf("a=%d b=%d\n", a, b);
//
//
//
//	a = a ^ b;
//
//	b = a ^ b;
//
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}
//
//#include <stdio.h>

//void print_my(int* arr,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//}
//int main()
//{
//
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_my(arr,sz);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void reback_my(char* str,int n)
//{
//	for (int i = n - 1; i >=0; i--)
//	{
//		printf("%c", *(str + i));
//	}
//
//}
//int main()
//{
//	char str[1000] = { 0 };
//	//scanf("%s", str);
//
//	gets(str);
//	int n = strlen(str);
//	reback_my(str,n);
//
//	
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main() {
//	int n;
//	int a[10] = { 0 };
//	int i;
//	int sum = 0;
//	int count = 0;
//	for (n = 0; n <= 100000; ++n) 
//	{ //遍历0-100000之间所有数字
//		for (i = n; i; i /= 10)
//		{
//			a[count] = i % 10;  //用数组a[count]将每一位存起来,用count记下数字的位数
//			++count;
//		}
//		for (i = 0; i < count; ++i)
//		{
//			sum += pow(a[i], count); //将数组中所存的数字的每一位进行对应的位数count次方并求和
//		}
//		if (n == sum)
//		{
//			printf("%d \n", n);
//		}
//		count = sum = 0; //强制将count与sum归0
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    int k = (n + 1) / 2;
//    for (i = 1; i <= k; i++) {
//        for (j = 1; j <= n - 2 * i + 1; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    for (i = n - k; i >= 1; i--) {
//        for (j = 1; j <= n - 2 * i + 1; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//#define P 1 //汽水的单价
//#define N 2 //换一瓶汽水所需的空瓶个数
//
//int EmptyBottle(int x)
//{
//	int ret = 0;
//	while (x > 1)
//	{
//		ret += x / N;		//x没有发生改变，用ret记录能够换来汽水的数量
//		x = x / N + x % N;	//x剩余空瓶的数量
//	}
//	return ret;
//}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("请输入金额：");
//	scanf("%d", &p);
//	n = p / P;
//	int bottle = n + EmptyBottle(n);//最终喝到的汽水个数
//	printf("可换得%d瓶\n", bottle);
//	return 0;
//}

//#include <malloc.h>
//#include <assert.h>
//
//int main()
//{
//	int arr[5] = {0,2,5,4,6};
//	int i = 0;
//	int flag = 1;
//	int count = 0;
//	int* new = (int*)malloc(20);
//	assert(new);
//	for (i = 0; i < 5; i++)
//	{
//		if ((*(arr + i) % 2) == 0)
//		{
//			*(new + count) = *(arr + i);
//			count++;
//			*(arr + i) = -1;
//		}		
//	}
//	int n = 0;
//	for (n = 0; n < 5; n++)
//	{
//		if (*(arr + n) != (-1))
//		{
//			*(new + count) = *(arr + n);
//			count++;
//		}
//	}
//	int m = 0;
//	for (m = 0; m < 5; m++)
//	{
//		printf("%d ", *(new + m));
//
//    }
//
//	free(new);
//
//	return 0;
//}