//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//typedef struct {
//	int r, c;
//}PosType;
//
//typedef struct {
//	int ord;
//	PosType seat;
//	int di;
//}SElemType;
//
//typedef struct {
//	char arr[10][11];
//}MazeType;
//
//struct stack {
//	SElemType elem[1010];
//	int size;
//	int top;
//	SElemType pop() {
//		return elem[top--];
//	}
//	void push(SElemType data) {
//		elem[++top] = data;
//	}
//	bool empty() {
//		return top;
//	}
//	stack() {
//		top = 0;
//	}
//};
//
//int Pass(MazeType* m, PosType* s) {
//	return (m->arr[s->r][s->c] == ' ' || m->arr[s->r][s->c] == 'S' || m->arr[s->r][s->c] == 'E');
//}
//
//PosType NextPose(PosType* s, int di) {
//	if (di == 1) {
//		s->c = s->c + 1;
//	}
//	else if (di == 2) {
//		s->r = s->r + 1;
//	}
//	else if (di == 3) {
//		s->c = s->c - 1;
//	}
//	else s->r = s->r - 1;
//	return *s;
//}
//void print(MazeType*);
//void MarkPrint(MazeType* m, PosType* s) {
//	m->arr[s->r][s->c] = '!';
//}
//void FootPrint(MazeType* m, PosType* s) {
//	m->arr[s->r][s->c] = '*';
//}
//int MazePath(MazeType* m, PosType start, PosType end) {
//	stack s;
//	PosType curpos = start;
//	SElemType e;
//	int curstep = 1;
//	do {
//		//		print(m);
//		//		cout << curpos.r << " " << curpos.c << endl;
//		if (Pass(m, &curpos)) {
//			FootPrint(m, &curpos);
//			e.di = 1;
//			e.ord = curstep;
//			e.seat = curpos;
//			s.push(e);
//			if (curpos.r == end.r && curpos.c == end.c) {
//				return 1;
//			}
//			curpos = NextPose(&curpos, e.di);
//			curstep++;
//		}
//		else {
//			if (s.empty()) {
//				e = s.pop();
//				while (e.di == 4 && s.empty()) {
//					MarkPrint(m, &e.seat);
//					e = s.pop();
//				}
//				if (e.di < 4) {
//					e.di++;
//					s.push(e);
//					curpos = NextPose(&e.seat, e.di);
//				}
//			}
//		}
//	} while (s.empty());
//	return 0;
//}
//void print(MazeType* m) {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			printf("%c", m->arr[i][j]);
//		}
//		puts("");
//	}
//}
//int main() {
//	PosType s, e;
//	MazeType m;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			scanf("%c", &m.arr[i][j]);
//			if (m.arr[i][j] == 'S') {
//				s.r = i;
//				s.c = j;
//			}
//			if (m.arr[i][j] == 'E') {
//				e.c = j;
//				e.r = i;
//			}
//		}
//		getchar();
//	}
//	if (MazePath(&m, s, e)) {
//		print(&m);
//	}
//	return 0;
//}