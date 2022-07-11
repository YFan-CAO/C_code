#include "Slist_lian.h"


void SListprint(slnode* phead)//熟悉结构体指针
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
	//先创建一个新节点
	slnode* newnode = (slnode*)malloc(sizeof(slnode));
	assert(newnode);
	//给新结点赋值
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLpushback(slnode** pphead,SLdatatype x)
{
	slnode*newnode=SLbuynode(x);

	//判断在此之前是否有节点

	if (*pphead == NULL)
	{
		*pphead = newnode; //phead=newnode;改变了形式参数 phead 出去该是空还是空  
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

	if ((*pphead)->next== NULL)//只有一个结点的时候
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//多个
	{
		slnode* tail = *pphead;
		slnode* tailprev = NULL;
		while (tail->next != NULL)
		{
			tailprev = tail;
			tail = tail->next; //还有一种 tail->next->next 的方式
		}
		free(tail);
		tailprev->next = NULL;
	}
}

void SLpopfront(slnode** pphead)
{
	assert(*pphead);
	slnode* next=(*pphead)->next;
	free(*pphead);//free的是结构体  这个指针还是一直在的  只不过当free完后 这个指针所指的空间被释放
	*pphead = next;

}


slnode* SLfind(slnode* phead, SLdatatype x)//之所以返回一个结构体指针  是可以变成修改功能的
{                                            // 找到一个值 返回他的指针  直接箭头data就可以修改了

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