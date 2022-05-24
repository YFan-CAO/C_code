#include <bits/stdc++.h>
using namespace std;
struct edg
{
    int adj;
    edg* next;
};
typedef struct vnode
{
    int data;
    edg* first;
} adjlist[100];
struct graph
{
    adjlist ver;
    int vexnum, arcnum;
};
int innode[500];
int store[500];
void create(graph** g)
{
    *g = new graph;
    cin >> (*g)->vexnum;
    for (int i = 0; i < (*g)->vexnum; i++)
    {
        cin >> (*g)->ver[i].data;
        (*g)->ver[i].first = NULL;
    }
    while (1)
    {
        int i, j;
        cin >> i >> j;
        if (j == -1 && i == -1)
            break;
        else
        {
            edg* p = new edg;
            p->adj = j;
            p->next = (*g)->ver[i].first;
            (*g)->ver[i].first = p;
        }
    }
}
void getid(graph* g)
{
    fill(innode, innode + g->vexnum, 0);
    for (int i = 0; i < g->vexnum; i++)
    {
        edg* p = g->ver[i].first;
        while (p)
        {
            innode[p->adj]++;
            p = p->next;
        }
    }
}
void tuppu(graph* g)
{
    getid(g);
    stack<int> s;
    for (int i = 0; i < g->vexnum; i++)
    {
        if (!innode[i])
            s.push(i);
    }
    int count = 0;
    while (!s.empty())
    {
        int temp = s.top();
        store[count++] = s.top();
        s.pop();
        for (edg* p = g->ver[temp].first; p; p = p->next)
        {
            int k = p->adj;
            if (!(--innode[k]))
                s.push(k);
        }
    }
    if (count < g->vexnum)
        cout << "ERROR";
    else
    {
        for (int i = 0; i < count; i++)
            cout << store[i] << " ";
    }
}
int main()
{
    graph* g;
    create(&g);
    tuppu(g);
}