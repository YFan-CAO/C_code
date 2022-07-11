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

void SLinsert(slnode** pphead, slnode* pos,SLdatatype x);//���ڵڶ�����ʽ���� ����find��������ָ�� �Ϳ������ȥ  ����ǰ�����ֵ
void SLerase(slnode** pphead, slnode* pos);//���ڵڶ�����ʽ���� ����find��������ָ�� ɾ��pos����ڵ�
 