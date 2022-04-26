#include<iostream>
#include<stack>
#include<vector>
#define maxsize 300
using namespace std;
//创建哈夫曼树
struct HFNode
{
	int weight;    //权重
	int parent;    //双亲
	int leftChild; //左子树
	int rightChild;//右子树
};
//初始化哈夫曼树
void InitalHFTree(HFNode HFTree[])
{
	for (int i = 0; i < maxsize; i++)
	{
		HFTree[i].leftChild = 0;
		HFTree[i].rightChild = 0;
		HFTree[i].parent = 0;
		HFTree[i].weight = -1;
	}
}
//获得最小值
void Getmin(HFNode HFTree[], int& s1, int& s2)
{
	int min1 = 10000;
	int i = 1;
	//找寻目前第一个最小值
	while (HFTree[i].weight != -1)
	{
		if (HFTree[i].weight < min1 && HFTree[i].parent == 0)
		{
			min1 = HFTree[i].weight;
			s1 = i;
		}
		i++;
	}
	int min2 = 10000;
	i = 1;
	//找寻目前第二个最小值
	while (HFTree[i].weight != -1)
	{
		if (HFTree[i].weight < min2 && i != s1 && HFTree[i].parent == 0)
		{
			min2 = HFTree[i].weight;
			s2 = i;
		}
		i++;
	}
}
//构造哈夫曼树
void CreateHFTree(HFNode HFTree[], int& num)
{
	int top = num + 1;
	for (int i = 1; i < num; i++)
	{
		int s1; int s2;
		//每次找最小的两个
		Getmin(HFTree, s1, s2);
		//更新哈夫曼树
		HFTree[top].weight = HFTree[s1].weight + HFTree[s2].weight;
		HFTree[top].leftChild = s1;
		HFTree[top].rightChild = s2;
		HFTree[s1].parent = top;
		HFTree[s2].parent = top;
		top++;
	}
	num = top - 1;
}
//为每个元素构造哈夫曼编码
void  GetHuffmanCode(HFNode HFTree[], int num, int i, char str[])
{
	num = (num + 1) / 2;
	stack<char> s;
	int j = HFTree[i].parent;
	//为字母进行01序列编码
	while (j)
	{
		if (HFTree[j].leftChild == i) s.push('0');
		else if (HFTree[j].rightChild == i) s.push('1');
		i = j;
		j = HFTree[j].parent;
	}
	int k = 0;
	while (!s.empty())
	{
		str[k] = s.top();
		s.pop();
		k++;
	}
	str[k] = '\0';
}
//根据输入的01序列判断原字符序列
void GetHuffmandecode(HFNode HFTree[], int num, string s)
{
	int i = 0;
	while (i < (signed)s.size())
	{
		int cur = num;
		while (HFTree[cur].leftChild != 0 && HFTree[cur].rightChild != 0)
		{
			if (s[i] == '0')
			{
				cur = HFTree[cur].leftChild;
			}
			else if (s[i] == '1')
			{
				cur = HFTree[cur].rightChild;
			}
			i++;
		}
		char ch = 'a' + cur - 1;
		cout << ch;
	}
}

int main()
{
	int num, arr[maxsize];
	cin >> num;
	for (int i = 0; i < num; i++) cin >> arr[i];
	HFNode HFTree[maxsize];
	InitalHFTree(HFTree);
	//哈夫曼树权重初始化
	for (int i = 0; i < num; i++)
	{
		HFTree[i + 1].weight = arr[i];
	}
	//创建哈夫曼树
	CreateHFTree(HFTree, num);
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	char str[100];
	//为字母进行编码
	for (int i = 0; i < (num + 1) / 2; i++)
	{
		GetHuffmanCode(HFTree, num, i + 1, str);
		cout << str << endl;
	}
	cout << endl;
	for (int i = 0; i < (signed)s1.size(); i++)
	{
		int j = s1[i] - 96;
		GetHuffmanCode(HFTree, num, j, str);
		cout << str;
	}
	cout << endl << endl;
	//根据输入的01序列推导原字符串
	GetHuffmandecode(HFTree, num, s2);
	return 0;
}
