//#include <stdlib.h>
//#include <stdio.h>
//#define Stack_Size 50
//#define StackElementType char
//typedef struct {
//	StackElementType elem[Stack_Size]; //elem�Ǵ��ջ��Ԫ�ص�һά����
//	int top; //top�������ջ��Ԫ�ص��±꣬topΪ-1��ʾ��ջ
//}SeqStack;
//void InitStack(SeqStack* S)
//{
//	S->top = -1;
//}
//int Push(SeqStack* S, StackElementType x)
//{
//	if (S->top == Stack_Size - 1)
//		return 0;//��
//	S->top++;
//	S->elem[S->top] = x;
//	return 1;
//}
//int Pop(SeqStack* S)
//{
//	StackElementType x;
//	if (S->top == -1)
//	{
//		return 0;//ջ��
//	}
//	else {
//		x = S->elem[S->top];
//		S->top--;
//		return x;
//	}
//}
//void ListAll(SeqStack S) {
//	int i;
//	printf("ListALl");
//	for (i = 0; i <= S.top; i++)
//	{
//		printf("%c", S.elem[i]);
//	}
//}
//int main()
//{
//	SeqStack S;
//	InitStack(&S);
//	char a[100];
//	char pop;
//	int flag = 1;
//	scanf("%s", a);
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		if (a[i] == '{' || a[i] == '[' || a[i] == '(')
//		{
//			Push(&S, a[i]);
//		}
//		if (a[i] == '}' || a[i] == ']' || a[i] == ')')
//		{
//
//			pop = Pop(&S);
//			if (pop == '{' && a[i] == '}')
//			{
//			}
//			else if (pop == '[' && a[i] == ']') {
//			}
//			else if (pop == '(' && a[i] == ')') {
//			}
//			else
//			{
//				flag = 0;
//			}
//		}
//		i++;
//	}
//	printf("%d", flag);
//	return 0;
//}
