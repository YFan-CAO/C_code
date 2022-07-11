//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	//int n = 0;
//	////int i = 0;
//
//	//for (n =0 ; n < 100; n++)
//	//{
//
//	//	if (n % 2)
//	//	{
//	//		printf("%d ", n);
//	//	}
//
//	//}  
//
//	//求阶乘相关
//	/*int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		int n = i;
//		int ret = 1;
//		int m = n;
//
//		for (n = 1; n <= m; n++)
//		{
//
//			ret = ret * n;
//		}
//
//		sum += ret;
//	}
//
//	printf("%d", sum);*/
//
//	//二分查找(有序数组)
//
//	//int n = 0;
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int tmp = 0;
//	//scanf("%d", &tmp);
//
//
//	//int left = 0;
//	//int right = sz-1;
//	//int mid = 0;
//	//   while (left <= right)
//	// {
//	//	
//	//	//mid = (left + right) / 2;
//	//	   mid = left + (right - left) / 2;
//	//	if (arr[mid] == tmp)
//	//	{
//	//		printf("%d", mid);
//	//		break;
//	//	}
//	//	else if (arr[mid] < tmp)
//	//	{
//	//		left = mid+1;//别忘了加一
//	//	}
//	//	else {
//	//		right = mid-1;//减一
//	//	}
//	//} 
//	//   if (left > right)
//	//   {
//	//	   printf("none");
//	//   }
//
//	
//
//
//
//
//	//无序
//	/*		int n = 0;
//			int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//			int tmp = 0;
//
//			while((scanf("%d", &tmp))!=EOF)
//			{
//				for (n = 0; n < 10; n++)
//				{
//					if (arr[n] == tmp)
//						printf("%d", n);
//				}
//
//			}*/
//
//
//
//	   //字符向中间汇聚
//
//	char ch[] = "hello,world!";
//	char ch2[] = "############";
//	int sz = sizeof(ch) / sizeof(ch[0]);
//
//	int mid = sz / 2;
//	int n = 0;
//	int i = 0;
//	int j = sz-2;//字符串后面有个/0  但如果上面用strlen()就-1就可以
//
//	while (i<=j)
//	{
//		ch2[i] = ch[i];
//		ch2[j] = ch[j];
//		printf("%s\n", ch2);
//		Sleep(1000);//延时函数 延迟1秒  头文件windows
//		system("cls");//删除函数 打印完这次删掉  下次一起打印出来
//		i++;
//		j--;
//	}
//	printf("%s\n", ch2);
//
//
//	
//	return 0;
//}

