#include <stdio.h>
#include <stdlib.h>
#define maxsize 100//线性表有可能达到的最大长度
#define ERROR 0
#define OK 1
typedef  struct
{

    int elem[maxsize];//也可以写成*data
    int last;/*记录线性表中最后一个元素在数组elem[]中的位置（下标值），空表置为-1*/
} SepList;

int Locate(SepList L, int e)
{
    int i = 0;//i为扫描计数器，初始值为0，即从第一个元素开始比较

    while ((i <= L.last && L.elem[i] != e)) {
        i++;
    }
    if (i <= L.last)
        return i;
    else
        return -1;
}
int InsList(SepList* L, int i, int e)
{
    if ((i < 1) || (i > L->last + 2)) //首先判断插入的位置是否合法
    {
        printf("插入的位置i值不合法");
        return(ERROR);
    }
    if (L->last >= maxsize - 1)
    {
        printf("表已插满无法再插");
        return(ERROR);
    }
    int k = 0;
    for (k = L->last; k >= i - 1; k--)
        L->elem[k + 1] = L->elem[k];
    L->elem[i - 1] = e;
    L->last++;
    return(OK);


}


int main()
{
    SepList list;
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &list.elem[i]);
    }
    int j;
    for (j = i - 1; j > 0; j--)
    {
        printf("%d ", list.elem[j]);
    }

    return 0;
}