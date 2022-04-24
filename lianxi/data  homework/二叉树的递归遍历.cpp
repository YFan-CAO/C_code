#include <iostream>
#include <cstring>
using namespace std;
struct node
{
    char data;
    node* l, * r;
};
int size;
char cpss[101];
node* creat(int* n)
{
    if (*n < size && cpss[*n] != '.')
    {
        node* rt = new node;
        rt->data = cpss[*n];
        (*n)++;
        rt->l = creat(n);
        (*n)++;
        rt->r = creat(n);
        return rt;
    }
    else
        return NULL;
}
void qx(node* root)
{
    if (root)
    {
        cout << root->data;
        qx(root->l);
        qx(root->r);
    }
}
void z(node* root)
{
    if (root)
    {
        z(root->l);
        cout << root->data;
        z(root->r);
    }
}
void h(node* root)
{
    if (root)
    {
        h(root->l);
        h(root->r);
        cout << root->data;
    }
}
int main()
{
    cin >> cpss;
    size = strlen(cpss);
    int a = 0;
    node* root = creat(&a);
    qx(root);
    cout << endl;
    z(root);
    cout << endl;
    h(root);
}