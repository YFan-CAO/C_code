#include <stdio.h>
int main(void)
{
    int i;
    while ((scanf_s("%d", &i)) != EOF)
    {
        for (int n = 0; n < i; n++)
        {
            printf_s("*");
            if (n == i - 1)printf("\n");
        }
    }
    return 0;
}
