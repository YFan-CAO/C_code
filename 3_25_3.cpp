#include<cstdio>
template <typename T>
struct stack {
	int size = 0;
	T data[1001];
	void pop() {
		size--;
	}
	T top() {
		return data[size];
	}
	void push(T x) {
		size++;
		data[size] = x;
	}
};
int priority[128][128];
void init_priority() {
	priority['+']['+'] = 1;
	priority['-']['+'] = 1;
	priority['*']['+'] = 1;
	priority['/']['+'] = 1;
	priority['(']['+'] = 0;
	priority[')']['+'] = 1;
	priority['#']['+'] = 0;
	priority['+']['-'] = 1;
	priority['-']['-'] = 1;
	priority['*']['-'] = 1;
	priority['/']['-'] = 1;
	priority['(']['-'] = 0;
	priority[')']['-'] = 1;
	priority['#']['-'] = 0;
	priority['+']['*'] = 0;
	priority['-']['*'] = 0;
	priority['*']['*'] = 1;
	priority['/']['*'] = 1;
	priority['(']['*'] = 0;
	priority[')']['*'] = 1;
	priority['#']['*'] = 0;
	priority['+']['/'] = 0;
	priority['-']['/'] = 0;
	priority['*']['/'] = 1;
	priority['/']['/'] = 1;
	priority['(']['/'] = 0;
	priority[')']['/'] = 1;
	priority['#']['/'] = 0;
	priority['+']['('] = 0;
	priority['-']['('] = 0;
	priority['*']['('] = 0;
	priority['/']['('] = 0;
	priority['(']['('] = 0;
	//	priority[')']['('] = 1;
	priority['#']['('] = 0;
	priority['+'][')'] = 1;
	priority['-'][')'] = 1;
	priority['*'][')'] = 1;
	priority['/'][')'] = 1;
	priority['('][')'] = -1;
	priority[')'][')'] = 1;
	//	priority['#'][')'] = 1;
	priority['+']['#'] = 1;
	priority['-']['#'] = 1;
	priority['*']['#'] = 1;
	priority['/']['#'] = 1;
	//	priority['(']['#'] = 0;
	priority[')']['#'] = 1;
	priority['#']['#'] = -1;

}
double calc(double x, char op, double y) {
	if (op == '+')
		return x + y;
	if (op == '-')
		return y - x;
	if (op == '*')
		return x * y;
	if (op == '/')
		return y / x;
}
int main() {
	stack<double> num;
	stack<char> op;
	init_priority();
	char Input[100];
	op.push('#');
	scanf("%s", Input);
	char c = Input[0]; int pos = 0;
	while (c != '#' || op.top() != '#') {
		//		cout << c<< endl<< num.top()<<endl;
		int Int = 0; double Double = 0;
		if (c >= '0' && c <= '9') {
			while (c >= '0' && c <= '9') {
				Int = Int * 10 + (c - '0');
				//			cout << Int << endl;
				c = Input[++pos];
			}
			if (c == '.') {
				int y = 10;
				c = Input[++pos];
				while (c >= '0' && c <= '9') {
					Double += (c - '0') / (double)y;
					y *= 10;
					c = Input[++pos];
				}
			}
			//			cout << Int + Double<< " " << endl;
			num.push(Int + Double);
		}
		else {
			//			cout << op.top() << " " << c << " "; 
			//			cout << priority[op.top()][c] <<endl;
			if (priority[op.top()][c] == -1) {
				op.pop();
				c = Input[++pos];
			}
			else if (priority[op.top()][c]) {
				//				cout << "op" <<endl; 
				char opr = op.top(); op.pop();
				double x = num.top(); num.pop();
				double y = num.top(); num.pop();
				num.push(calc(x, opr, y));
				//				cout << num.top()<<endl;
			}
			else {
				op.push(c);
				c = Input[++pos];
			}
		}
	}
	printf("%.2f", num.top());
	return 0;
}