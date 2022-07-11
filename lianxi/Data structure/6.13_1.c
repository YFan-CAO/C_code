//#define _CRT_SECURE_NO_WARNINGS 1
////ÏûÊ§µÄÊý×Ö
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//
//{
//	int nums[] = { 0,3,2 };//È±1
//	int* ptr=(int*)malloc(16);
//	int* p = 0;
//		
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//	 p = ptr;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = -1;
//	}
//	
//	for (int j = 0; j < 4; j++)
//	{
//		for (int n = 0; n < 3; n++)
//		{
//			if (j == nums[n])
//			{
//				*(p + j) = j;
//			}
//		}
//	}
//
//	for (int m = 0; m < 4; m++)
//	{
//		if (*(p + m) == -1)
//		{
//			printf("%d", m);
//			free(ptr);
//			p == NULL;
//			return 1;
//		}
//	}
//
//		return 0;
//}