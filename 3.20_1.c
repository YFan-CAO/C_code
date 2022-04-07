#include <stdio.h>
#include <stdlib.h>

int max = 0;
int i = 0;
int y = 0;

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

void CreateFromTail(LinkList L) //尾插法建立单链表
{
    Node* r, * s;
    char ch;
    int c;
    r = L;

    do {
        scanf("%d", &c);
        s = (Node*)malloc(sizeof(Node));
        s->data = c;
        s->next = s;
        r->next = s;
        r = r->next;
        y++;
        if (c > max)
        {
            i = y;
            max = c;
        }
    } while ((ch = getchar()) != '\n');
    r->next = NULL;
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
void change(LinkList L)
{
    Node* p2;
    Node* p1;
    Node* p3;
    p1 = L->next;
    p2 = p1->next;
    p3 = L->next;
    int j;
    if (i == 1)
    {
        L->next = L->next->next;
    }
    else {
        for (j = 0; j < i - 2; j++)
        {
            p1 = p1->next;
            p2 = p1->next;
        }
        p1->next = p2->next;
    }


    while (p3->next != NULL)
    {
        p3 = p3->next;
    }
    Node* s;
    s = (Node*)malloc(sizeof(Node));
    s->next = NULL;
    s->data = max;
    p3->next = s;
}
int main()
{

    LinkList LA;
    InitList(&LA);
    CreateFromTail(LA);
    change(LA);
    ListAll(LA);
    return 0;
}