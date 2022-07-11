#include <iostream>
using namespace std;
void quicksort(int* a, int begin, int end)
{
    int mid = a[(begin + end) / 2];
    int i = begin, j = end;
    do
    {
        while (a[i] < mid)
            i++;
        while (a[j] > mid)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i < j);
    if (j > begin)
        quicksort(a, begin, j);
    if (i < end)
        quicksort(a, i, end);
}
void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int a[1000];
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
    quicksort(a, 0, len - 1);
    print(a, len);
    print(a, len);
    print(a, len);
}