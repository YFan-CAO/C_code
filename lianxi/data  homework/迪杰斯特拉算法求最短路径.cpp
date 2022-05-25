#include <bits/stdc++.h>
const int INF = 9999999;
using namespace std;
int arc[505][505];
int n;
int start;
int dis[505];
int s[505] = { 0 };
void create()
{
    cin >> start;
    int data;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> data;
            if (data)
                arc[i][j] = data;
            else
                arc[i][j] = INF;
        }
    }
}
int findmin()
{
    int min = 2000;
    int u = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 0 && min > dis[i])
        {
            min = dis[i];
            u = i;
        }
    }
    return u;
}
void show()
{
    for (int i = 0; i < n; i++)
    {
        if (dis[i])
        {
            if (dis[i] < INF)
                cout << dis[i] << " ";
            else
                cout << -1 << " ";
        }
    }
}
void dijkstra()
{
    int min;
    for (int i = 0; i < n; i++)
    {
        dis[i] = INF;
        s[i] = 0;
    }
    dis[start] = 0;
    for (int i = 0; i < n; i++)
    {
        int min = findmin();
        if (min == -1)
            return;
        s[min] = 1;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 0 && (arc[min][j] != INF) && dis[j] > dis[min] + arc[min][j])
            {
                dis[j] = dis[min] + arc[min][j];
            }
        }
    }
}
int main()
{
    cin >> n;
    create();
    dijkstra();
    show();
}