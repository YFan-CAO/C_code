#include <iostream>
using namespace std;
int a[1000];
struct node
{
    int data;
    node* l;
    node* r;
};
void insert(node*& t, int data)
{
    if (t == NULL)
    {
        t = new node;
        t->l = NULL;
        t->r = NULL;
        t->data = data;
    }
    else if (data > t->data)
    {
        insert(t->r, data);
    }
    else
        insert(t->l, data);
}
void build(node*& t, int len)
{
    t = NULL;
    for (int i = 0; i < len; i++)
    {
        insert(t, a[i]);
    }
}
void pre(node* t)
{
    if (!t)
    {
        cout << "# ";
        return;
    }
    cout << t->data << " ";
    pre(t->l);
    pre(t->r);
}
void md(node* t)
{
    if (!t)
    {
        return;
    }
    md(t->l);
    cout << t->data << " ";
    md(t->r);
}
void del(node*& t)
{
    node* p;
    if (t->l == NULL && t->r == NULL)
    {
        p = t;
        t = NULL;
        delete p;
    }
    else if (t->l == NULL)
    {
        p = t;
        t = t->r;
        delete p;
    }
    else if (t->r == NULL)
    {
        p = t;
        t = t->l;
        delete p;
    }
    else
    {
        node* parent = t;
        node* pre = t->l;
        while (pre->r)
        {
            parent = pre;
            pre = pre->r;
        }
        t->data = pre->data;
        if (t != parent)
        {
            parent->r = pre->l;
        }
        else
        {
            parent->l = pre->l;
        }
        delete pre;
    }
}
void der(node*& t, int data)
{
    if (data == t->data)
        del(t);
    else if (data < t->data)
        der(t->l, data);
    else
        der(t->r, data);
}
int floor = 1;
void found(node* t, int data)
{
    if (data == t->data)
    {
        cout << endl
            << floor;
        return;
    }
    else if (data < t->data)
    {
        floor++;
        found(t->l, data);
    }
    else
    {
        floor++;
        found(t->r, data);
    }
}
int main()
{
    int i = 0;
    while (1)
    {
        int data;
        cin >> data;
        if (data != 0)
        {
            a[i++] = data;
        }
        else
        {
            break;
        }
    }
    int len = i;
    node* t = NULL;
    build(t, len);
    int x, y;
    cin >> x >> y;
    pre(t);
    der(t, x);
    cout << endl;
    md(t);
    found(t, y);
}