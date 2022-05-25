#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct edgetype
{
    int from, to;
    int weight;
} edge[2000];
int vexnum, edgenum, aaaaa;
int parent[2000];
void init()
{
    edgenum = 0;
    aaaaa = 0;
}

// A 65
void creat()
{
    cin >> vexnum;
    for (int i = 0; i < vexnum - 1; i++)
    {
        char data;
        int num;
        cin >> data >> num;
        for (int j = 0; j < num; j++)
        {
            char data2;
            int dis;
            cin >> data2 >> dis;
            edge[edgenum].from = data - 'A';
            edge[edgenum].to = data2 - 'A';
            edge[edgenum++].weight = dis;
        }
    }
}
int find(int x)
{
    int cur = x;
    while (parent[cur] != -1)
    {
        // cout << cur << parent[cur];
        cur = parent[cur];
    }
    return cur;
}
int cmp(edgetype a, edgetype b)
{
    return a.weight < b.weight;
}
void kruskal()
{
    for (int i = 0; i < vexnum; i++)
        parent[i] = -1;

    sort(edge, edge + edgenum, cmp);
    int count = 0;
    for (int i = 0; i < edgenum; i++)
    {

        int a = find(edge[i].from), b = find(edge[i].to);
        if (a != b)
        {
            parent[a] = b;
            count++;
            aaaaa += edge[i].weight;
            if (count == vexnum - 1)
                break;
        }
    }
}
int main()
{
    init();
    creat();
    kruskal();
    cout << aaaaa;
}