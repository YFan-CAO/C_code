#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define ull unsigned long long
#define x first
#define y second
#define mp make_pair
#define INF 0x3f3f3f3
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

struct node
{
    int x1, y1, x2, y2, id;
};
int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
#endif
    cin >> n >> m;
    vector<node> v;
    v.push_back({ 0, 0, 0, 0, 0 });
    for (int i = 1, x1, y1, x2, y2; i <= n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        v.push_back({ x1, y1, x2, y2, i });
    }
    for (int i = 1; i <= m; i++) {
        int x, y, ans = 0;
        bool fg = 1;
        cin >> x >> y;
        for (int j = n; j >= 1; j--) {
            if (x >= v[j].x1 && x <= v[j].x2 && y >= v[j].y1 && y <= v[j].y2) {
                cout << v[j].id << endl;
                node tmp = v[j];
                v.erase(v.begin() + j);
                v.push_back(tmp);
                fg = 0;
                break;
            }
        }
        if (fg) cout << "IGNORED\n";
    }
}