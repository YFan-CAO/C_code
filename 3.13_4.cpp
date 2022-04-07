/*#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 11
typedef char ElemType[8];
typedef struct {
	ElemType data;
	int cur;
}NodeType;

NodeType space[MAXSIZE];

typedef struct {
	int elem;
	int length;
	int listSize;
}SLinkList;

void InitSpace_SL() {
	memset(space, 0, sizeof space);
	for (int i = 0; i < MAXSIZE - 1; ++i)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
}

int LocateElem_SL(SLinkList& S, ElemType e) {
	int i;
	i = S.elem;
	while (i && strcmp(space[i].data, e))
		i = space[i].cur;
	return i;
}

int Malloc_SL() {
	int i = space[0].cur;
	if (space[0].cur)
		space[0].cur = space[space[0].cur].cur;
	return i;
}

void Free_SL(int k) {
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

void show(SLinkList& s) {
	int p = 0;
	for (; p < MAXSIZE; ++p) {
		printf("%-8s%2d\n", space[p].data, space[p].cur);
	}
}
void insert(SLinkList& s, int a, ElemType e) {
	int count = 0, k = s.elem, p;
	while (k && count < a - 1) {
		count++;
		k = space[k].cur;
	}
	p = Malloc_SL();
	strcpy(space[p].data, e);
	space[p].cur = space[k].cur;
	space[k].cur = p;
	s.length++;
}
void Create(SLinkList& s) {
	s.elem = Malloc_SL();
	space[s.elem].cur = 0;
	s.length = 0;
	s.listSize = 9;
}
int search(SLinkList& s, ElemType e) {
	int p = s.elem;
	while (strcmp(space[p].data, e) != 0) {
		p = space[p].cur;
	}
	return p;
}
void Delete(SLinkList& s, int i) {
	int cur = s.elem;
	int cnt = 0;
	while (cnt < i - 1) {
		cur = space[cur].cur;
		cnt++;
	}
	int tmp = space[cur].cur;
	space[cur].cur = space[tmp].cur;
	Free_SL(tmp);
	s.length--;
}
int main() {
	SLinkList h;
	char str[10];
	int a;
	ElemType e;
	InitSpace_SL();
	Create(h);
	whil/*e (scanf("%s", str) != EOF) {
		if (strcmp(str, "insert") == 0) {
			scanf("%d%s", &a, e);
		
}
	insert(h, a, e);
		}
		else if (strcmp(str, "show") == 0) {
			show(h);
			printf("********************\n");
		}
		else if (strcmp(str, "delete") == 0) {
			scanf("%d", &a);
			Delete(h, a);
		}
		else {
			scanf("%s", e);
			cout << LocateElem_SL(h, e) << endl;
			printf("********************\n");
		}
	}*/