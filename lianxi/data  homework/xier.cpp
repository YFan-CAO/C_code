#include <iostream>
using namespace std;
void print(int* a, int len)
{
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
    cout << endl;
}
void ShellSort(int* arr, int n, int* step)
{
    for (int i = 0, gap = step[0]; i < 3; i++, gap = step[i])
    {
        for (int i = gap; i < n; i++)
        {
            int key = arr[i];
            int j = i;
            for (; j >= gap && key < arr[j - gap]; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = key;
        }
        print(arr, n);
    }
}
int main()
{
    int a[500];
    int step[3];
    int len = 0;
    while (1)
    {
        int data;
        cin >> data;
        if (data)
        {
            a[len++] = data;
        }
        else
            break;
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> step[i];
    }
    ShellSort(a, len, step);
}