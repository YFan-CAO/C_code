//#define _CRT_SECURE_NO_WARNINGS 1

//顺序表
#include <stdio.h>

/*
题目：数据结构题集18页2.21
试写一个算法，实现顺序表的就地逆置，即利用原表的存储空间将线性表(a1,a2,...,an)逆置为(an,...,a2,a1)
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
        //list.arr[i]与list.arr[j]进行交换
        tmp = list.arr[i];
        list.arr[i] = list.arr[j];
        list.arr[j] = tmp;
    }

    print_SQ(list);
}