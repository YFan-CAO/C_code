#include<bits/stdc++.h>
using namespace std;
char s[1001];
struct stk {
	int size = 0;
	char data[1001];
	void pop() {
		size--;
	}
	char top() {
		return data[size];
	}
	void push(char x) {
		size++;
		data[size] = x;
	}
};
int main() {
	cin >> s;
	stk a;
	int len = strlen(s), i;
	for (i = 0; i < len; i++) {
		if (s[i] == '&') break;
		a.push(s[i]);
	}
	i++;
	int ans = a.size;
	for (; i < len - 1; i++) {
		if (s[i] == a.top()) a.pop();
		else {
			cout << "no";
			return 0;
		}
	}
	cout << ans << endl;
}
