//#define _CRT_SECURE_NO_WARNINGS 1

//˳���
#include <stdio.h>

/*
��Ŀ�����ݽṹ�⼯18ҳ2.21
��дһ���㷨��ʵ��˳���ľ͵����ã�������ԭ��Ĵ洢�ռ佫���Ա�(a1,a2,...,an)����Ϊ(an,...,a2,a1)
*/

#define maxlen 100
#define DATATYPE int

typedef struct {
    DATATYPE arr[maxlen];
    int length;
}Seqlist;

void print_SQ(Seqlist list)
{
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.arr[i]);
    }
    printf("\n");
}

int main(void)
{
    Seqlist list = { {1,2,3,4,5},5 };

    int tmp;
    for (int i = 0, j = list.length - 1; i < j; i++, j--) {
        //list.arr[i]��list.arr[j]���н���
        tmp = list.arr[i];
        list.arr[i] = list.arr[j];
        list.arr[j] = tmp;
    }

    print_SQ(list);
}