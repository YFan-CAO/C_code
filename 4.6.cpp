#include<iostream>
#include<cstdio>
using namespace std;
const int N = 1e5 + 10;
struct queue {
	int front;
	int rear;
	int elem[N];
	void Inqueue(int data) {
		elem[rear++] = data;
	}
	int pop() {
		return elem[front++];
	}
	bool empty() {
		return front == rear;
	}
	queue() {
		front = rear = 0;
	}
};
struct stack {
	int top;
	int elem[N];
	void push(int data) {
		elem[++top] = data;
		return;
	}
	int pop() {
		return elem[top--];
	}
	bool empty() {
		return top == 0;
	}
	stack() {
		top = 0;
	}
};
int main() {
	queue q;
	stack s;
	int n;
	cin >> n;
	for (int i = 1, tmp; i <= n; i++) {
		cin >> tmp;
		q.Inqueue(tmp);
	}
	while (!q.empty()) {
		s.push(q.pop());
	}
	while (!s.empty()) {
		q.Inqueue(s.pop());
	}
	for (int i = 1; i <= n; i++) {
		cout << q.pop() << " ";
	}
}