#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
struct node {
	char data;
	int left;
	int right;
	node() {
		data = '#';
	}
};
node tree[MAXN];
int n = 0, root = 1;
void Build() {
	char tmp;
	while (cin >> tmp, tmp != '#') {
		tree[++n].data = tmp;
		tree[n].left = n * 2;
		tree[n].right = n * 2 + 1;
	}
}
void per(int p) {
	if (tree[p].data == '#') return;
	cout << tree[p].data;
	per(p * 2);
	per(p * 2 + 1);
}

int main() {
	Build();
	per(root);
}