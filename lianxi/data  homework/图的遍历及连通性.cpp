#include<iostream>
using namespace std;
const int N = 1e3 + 10;

template<typename T>
struct que {
	int head;
	int tail;
	T data[N];
	void push(T x) {
		data[tail++] = x;
	}
	T front() {
		return data[head];
	}
	void pop() {
		head++;
	}
	bool empty() {
		return tail == head;
	}
	que() {
		head = 0;
		tail = 0;
	}
};
int n;
bool mp[N][N];
int cnt = 0;
int color[N];
void bfs(int pos) {
	cnt++;
	que<int> q;
	q.push(pos);
	color[pos] = cnt;
	while (!q.empty()) {
		int tmp = q.front();
		//		cout << tmp << endl;
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (mp[tmp][i] && !color[i]) {
				color[i] = cnt;
				q.push(i);
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mp[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (!color[i]) {
			bfs(i);
		}
	}
	cout << cnt << endl;
}

