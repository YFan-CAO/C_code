#include<bits/stdc++.h>
using namespace std;
vector<int> a[1000];
int main() {
	string s;
	cin >> s;
	int len = s.length();
	int p = 0;
	int n = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			p++;
			n++;
			continue;
		}
		if (s[i] == ',') {
			continue;
		}
		if (s[i] == ')') {
			p--;
			continue;
		}
		int res = 0;
		while (s[i] >= '0' && s[i] <= '9') {
			res *= 10;
			res += s[i] - '0';

			i++;
		}
		i--;
		a[p].push_back(res);
	}
	for (int i = n; i >= 0; i--) {
		int len = a[i].size() - 1;
		for (int j = 0; j <= len; j++) {
			cout << a[i][j] << " \n"[j == len];
		}
	}
}