#include<bits/stdc++.h>
#include<cstring>
using namespace std;
struct Bstnode {
	char data;
	Bstnode* left;
	Bstnode* right;
};
//创建新节点
Bstnode* GetNewNode(int data) {
	Bstnode* nw = new Bstnode();
	(*nw).data = data;
	nw->left = nw->right = NULL;
	return nw;
}
//建树
Bstnode* CreateBiTree(char* a, char* b, int L) {
	if (L <= 0) return NULL;
	Bstnode* rt = new Bstnode;
	rt->data = *b;
	char* c;
	for (c = a; c != NULL; c++) if (*c == *b) break;
	int k = c - a;
	rt->right = CreateBiTree(c + 1, b + 1, L - k - 1);
	rt->left = CreateBiTree(a, b + L - k, k);
	return rt;
}
//层次遍历
void LevelOrder(Bstnode* root) {
	if (root == NULL) return;
	queue<Bstnode*> Q;
	Q.push(root);
	while (!Q.empty()) {
		Bstnode* current = Q.front();
		cout << current->data << " ";
		if (current->left != NULL) Q.push(current->left);
		if (current->right != NULL) Q.push(current->right);
		Q.pop();
	}
}
//前序遍历
void Preorder(Bstnode* root) {
	if (root == NULL) return;
	cout << root->data;
	Preorder(root->left);
	Preorder(root->right);
}
//中序遍历
void Inorder(Bstnode* root) {
	if (root == NULL) return;
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}
//后序遍历
void Postorder(Bstnode* root) {
	if (root == NULL) return;
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}
int main() {
	char a[100], b[100];
	Bstnode* root = new Bstnode;
	scanf("%s", a);
	scanf("%s", b);
	reverse(b, b + strlen(b));
	root = CreateBiTree(a, b, strlen(a));
	Preorder(root);
}