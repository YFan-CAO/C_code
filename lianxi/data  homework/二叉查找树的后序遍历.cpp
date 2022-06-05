#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Islast(vector<int> a)
{
    vector<int> v1, v2;
    int i;
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i] < a[a.size() - 1])
        {
            v1.push_back(a[i]);
        }
        else
            break;
    }
    for (int j = i; j < a.size() - 1; j++)
    {
        if (a[j] > a[a.size() - 1])
        {
            v2.push_back(a[j]);
        }
        else
            return false;
    }
    bool l = true, r = true;
    if (!v1.empty())
        l = Islast(v1);
    if (!v2.empty())
        r = Islast(v2);
    return l && r;
}
int main()
{
    int data;
    vector<int> a;
    while (cin >> data)
    {
        if (data != 0)
        {
            a.push_back(data);
        }
        else
            break;
    }
    if (Islast(a))
        cout << "true";
    else
        cout << "false";
}