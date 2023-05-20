#include <iostream>
#include <stack>
using namespace std;

struct Node 
{
	int value;
	Node * left;
	Node * right;
};

void initNode(Node * head)
{
	Node * p = new Node;
	Node * p1 = new Node;
	Node * p2 = new Node;
	Node * p3 = new Node;
	head->value = 5;  // 根是5
	head->left = p;
	p->value = 3;  // 左是3
	p->left = NULL;
	p->right = NULL;
	head->right = p1;
	p1->value = 1;  // 右是1
	p1->left = p2;
	p1->right = p3;
	p2->value = 7;
	p2->right = NULL;
	p2->left = NULL;
	p3->value = 9;
	p3->right = NULL;
	p3->left = NULL;
}

// 递归实现
void f(Node * head)  // 节点的遍历  每个节点都会打印三次
{
	if (head == NULL)
	{
		return;
	}
	f(head->left);
	f(head->right);
}

void preOrderRecur(Node * head)  // 先序遍历
{
	if (head == NULL)
	{
		return;
	}
	cout << head->value << " ";
	preOrderRecur(head->left);
	preOrderRecur(head->right);
}

void inOrderRecur(Node * head)  // 中序遍历
{
	if (head == NULL)
	{
		return;
	}
	inOrderRecur(head->left);
	cout << head->value << " ";
	inOrderRecur(head->right);
}

void lastOrderRecur(Node * head)  // 后序遍历
{
	if (head == NULL)
	{
		return;
	}
	lastOrderRecur(head->left);
	lastOrderRecur(head->right);
	cout << head->value << " ";
}

// 非递归实现树前序遍历
void preOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<Node *> s;
		s.push(node);
		while (!s.empty())
		{
			cout << s.top()->value << " ";
			Node * pre = s.top();
			s.pop();
			if (pre->right != NULL)  // 先右再左
			{
				s.push(pre->right);
			}
			if (pre->left != NULL)
			{
				s.push(pre->left);
			}
		}
	}
}

// 非递归实现树中序遍历
void inOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<Node *> s;
		while (!s.empty() || node != NULL)  // 找退出循环的条件
		{
			if (node != NULL)   
			{
				s.push(node);
				node = node->left;
			}
			else
			{
				cout << s.top()->value << " ";
				node = s.top();
				s.pop();
				node = node->right;
			}
		}
	}
}

// 非递归后序遍历
void lastOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<Node *> s,s1;
		s.push(node);
		while (!s.empty())
		{
			s1.push(s.top());
			Node * pre = s.top();
			s.pop();
			if (pre->left != NULL)  // 先左再右
			{
				s.push(pre->left);   // 根右左  再 放到一个栈内 出来 左右跟
			}
			if (pre->right != NULL)
			{
				s.push(pre->right);
			}
		}
		while (!s1.empty())
		{
			cout << s1.top()->value << " ";
			s1.pop();
		}
	}
}


int main()
{
	Node * head = new Node;
	initNode(head);
	cout << "递归先序遍历" << endl;
	preOrderRecur(head);
	cout << endl;
	cout << "递归中序遍历" << endl;
	inOrderRecur(head);
	cout << endl;
	cout << "递归后序遍历" << endl;
	lastOrderRecur(head);
	cout << endl << "-----------------" << endl;
	cout << "非递归前序遍历" << endl;
	preOrderUnRecur(head);
	cout << endl;
	cout << "非递归中序遍历" << endl;
	inOrderUnRecur(head);
	cout << endl;
	cout << "非递归后序遍历" << endl;
	lastOrderUnRecur(head);
	cout << endl;
	system("pause");
}


