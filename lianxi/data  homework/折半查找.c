#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d\n", n);
    int a[500];
    int i;
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        getchar();
        //   printf("%d ", a[i]);
    }
    scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    // printf("\n%d\n", k);
    int mid;
    int low = 0, high = n - 1;
    int st[100];
    int j = 0;
    int flag = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        // printf("%d", mid);
        if (a[mid] == k)
        {
            flag = 1;
            break;
        }
        if (a[mid] < k)
        {
            st[j++] = a[mid];
            low = mid + 1;
        }
        if (a[mid] > k)
        {
            // printf("%d", j);
            st[j++] = a[mid];
            high = mid - 1;
        }
    }
    if (flag == 1)
        printf("%d\n", mid);
    else
        printf("no\n");
    for (i = 0; i < j; i++)
    {
        printf("%d", st[i]);
        if (i != j - 1)
            printf(",");
    }
    if (flag == 1)
        printf(",%d", a[mid]);
}