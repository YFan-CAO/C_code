#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define x first
#define y second
#define mp make_pair
#define INF 0x3f3f3f3
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
const int N = 5e3 + 10;

int n, m, cnt, vis[N], tot, head[N], Next[N], ver[N];
void add(int x, int y) {
    ver[++tot] = y;
    Next[tot] = head[x], head[x] = tot;
}
void dfs(int pos) {
    // cout << pos << endl;
    for (int j = head[pos]; j; j = Next[j]) {
        if (!vis[ver[j]]) {
            vis[ver[j]] = 1;
            dfs(ver[j]);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
#endif
    cin >> n >> m;
    for (int i = 1, x, y; i <= m; i++) {
        cin >> x >> y;
        add(x, y);
        add(y, x);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vis[i] = 1;
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
}