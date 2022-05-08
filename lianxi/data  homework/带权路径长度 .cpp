#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define x first
#define y second
#define mp make_pair
#define INF 0x3f3f3f3f
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VPI;
const int N = 1e3 + 10;
struct node
{
	int w, parent, lc, rc;
}th[N];
int a[N], n, s1, s2;
void choose(int pos) {
	int max1 = INF, max2 = INF;
	for (int i = 1; i <= pos; i++) {
		if (th[i].w < max1 && th[i].parent == 0) {
			max2 = max1;
			s2 = s1;
			max1 = th[i].w;
			s1 = i;

		}
		else if (th[i].w < max2 && th[i].parent == 0) {
			max2 = th[i].w;
			s2 = i;
		}
	}
}
void creat() {
	for (int i = 1; i <= n; i++) th[i] = { a[i], 0, 0, 0 };
	int m = 2 * n - 1;
	for (int i = n + 1; i <= m; i++) th[i] = { 0, 0, 0, 0 };
	for (int i = n + 1; i <= m; i++) {
		choose(i - 1);
		th[i].w = th[s1].w + th[s2].w;
		th[s1].parent = i; th[s2].parent = i;
		th[i].lc = s2; th[i].rc = s1;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
#endif
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	creat();
	int asn = 0;
	for (int i = 1; i <= 2 * n - 2; i++) {
		// cout << ht[i].w << " " << ht[i].lc << " " << ht[i].rc << endl;
		asn += th[i].w;
	}
	cout << asn << endl;
}