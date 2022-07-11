#include <iostream>
using namespace std;
void Heapify(int* arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1, r = 2 * i + 2;
    if (arr[l] > arr[largest] && l < n)
        largest = l;
    if (arr[r] > arr[largest] && r < n)
        largest = r;
    if (i != largest)
    {
        swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }
}
void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void create_and_sort(int* arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n, i);
    print(arr, n);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[0]);
        Heapify(arr, i, 0);
        print(arr, n);
    }
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
    create_and_sort(a, len);
}