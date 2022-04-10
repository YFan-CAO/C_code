#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    char arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//
//    int n = 0;
//    for (n = 0; n < 12; n++)
//    {
//        printf("%c", arr[n]);
//    }
//
//    return 0;
//}

#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch=getchar())!= EOF)
    {
       
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        }
    putchar(ch);
    }


    return 0;
}