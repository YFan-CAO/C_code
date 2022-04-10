//#include <stdlib.h>
//#include <stdio.h>
//#define Type int
//typedef struct Node
//{
//	Type data;//第几个进入
//	Type time;//所需时间
//}LinkQueueNode;
//typedef struct
//{
//	int max;
//	int len;
//	LinkQueueNode arr[100];
//}LinkQueue;
//void InitQueue(LinkQueue* Q, int max)
//{
//	Q->max = max;
//	Q->len = 0;
//}
//int EnterQueue(LinkQueue* Q, Type x, Type time)
//{
//	if (Q->len < Q->max) {
//		LinkQueueNode p;
//		p.data = x;
//		p.time = time;
//		Q->arr[Q->len] = p;
//		Q->len++;
//		return 1;
//	}
//	else {
//		printf("ERROR");
//		return 0;
//	}
//}
//int DeleteQueue(LinkQueue* Q)
//{
//	int x; int j;
//	LinkQueueNode temp;
//	for (x = 0; x < Q->len; x++)
//	{
//		for (j = 0; j < Q->len - x; j++)//排序最小的值
//		{
//			if (Q->arr[x].data + Q->arr[x].time < Q->arr[j].data + Q ->arr[j].time)
//			{
//				int tdata = Q->arr[x].data;
//				Q->arr[x].data = Q->arr[j].data;
//				Q->arr[j].data = tdata;
//				int ttime = Q->arr[x].time;
//				Q->arr[x].time = Q->arr[j].time;
//				Q->arr[j].time = ttime;
//			}
//		}
//	}
//	int i;
//	int a;
//	a = Q->arr[0].data + Q->arr[0].time;//计算最后的时间
//	for (i = 0; i < Q->len; i++) //出队列
//	{
//		Q->arr[i] = Q->arr[i + 1];
//	}
//	Q->len--;
//	return a;
//}
//int main()
//{
//	LinkQueue Q;
//	int m;
//	int total;
//	int i;
//
//	int wait = 0;
//	while (scanf("%d%d", &m, &total) != EOF) {
//		InitQueue(&Q, m);
//		int n; int time;
//		int sum = 0;
//		int current;
//		for (i = 0; i < total; i++) {
//			scanf("%d", &n);
//			scanf("%d", &time);
//			if (Q.len < Q.max)//目前队列中的个数是否小于最大的容纳量
//			{
//				EnterQueue(&Q, n, time);
//			}
//			else {
//				current = DeleteQueue(&Q);//让最小的人退出
//				if (current > n) {
//					sum = sum + current - n;
//					EnterQueue(&Q, current, time);
//				}
//				else {
//					EnterQueue(&Q, n, time);//
//				}
//			}
//		}
//		printf("%.2lf\n", sum / (1.0 * total));
//	}
//	return 0;
//}
