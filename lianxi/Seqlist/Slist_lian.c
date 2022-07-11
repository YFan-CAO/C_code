#include "Slist_lian.h"


void SListprint(slnode* phead)//��Ϥ�ṹ��ָ��
{
	slnode* cur = 0;
	cur=phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
slnode* SLbuynode(SLdatatype x)
{
	//�ȴ���һ���½ڵ�
	slnode* newnode = (slnode*)malloc(sizeof(slnode));
	assert(newnode);
	//���½�㸳ֵ
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLpushback(slnode** pphead,SLdatatype x)
{
	slnode*newnode=SLbuynode(x);

	//�ж��ڴ�֮ǰ�Ƿ��нڵ�

	if (*pphead == NULL)
	{
		*pphead = newnode; //phead=newnode;�ı�����ʽ���� phead ��ȥ���ǿջ��ǿ�  
	}
	else
	{
		slnode* tail = *pphead;
		while (tail->next!= NULL)
		{
			tail = tail->next;
		}
		tail->next= newnode;
	}


}

void SLpushfront(slnode** pphead, SLdatatype x)
{
	//slnode* newnode = (slnode*)malloc(sizeof(slnode));

	//newnode->data = x;
	//newnode->next = NULL;
	slnode* newnode = SLbuynode(x);
	newnode->next = *pphead;
	*pphead = newnode;

	 
}


void SLpopback(slnode** pphead)
{
	assert(*pphead);

	if ((*pphead)->next== NULL)//ֻ��һ������ʱ��
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//���
	{
		slnode* tail = *pphead;
		slnode* tailprev = NULL;
		while (tail->next != NULL)
		{
			tailprev = tail;
			tail = tail->next; //����һ�� tail->next->next �ķ�ʽ
		}
		free(tail);
		tailprev->next = NULL;
	}
}

void SLpopfront(slnode** pphead)
{
	assert(*pphead);
	slnode* next=(*pphead)->next;
	free(*pphead);//free���ǽṹ��  ���ָ�뻹��һֱ�ڵ�  ֻ������free��� ���ָ����ָ�Ŀռ䱻�ͷ�
	*pphead = next;

}


slnode* SLfind(slnode* phead, SLdatatype x)//֮���Է���һ���ṹ��ָ��  �ǿ��Ա���޸Ĺ��ܵ�
{                                            // �ҵ�һ��ֵ ��������ָ��  ֱ�Ӽ�ͷdata�Ϳ����޸���

	assert(phead);
	slnode* cur = phead;

	while (cur)
	{
		if (cur->next == x)
			return cur;

		cur = cur->next;
	}

	return NULL;
}