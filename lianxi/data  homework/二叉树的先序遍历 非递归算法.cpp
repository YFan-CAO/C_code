#include <iostream>
#include <stack>
using namespace std;
typedef struct node
{
    char data;
    node* l, * r;
} *bit;
char cpss[101];
node* creat(int* n)
{
    if (cpss[*n] != '.')
    {
        node* root = new node;
        root->data = cpss[*n];
        (*n)++;
        root->l = creat(n);
        (*n)++;
        root->r = creat(n);
        return root;
    }
    else
        return NULL;
}
void pri(bit t)
{
    stack<bit> s;
    while (t || !s.empty())
    {
        if (t != NULL)
        {
            cout << t->data;
            s.push(t);
            t = t->l;
        }
        else
        {
            t = s.top();
            s.pop();
            t = t->r;
        }
    }
}
int main()
{
    cin >> cpss;
    int a = 0;
    bit root = creat(&a);
    pri(root);
}