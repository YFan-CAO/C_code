//#pragma once
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//typedef int SLdatatype;
//
//typedef struct Seqlist
//{
//	SLdatatype* a;
//	int size;
//	int capacity;
//}SL;
//
////顺序表12个接口
//
//
//void SLinit(SL* ps);//动态顺序表的初始化
//void SLcheckcapacity(SL* ps);//检查是否需要扩容
//void SLdestory(SL* ps);// 顺序表销毁
//void SLprintf(SL* ps);//打印顺序表
//
//void SLpushfront(SL* ps, SLdatatype x);//头插  //o(n)
//void SLpopfront(SL* ps);//头删 //o(n)
//void SLpushback(SL* ps, SLdatatype x);//尾插 //o(1)
//void SLpopback(SL* ps);//尾删  //o(1)
//
//void SLinsert(SL* ps, int pos, SLdatatype x);//在pos插入一个数
//void SLerase(SL* ps, int pos);//删除pos这个位置上的数
//int SLfind(SL* ps,SLdatatype x);//查找这个数在那个位置？
//void SLmodify(SL* ps,int pos,SLdatatype x);
//
//
//
//
