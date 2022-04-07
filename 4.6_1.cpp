#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    int data;
    Node* succ;

    Node() { succ = NULL; };
    Node(int d, Node* s = NULL) :data(d), succ(s) {}
};

class Queue {//队列类
protected:
    Node* front, * rear;//头指针，尾指针
    int _size;//队列大小
    void init() { rear = front = new Node; _size = 0; }//新开一个结点并且初始化
    void clear();//清空队列
public:
    Queue() { init(); }//构造函数
    Queue(const Queue& Q);//复制构造函数
    ~Queue() { clear(); }//析构函数
    int outQueue();//出队
    int inQueue(const int& e);//入队
    int getHead() const;//读取队首结点
    bool empty() { return rear == front; }
    int size() { return _size; }
    int insertQueue(const int& e);//按时间大小插队
};
void Queue::clear() {//清空队列
    while (!empty())
        outQueue();
}
Queue::Queue(const Queue& Q) {//复制构造函数
    init();//新开一个结点并且初始化
    _size = Q._size;//复制队列大小
    for (Node* p = Q.front->succ; p; p = p->succ)//依次复制入队
        inQueue(p->data);
}
int Queue::outQueue() {//出队
    Node* p = front->succ;
    int e = p->data;
    front->succ = p->succ;
    if (rear == p) rear = front;
    delete p;
    _size--;
    return e;
}
int Queue::inQueue(const int& e) {//入队
    Node* p = new Node(e);//调用复制构造函数开辟新的结点
    rear->succ = p;//新结点连到最后
    rear = p;//后移尾指针
    _size++;
    return e;
}
int Queue::insertQueue(const int& e) {//按时间大小插队
    Node* p = front;
    ++_size;
    for (; p->succ && p->succ->data < e; p = p->succ)//按照时间顺序
        ;
    Node* pN = new Node(e);
    pN->succ = p->succ;
    p->succ = pN;
    return e;
}
int Queue::getHead() const {//读取队首结点
    return front->succ->data;
}

double waitTime(int m, int total) {//计算总的等待时间
    Queue window;
    int arri = 0, stay = 0, time = 0;//到达时间，等待时间，总等待时间
    while (total--) {
        cin >> arri >> stay;//当前处理人的到达时间和等待时间
        while (window.size() && window.getHead() <= arri)//窗口非空，并且队列中第一个离开的人的离开时间小于当前处理人的到达时间
            window.outQueue();//把队列中的第一个人出队
        if (window.size() < m)//窗口没有满
            window.insertQueue(arri + stay);//把当前处理人入队（入队的是离开时间）
        else {//窗口满了，需要等待
            time += window.getHead() - arri;//累加等待时间
            int oldArri = window.getHead();//记录刚才离开的人的离开时间
            window.outQueue();//刚才那个人出队
            window.insertQueue(oldArri + stay);//处理当前人入队
        }
    }
    return time;
}

int main()
{
    int m, total;
    while (cin >> m >> total)
        cout << fixed << setprecision(2) << waitTime(m, total) / total << endl;
}