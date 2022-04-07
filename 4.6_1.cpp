#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    int data;
    Node* succ;

    Node() { succ = NULL; };
    Node(int d, Node* s = NULL) :data(d), succ(s) {}
};

class Queue {//������
protected:
    Node* front, * rear;//ͷָ�룬βָ��
    int _size;//���д�С
    void init() { rear = front = new Node; _size = 0; }//�¿�һ����㲢�ҳ�ʼ��
    void clear();//��ն���
public:
    Queue() { init(); }//���캯��
    Queue(const Queue& Q);//���ƹ��캯��
    ~Queue() { clear(); }//��������
    int outQueue();//����
    int inQueue(const int& e);//���
    int getHead() const;//��ȡ���׽��
    bool empty() { return rear == front; }
    int size() { return _size; }
    int insertQueue(const int& e);//��ʱ���С���
};
void Queue::clear() {//��ն���
    while (!empty())
        outQueue();
}
Queue::Queue(const Queue& Q) {//���ƹ��캯��
    init();//�¿�һ����㲢�ҳ�ʼ��
    _size = Q._size;//���ƶ��д�С
    for (Node* p = Q.front->succ; p; p = p->succ)//���θ������
        inQueue(p->data);
}
int Queue::outQueue() {//����
    Node* p = front->succ;
    int e = p->data;
    front->succ = p->succ;
    if (rear == p) rear = front;
    delete p;
    _size--;
    return e;
}
int Queue::inQueue(const int& e) {//���
    Node* p = new Node(e);//���ø��ƹ��캯�������µĽ��
    rear->succ = p;//�½���������
    rear = p;//����βָ��
    _size++;
    return e;
}
int Queue::insertQueue(const int& e) {//��ʱ���С���
    Node* p = front;
    ++_size;
    for (; p->succ && p->succ->data < e; p = p->succ)//����ʱ��˳��
        ;
    Node* pN = new Node(e);
    pN->succ = p->succ;
    p->succ = pN;
    return e;
}
int Queue::getHead() const {//��ȡ���׽��
    return front->succ->data;
}

double waitTime(int m, int total) {//�����ܵĵȴ�ʱ��
    Queue window;
    int arri = 0, stay = 0, time = 0;//����ʱ�䣬�ȴ�ʱ�䣬�ܵȴ�ʱ��
    while (total--) {
        cin >> arri >> stay;//��ǰ�����˵ĵ���ʱ��͵ȴ�ʱ��
        while (window.size() && window.getHead() <= arri)//���ڷǿգ����Ҷ����е�һ���뿪���˵��뿪ʱ��С�ڵ�ǰ�����˵ĵ���ʱ��
            window.outQueue();//�Ѷ����еĵ�һ���˳���
        if (window.size() < m)//����û����
            window.insertQueue(arri + stay);//�ѵ�ǰ��������ӣ���ӵ����뿪ʱ�䣩
        else {//�������ˣ���Ҫ�ȴ�
            time += window.getHead() - arri;//�ۼӵȴ�ʱ��
            int oldArri = window.getHead();//��¼�ղ��뿪���˵��뿪ʱ��
            window.outQueue();//�ղ��Ǹ��˳���
            window.insertQueue(oldArri + stay);//����ǰ�����
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