////��������Ϸ
////1. �����������һ�����֣�1~100��
////2. ��Ҳ�����
////   ��Ҳ�С�ˣ��͸�֪��С��
////   ��Ҳ´��ˣ��͸�֪�´���
////   ֱ���¶�Ϊֹ
////3. ��Ϸ����һֱ��
////
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//
////RAND_MAX
////rand �������ص�������ķ�Χ�ǣ�0~32767��
////��������Ϸ��ʵ��
//
////time_t
//
////
////ʱ���
////C�����ṩ��һ������time������һ��ʱ���
////
//void menu()
//{
//	printf("*******************\n");
//	printf("****** 1.play *****\n");
//	printf("****** 0.exit *****\n");
//	printf("*******************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//1. ����һ�������
//	int ret = rand()%100+1; //%100���ɵ�������0~99 
//	//printf("%d\n", ret);
//	//2. ������
//	
//	while (1)
//	{
//		printf("������:>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���������
//	//srand �������ֵ��һ��rand����һ�������  ����һ��Ҫ�� 
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
