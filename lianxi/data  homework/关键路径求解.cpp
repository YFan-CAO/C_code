#include <bits/stdc++.h>
using namespace std;
struct edg
{
    int adj;
    int weight;
    edg* next;
};
typedef struct vnode
{
    int data;
    edg* first;
} adjlist[100];
struct grapg
{
    adjlist vertices;
    int vexnum, arcnum;
};
int enode[500];     
int store[500];       
int vl[500], ve[500]; 
void create(grapg** g)
{
    *g = new grapg;
    cin >> (*g)->vexnum >> (*g)->arcnum;
    for (int i = 0; i < (*g)->vexnum; i++)
        (*g)->vertices[i].first = NULL;
    for (int q = 0; q < (*g)->arcnum; q++)
    {
        int i, j, weight;
        cin >> i >> j >> weight;
        edg* p = new edg;
        p->adj = j;
        p->weight = weight;
        p->next = (*g)->vertices[i].first;
        (*g)->vertices[i].first = p;
    }
}
void get_innode(grapg* g) //获取入度序列
{
    fill(enode, enode + g->vexnum, 0);
    for (int i = 0; i < g->vexnum; i++)
    {
        edg* p = g->vertices[i].first;
        while (p)
        {
            enode[p->adj]++;
            p = p->next;
        }
    }
}
int counts;
void tpuposi(grapg* g)
{
    counts = 0;
    fill(ve, ve + g->vexnum, 0);
    get_innode(g);
    stack<int> s;
    for (int i = 0; i < g->vexnum; i++)
        if (!enode[i])
            s.push(i);
    while (!s.empty())
    {
        int invex = s.top();
        store[counts++] = s.top();
        s.pop();
        for (edg* p = g->vertices[invex].first; p; p = p->next)
        {
            int outvex = p->adj;
            if (!(--enode[outvex]))
                s.push(outvex);
            if (ve[invex] + p->weight > ve[outvex])
                ve[outvex] = ve[invex] + p->weight;
        }
    }
}
void get_path(grapg* g)
{
    int top = counts - 1;
    int invex, outvex;
    invex = store[top--];
    for (int i = 0; i < g->vexnum; i++)
        vl[i] = ve[invex];

    while (top != -1)
    {
        invex = store[top--];
        edg* p = g->vertices[invex].first;
        while (p)
        {
            outvex = p->adj;
            if (vl[invex] > vl[outvex] - p->weight)
                vl[invex] = vl[outvex] - p->weight;
            p = p->next;
        }
    }
    for (invex = 0; invex < g->vexnum; invex++)
    {
        edg* p = g->vertices[invex].first;
        while (p)
        {
            outvex = p->adj;
            int ee = ve[invex];
            int el = vl[outvex] - p->weight;
            if (ee == el)
                cout << invex << " " << outvex << endl;
            p = p->next;
        }
    }
}
int main()
{
    grapg* g;
    create(&g);
    tpuposi(g);
    get_path(g);
}