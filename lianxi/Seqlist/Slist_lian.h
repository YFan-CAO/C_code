#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLdatatype;

typedef struct Slistnode
{
	SLdatatype data;
	struct Slistnode* next;
}slnode;

slnode* SLbuynode(SLdatatype x);
void SListprint(slnode* phead);
void SLpushback(slnode** pphead,SLdatatype x);
void SLpushfront(slnode** pphead,SLdatatype x);

void SLpopback(slnode** pphead);
void SLpopfront(slnode** pphead);

slnode* SLfind(slnode* phead, SLdatatype x);

void SLinsert(slnode** pphead, slnode* pos,SLdatatype x);//关于第二个形式参数 先用find返回他的指针 就可以输进去  在他前面插入值
void SLerase(slnode** pphead, slnode* pos);//关于第二个形式参数 先用find返回他的指针 删掉pos这个节点
 