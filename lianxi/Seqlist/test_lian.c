#include "Slist_lian.h"

void test1()
{

	//slnode* n1 = (slnode*)malloc(sizeof(slnode));
	//slnode* n2 = (slnode*)malloc(sizeof(slnode));
	//slnode* n3 = (slnode*)malloc(sizeof(slnode));
	//slnode* n4 = (slnode*)malloc(sizeof(slnode));
	//slnode* n5 = (slnode*)malloc(sizeof(slnode));


	//n1->data = 1;
	//n2->data = 2;
	//n3->data = 3;
	//n4->data = 4;
	//n5->data = 5;

	//n1->next =n2;
	//n2->next =n3;
	//n3->next =n4;
	//n4->next =n5;
	//n5->next =NULL;
	slnode* plist = NULL;//单链表默认没有哨兵位 所以结点指向空 就是一个节点也没有
	SLpushback(&plist, 1);
	SLpushback(&plist, 2);
	SLpushback(&plist, 3);
	SLpushback(&plist, 4);
	SLpushback(&plist, 5);
	SListprint(plist);   //打印NULL  因为形参与实参的改变
	//要在函数里改变谁 传谁的地址  解引用改变
	//要改变 plist  传plist的地址（**）  所以要用解引用   同时要用二级结构体指针

	SLpopback(&plist);
	SListprint(plist);
}


int main()
{

	test1();

	return 0;
}