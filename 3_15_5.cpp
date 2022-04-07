///*<iostream>
//
//using namespace std;
//
//struct ListNode {
//	ListNode(int _v = 0) :value(_v), next(NULL) {}
//	int value;
//	ListNode* next;
//	void add(ListNode* _l)
//	{
//		if (next == NULL)
//			next = _l;
//		else
//			next->add(_l);
//	}
//};
//
//ListNode* findNode(ListNode* root, int k/*倒数第k个*/)
//{
//	int len = 0;
//	ListNode* p = root;
//	while (p != NULL)
//	{
//		len++;
//		p = p->next;
//	}
//
//	if (k > len) return NULL;
//	int i = 1;
//	p = root;
//	while (i < len - k + 1)
//	{
//		p = p->next;
//		i++;
//	}
//	return p;
//}
//
//int main()
//{
//	ListNode* root = new ListNode(0);
//	ListNode l1(1);
//	ListNode l2(2);
//	ListNode l3(3);
//	ListNode l4(4);
//	ListNode l5(5);
///*	ListNode l6(6);
//	root->add(&l6);
//	root->add(&l5);
//	root->add(&l4);
//	root->add(&l3);
//	root->add(&l2);
//	root->add(&l1);
//
//	cout << "List 节点为：";
//	ListNode* p = root;
//	while (p != NULL)
//	{
//		cout << p->value << ",";
//		p = p->next;
//	}
//	cout << endl;
//	p = findNode(root, 4);
//	cout << "List 倒数第 4 个节点是：" << p->value << endl;
//	return 0;
//}*/                     