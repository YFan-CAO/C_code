#include <bits/stdc++.h>
using namespace std;
void getNext(int* nt, const string& s)
{
    int j = 0, i;
    nt[0] = 0;
    for (int i = 1; i < s.size(); i++)
    {
        while (j > 0 && s[i] != s[j])
        {
            j = s[j - 1];
        }
        if (s[i] == s[j])
            j++;
        nt[i] = j;
    }
}
int strStr(string s, string sub)
{
    int nt[sub.size()];
    int j = 0;
    getNext(nt, sub);
    for (int i = 0; i < s.size(); i++)
    {
        while (j > 0 && sub[j] != s[i])
        {
            j = nt[j - 1];
        }
        if (sub[j] == s[i])
            j++;
        if (j == sub.size())
            return i - j + 2;
    }
    return 0;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << strStr(a, b);
}