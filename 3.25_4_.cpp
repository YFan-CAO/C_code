
#include<bits/stdc++.h>
using namespace std;
struct node {
	int no;
	string name;
	int classno;
	int score;
	node* pno;
	node* pclass;
	node* pscore;
	node* p;
};
node* head;
void add_head(int no, string name, int classno, int score) {
	node* tmp = new node;
	tmp->p = head->p;
	head->p = tmp;
	tmp->pno = head->pno;
	head->pno = tmp;
	tmp->pclass = head->pclass;
	head->pclass = tmp;
	tmp->pscore = head->pscore;
	head->pscore = tmp;
	tmp->classno = classno;
	tmp->name = name;
	tmp->no = no;
	tmp->score = score;
	return;
}
void init() {
	head = new node;
	head->p = NULL;
	head->pno = NULL;
	head->pclass = NULL;
	head->pscore = NULL;
}
void Sort_no(node* head) {
	node* pre, * cur, * next, * end;
	end = NULL;
	while (head->pno != end) {
		for (pre = head, cur = pre->pno, next = cur->pno; next != end; pre = pre->pno, cur = cur->pno, next = next->pno) {
			if (cur->no > next->no) {
				pre->pno = next;
				cur->pno = next->pno;
				next->pno = cur;
				node* tmp = cur;
				cur = next;
				next = tmp;
			}
		}
		end = cur;
	}
}
void Sort_classno(node* head) {
	node* pre, * cur, * next, * end;
	end = NULL;
	while (head->pclass != end) {
		for (pre = head, cur = pre->pclass, next = cur->pclass; next != end; pre = pre->pclass, cur = cur->pclass, next = next->pclass) {
			if (cur->classno > next->classno || (cur->classno == next->classno && cur->score > next->score)) {
				pre->pclass = next;
				cur->pclass = next->pclass;
				next->pclass = cur;
				node* tmp = cur;
				cur = next;
				next = tmp;
			}
		}
		end = cur;
	}
}
void Sort_score(node* head) {
	node* pre, * cur, * next, * end;
	end = NULL;
	while (head->pscore != end) {
		for (pre = head, cur = pre->pscore, next = cur->pscore; next != end; pre = pre->pscore, cur = cur->pscore, next = next->pscore) {
			if (cur->score > next->score || (cur->score == next->score && cur->no > next->no)) {
				pre->pscore = next;
				cur->pscore = next->pscore;
				next->pscore = cur;
				node* tmp = cur;
				cur = next;
				next = tmp;
			}
		}
		end = cur;
	}
}
void print_all(node* head) {
	node* tmp = head->p;
	while (tmp != NULL) {
		cout << "0" << tmp->no << " " << tmp->name << " " << tmp->classno << " " << tmp->score << endl;
		tmp = tmp->p;
	}
}
void print_no(node* head) {
	node* tmp = head->pno;
	while (tmp != NULL) {
		cout << "0" << tmp->no << " " << tmp->name << " " << tmp->classno << " " << tmp->score << endl;
		tmp = tmp->pno;
	}
}
void print_classno(node* head) {
	node* tmp = head->pclass;
	while (tmp != NULL) {
		cout << "0" << tmp->no << " " << tmp->name << " " << tmp->classno << " " << tmp->score << endl;
		tmp = tmp->pclass;
	}
}
void print_score(node* head) {
	node* tmp = head->pscore;
	while (tmp != NULL) {
		cout << "0" << tmp->no << " " << tmp->name << " " << tmp->classno << " " << tmp->score << endl;
		tmp = tmp->pscore;
	}
}

void clear_head(node* head) {
	node* tmp = head->p;
	while (tmp != NULL) {
		node* tmp1 = tmp;
		tmp = tmp->p;
		delete tmp1;
	}
}
int main() {
	init();
	int Input = 0;
	//	cout << "select:" << endl;
	while (cin >> Input) {
		if (Input == 1 || Input == 10) cout << "select:" << endl;
		if (Input == 1) {
			int no, classno, score;
			string name;
			cin >> no >> name >> classno >> score;
			add_head(no, name, classno, score);
		}
		else if (Input == 2) {
			print_all(head);
		}
		else if (Input == 3) {
			Sort_no(head);
		}
		else if (Input == 4) {
			Sort_no(head);
			print_no(head);
		}
		else if (Input == 5) {
			Sort_classno(head);
		}
		else if (Input == 6) {
			Sort_classno(head);
			print_classno(head);
		}
		else if (Input == 7) {
			Sort_score(head);
		}
		else if (Input == 8) {
			Sort_score(head);
			print_score(head);
		}
		else if (Input == 9) {
			clear_head(head);
		}
		else if (Input == 10) {
			break;
		}
	}
}
