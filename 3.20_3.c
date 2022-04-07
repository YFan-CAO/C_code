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

int isExist(LinkList L, int num) {
    Node* p;
    p = L->next;
    int flag = 0;
    while (p != NULL)
    {
        if (p->data == num)
        {
            flag = 1;
            break;
        }
        p = p->next;
    }
    return flag;
}

void CreateFromTail(LinkList L)
{
    Node* r, * s, * Li;
    Li = L;
    int flag = 1;
    int c;
    r = L;
    while (flag)
    {
        scanf("%d", &c);
        if (c != 0)
        {
            if (!isExist(Li, c))
            {
                s = (Node*)malloc(sizeof(Node));//开辟一个s的Node
                s->data = c;//s的数据设为c
                r->next = s;//s的next设为s
                r = s;//将s赋值给r
            }

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
void copy(LinkList LA, LinkList LC)
{
    Node* pA;
    Node* pC;
    Node* s;
    pA = LA->next;
    pC = LC;

    while (pA != NULL)
    {

        s = (Node*)malloc(sizeof(Node));//开辟一个s的Node
        s->data = pA->data;
        pC->next = s;//s的next设为s
        pC = s;
        pA = pA->next;
    }
    pC->next = NULL;
}
void Ins(LinkList L, int num)
{
    Node* p;
    p = (LinkList)malloc(sizeof(Node));//开辟p
    p->data = num;
    p->next = L->next;
    L->next = p;
}
void combine(LinkList LB, LinkList LC)
{
    Node* pB;
    Node* pC;
    pB = LB->next;
    pC = LC->next;
    int flag = 0;

    while (pB != NULL)
    {
        while (pC != NULL)
        {
            if (pB->data == pC->data)
            {
                flag = 1;
            }
            pC = pC->next;
        }
        if (flag != 1)//没有
            Ins(LC, pB->data);
        pB = pB->next;
        pC = LC->next;
        flag = 0;
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

void BubbleSort(LinkList L)//冒泡排序
{
    Node* p1;
    Node* p2;
    p1 = L->next;
    p2 = p1->next;
    int len = GetLen(L);
    int i;
    int j;
    int temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (p1->data > p2->data)
            {
                temp = p1->data;//实现交换
                p1->data = p2->data;
                p2->data = temp;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
        p2 = p1->next;
    }
}
int main()
{
    LinkList LA;
    LinkList LB;
    LinkList LC;
    InitList(&LA);
    InitList(&LB);
    InitList(&LC);
    CreateFromTail(LA);
    CreateFromTail(LB);
    copy(LA, LC);
    combine(LB, LC);
    BubbleSort(LC);
    ListAll(LC);

    return 0;
}