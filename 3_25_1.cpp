#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node* pre;
	node* nxt;
};
int len = 0;
node* head = NULL;
node* tail = NULL;
void create() {
	node* p;
	int x;
	while (cin >> x, x != 0) {
		len++;
		p = new node;
		p->data = x;
		if (head == NULL) {
			head = p;
			tail = p;
		}
		else {
			tail->nxt = p;
			p->pre = tail;
			tail = p;
		}
	}
	tail->nxt = head;
	head->pre = tail;

}
void print();
void Bubble_Sort() {
	node* cur, * next, * end;
	end = head;
	do {
		for (cur = head, next = cur->nxt; next != end; cur = cur->nxt, next = next->nxt) {
			if (cur->data > next->data) {
				cur->pre->nxt = next;
				if (cur == head) head = next, end = next;
				next->nxt->pre = cur;
				next->pre = cur->pre;
				cur->nxt = next->nxt;
				cur->pre = next;
				next->nxt = cur;
				node* tmp = cur;
				cur = next;
				next = tmp;
			}
			//			print();
		}
		end = cur;
	} while (head != end);
}
void print() {
	node* p = head;
	do {
		cout << p->data << " ";
		p = p->nxt;
	} while (p != head);
	cout << endl;
}
int main() {
	create();
	Bubble_Sort();
	print();
}

