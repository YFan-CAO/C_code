#include <iostream>
#include <cstring>
using namespace std;
void my(char* c, int n) //½«×Ö·û´®ÄæÐò
{
    int i, t, m = n;
    for (i = 0; i < (n / 2); i++)
    {
        t = *(c + i);
        *(c + i) = *(c + n - 1 - i);
        *(c + n - 1 - i) = t;
    }
}
int find(char* a, char* b, int n) //Æ¥Åä
{
    int i = 0, k = 0, j, m = n;
    for (i; i < n; i++)
    {
        if (*(a) == *(b + i))
        {
            while (*(a + k) == *(b + i + k))
                k++;
            break;
        }
    }
    for (i = k, j = 0; i < n; i++, j++)
    {
        if (*(a + i) == *(b + j))
            k++;
    }
    if (k == n)
        return 1;
    else
        k = 0;
    my(a, n);
    for (i = 0; i < n; i++)
    {
        if (*(a) == *(b + i))
        {
            j = i;
            while (*(a + k) == *(b + i + k))
            {
                k++;
            }
            break;
        }
    }
    for (i = k, j = 0; i < n; i++, j++)
    {
        if (*(a + i) == *(b + j))
            k++;
    }
    if (k == n)
        return 1;
    else
        return 0;
}
int main()
{
    char str[1000][1000];
    int n, i, j, k = 0, q, flag = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
        {
            cin >> str[i][j];
        }
    for (i = 0; i < n; i++)
    {
        for (j = 1 + i; j < n; j++)
        {
            flag += find(str[i], str[j], strlen(str[i]));
            if (flag != 0)
                break;
        }
        if (flag != 0)
            break;
    }
    if (flag == 0)
        cout << "No two snowflakes are alike.";
    else
        cout << "Twin snowflakes found.";
    return 0;
}