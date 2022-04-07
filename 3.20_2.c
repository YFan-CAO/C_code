#include <stdio.h>
#include <stdlib.h>
#define maxsize 100//���Ա��п��ܴﵽ����󳤶�
#define ERROR 0
#define OK 1
typedef  struct
{

    int elem[maxsize];//Ҳ����д��*data
    int last;/*��¼���Ա������һ��Ԫ��������elem[]�е�λ�ã��±�ֵ�����ձ���Ϊ-1*/
} SepList;

int Locate(SepList L, int e)
{
    int i = 0;//iΪɨ�����������ʼֵΪ0�����ӵ�һ��Ԫ�ؿ�ʼ�Ƚ�

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
    if ((i < 1) || (i > L->last + 2)) //�����жϲ����λ���Ƿ�Ϸ�
    {
        printf("�����λ��iֵ���Ϸ�");
        return(ERROR);
    }
    if (L->last >= maxsize - 1)
    {
        printf("���Ѳ����޷��ٲ�");
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