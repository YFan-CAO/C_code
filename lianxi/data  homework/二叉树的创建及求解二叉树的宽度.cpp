#include<bits/stdc++.h>
using namespace std;
struct Bstnode {
	char data;
	Bstnode* left;
	Bstnode* right;
	int cj;
};
//½¨Ê÷
int cnt[100];
Bstnode* CreateBiTree(char* a, char* b, int L, int pos) {
	if (L <= 0) return NULL;
	Bstnode* rt = new Bstnode;
	rt->data = *b;
	rt->cj = pos;
	cnt[pos]++;
	char* c;
	for (c = a; c != NULL; c++) if (*c == *b) break;
	int k = c - a;
	rt->left = CreateBiTree(a, b + 1, k, pos + 1);
	rt->right = CreateBiTree(c + 1, b + 1 + k, L - k - 1, pos + 1);
	return rt;
}
//
void LevelOrder(Bstnode* root) {
	if (root == NULL) return;
	queue<Bstnode*> Q;
	Q.push(root);
	while (!Q.empty()) {
		Bstnode* current = Q.front();
		cnt[current->cj] ++;
		if (current->left != NULL) Q.push(current->left);
		if (current->right != NULL) Q.push(current->right);
		Q.pop();
	}
}
int main() {
	Bstnode* root;
	char a[100], b[100];
	int ans = 0;
	scanf("%s", a);
	scanf("%s", b);
	root = CreateBiTree(b, a, strlen(a), 1);
	for (int i = 0; i < 99; i++)
	{
		ans = max(ans, cnt[i]);
	}
	cout << ans << " ";
	int ans1 = 0;
	queue<Bstnode*> Q;
	Q.push(root);
	memset(cnt, 0, sizeof cnt);
	while (!Q.empty()) {
		Bstnode* crrt = Q.front();
		cnt[crrt->cj] ++;
		ans1 = max(cnt[crrt->cj], ans1);
		if (crrt->left != NULL) Q.push(crrt->left);
		if (crrt->right != NULL) Q.push(crrt->right);
		Q.pop();
	}
	cout << ans1;
}