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
	slnode* plist = NULL;//������Ĭ��û���ڱ�λ ���Խ��ָ��� ����һ���ڵ�Ҳû��
	SLpushback(&plist, 1);
	SLpushback(&plist, 2);
	SLpushback(&plist, 3);
	SLpushback(&plist, 4);
	SLpushback(&plist, 5);
	SListprint(plist);   //��ӡNULL  ��Ϊ�β���ʵ�εĸı�
	//Ҫ�ں�����ı�˭ ��˭�ĵ�ַ  �����øı�
	//Ҫ�ı� plist  ��plist�ĵ�ַ��**��  ����Ҫ�ý�����   ͬʱҪ�ö����ṹ��ָ��

	SLpopback(&plist);
	SListprint(plist);
}


int main()
{

	test1();

	return 0;
}