#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node, * LinkList;

void InitList(LinkList* L)
{
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
}


void CreateFromTail(LinkList L)
{
    Node* r, * s;
    int flag = 1;
    int c;
    r = L;
    while (flag)
    {
        scanf("%f", &c);
        if (c != 0)
        {
            s = (Node*)malloc(sizeof(Node));//开辟一个s的Node
            s->data = c;//s的数据设为c
            r->next = s;//s的next设为s
            r = s;//将s赋值给r
        }
        else
        {
            flag = 0;
            r->next = NULL;
        }
    }
}
void ListAll(LinkList L)
{
    Node* p = L->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;

    }
}

int GetLen(LinkList L)
{
    Node* p;
    int len = 0;
    p = L->next;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;

}
void Ins(LinkList L, int num)
{
    Node* p;
    p = (LinkList)malloc(sizeof(Node));//开辟p
    p->data = num;
    p->next = L->next;
    L->next = p;
}
int Get(LinkList L, int n)
{
    Node* p;
    p = L->next;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        p = p->next;
    }
    return p->data;
}
int main()
{
    LinkList LA;
    InitList(&LA);
    char ch;
    int num = 0;
    int n;
    scanf("%d", &n);
    do
    {
        scanf("%d", &num);
        Ins(LA, num);
    } while ((ch = getchar()) != '\n');
    printf("%d", Get(LA, n));


    return 0;
}