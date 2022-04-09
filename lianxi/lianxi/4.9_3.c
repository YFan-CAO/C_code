#include <stdlib.h>;
#include <stdio.h>
#define Stack_Size 50
#define StackElementType char
typedef struct {
	StackElementType elem[Stack_Size]; //elem�Ǵ��ջ��Ԫ�ص�һά����
	int top; //top�������ջ��Ԫ�ص��±꣬topΪ-1��ʾ��ջ
}SeqStack;
void InitStack(SeqStack* S)
{
	S->top = -1;
}
int Push(SeqStack* S, StackElementType x)
{
	if (S->top == Stack_Size - 1)
		return 0;//��
	S->top++;
	S->elem[S->top] = x;
	return 1;
}
int Pop(SeqStack* S)
{
	StackElementType x;
	if (S->top == -1)
	{
		return 0;//ջ��
	}
	else {
		x = S->elem[S->top];
		S->top--;
		return x;
	}
}
int main()
{
	SeqStack S;
	InitStack(&S);
	int num;
	scanf("%d", &num);
	int bit;
	scanf("%d", &bit);
	int digit = 0;
	int num2;
	if (bit >= 2 && bit <= 10)
	{
		num2 = num;
		int enter;
		while (num2 != 0) {
			enter = num2 % bit;
			num2 /= bit;
			Push(&S, enter);
			digit++;//λ��
		}
		int i;
		for (i = 0; i < digit; i++)
		{
			printf("%d", Pop(&S));
		}
	}
	else {
		num2 = num;
		int enter;
		while (num2 != 0) {
			enter = num2 % bit;
			num2 /= bit;
			if (enter < 10)
			{
				Push(&S, (char)enter);
			}
			else {
				switch (enter)
				{
				case 10: Push(&S, 'A');
					break;
				case 11: Push(&S, 'B');
					break;
				case 12: Push(&S, 'C');
					break;
				case 13: Push(&S, 'D');
					break;
				case 14: Push(&S, 'E');
					break;
				case 15: Push(&S, 'F');
					break;
				case 16: Push(&S, 'A');
					break;
				}
			}
			digit++;//λ��
		}
		int i;
		int w;
		for (i = 0; i < digit; i++)
		{
			w = Pop(&S);
			if (w < 10) {
				printf("%d", w);
			}
			else {
				printf("%c", w);
			}
		}
	}
}
