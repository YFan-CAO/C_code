#include <bits/stdc++.h>
using namespace std;
const int inf = 9999;
int arc[55][55];
int n;
int dist[55][55];
vector<int> path[55][55];
void creat()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arc[i][j];
            if (i == j)
                arc[i][j] = 0;
        }
}
void floyed()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            dist[i][j] = arc[i][j];
            if (dist[i][j] != inf && i != j)
            {
                path[i][j].push_back(i);
                path[i][j].push_back(j);
            }
            else if (i == j)
                path[i][j].push_back(i);
            else
                path[i][j].push_back(9999);
        }
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j].clear();
                    for (int q = 0; q < path[i][k].size() - 1; q++)
                    {
                        path[i][j].push_back(path[i][k][q]);
                    }
                    for (int q = 0; q < path[k][j].size(); q++)
                    {
                        path[i][j].push_back(path[k][j][q]);
                    }
                }
}
void show()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
                path[i][j].clear();
                path[i][j].push_back(i);
            }
            cout << "from " << i << " to " << j << ": "
                << "dist = " << dist[i][j] << " path:";
            for (int k = 0; k < path[i][j].size(); k++)
            {
                cout << path[i][j][k] << " ";
            }
            cout << endl;
        }
}
int main()
{
    creat();
    floyed();
    show();
}