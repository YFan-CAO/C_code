#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
////void print(int x)
//{
//	if ( x!= 0)
//	{
//		printf("%d", x % 10);
//
//		print(x/ 10);
//	}
//
//	
//}
//int len(char* str)
//{
//	
//	if (*str != '\0')
//	{
//		return 1+len(str+1);
//	}
//
//	else
//	{
//		return 0;
//	}
//}
//
//int my_strlen(char* str)
//
//{
//
//	if (*str != '\0')
//
//	{
//
//		return 1 + my_strlen(str + 1);
//
//	}
//
//	return 0;
//
//}
//
//
//
//void reverse_string(char* string)
//
//{
//
//	int len = my_strlen(string);
//
//	char temp = 0;
//
//	temp = *string;
//
//	*string = *(string + len - 1);
//
//	*(string + len - 1) = '\0';
//
//	if (my_strlen(string + 1) > 1)
//
//	{
//
//		reverse_string(string + 1);
//
//	}
//
//	*(string + len - 1) = temp;
//
//}

//int main()
//
//{
//
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//
//	int i = 0;
//
//	for (i = 0; i < my_strlen(arr); i++)
//
//	{
//
//		printf("%c", arr[i]);
//
//	}
//
//	return 0;
//
//}
//


//
//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	else
//		return x;
//}
//
//int main()
//{
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

////#include <stdio.h >
////
////int power(int n, int k)
////{
////	if (k > 1)
////	{
////		return power(n, k - 1) * n;
////	}
////	else
////		return n;
////}
////
////int main()
////{
////	int n = 0;
////	int k = 0;
////	scanf("%d", &n);
////	scanf("%d", &k);
////	int ret = power(n, k);
////	printf("%d ", ret);
////	return 0;
////}



//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);
//	//print(n);
//
//	//char ch[] = "abc";
//	//char str[20] = { '0' };
//	//scanf("%s", ch);
//	//int n=len(ch);
//	//str[20] = reverse_string(ch);
//
//	//printf("%s", str);
//	int arr[20] = { 0 };
//
//	DigitSum(n)
//	return 0;
//}
//#include<stdio.h>	
//void main()
//{
//	int n[10] = { 25,35,68,79,21,13,98,7,16,62 };
//	int i, j, temp;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 0; j <= 9 - i; j++)
//		{
//			if (n[j] > n[j + 1])
//			{
//				temp = n[j];
//				n[j] = n[j + 1];
//				n[j + 1] = temp;
//			}
//		}
//	}
//	printf("排序过后的数顺序:\n");
//	for (i = 0; i < 10; i++)
//		printf("%-4d", n[i]);
//	printf("\n");
//}

//void Init(int arr[],int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		arr[i]== 0;
//   }
//}
//void print(int arr[],int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//
//	int right = sz - 1;
//
//	while (left < right) {
//
//		int tmp = arr[left];
//
//		arr[left] = arr[right];
//
//		arr[right] = tmp;
//
//		left++;
//
//		right--;
//
//	}
//
//
//}
//void swap(int A[], int B[])
//{
//	int tmp1 = 0;
//	int tmp2 = 0;
//	int n = 0;
//
//	while (tmp1 < 3)
//	{
//		n=A[tmp1];
//		A[tmp1] = B[tmp2];
//		B[tmp2] = n;
//		tmp1++;
//		tmp2++;
//	}
//
//}

int main()
{


	//int arr[3] = {0};
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}

	//reverse(arr, sz);
	//print(arr, sz);

	//int A[3] = { 1,2,3 };
	//int B[3] = { 4,5,6 };

	//swap(A, B);

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d", A[i]);
	//}
	//printf("\n");
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d", B[i]);
	//}
	//
	char ch[] = "hello,world!";
		char ch2[] = "############";
		int sz = sizeof(ch) / sizeof(ch[0]);
	
		int mid = sz / 2;
		int n = 0;
		int i = 0;
		int j = sz-2;//字符串后面有个/0  但如果上面用strlen()就-1就可以
	
		while (i<=j)
		{
			ch2[i] = ch[i];
			ch2[j] = ch[j];
			printf("%s\n", ch2);
			Sleep(1000);//延时函数 延迟1秒  头文件windows
			system("cls");//删除函数 打印完这次删掉  下次一起打印出来
			i++;
			j--;
		}
		printf("%s\n", ch2);
	return 0;
}