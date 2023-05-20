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
	head->value = 5;  // ����5
	head->left = p;
	p->value = 3;  // ����3
	p->left = NULL;
	p->right = NULL;
	head->right = p1;
	p1->value = 1;  // ����1
	p1->left = p2;
	p1->right = p3;
	p2->value = 7;
	p2->right = NULL;
	p2->left = NULL;
	p3->value = 9;
	p3->right = NULL;
	p3->left = NULL;
}

// �ݹ�ʵ��
void f(Node * head)  // �ڵ�ı���  ÿ���ڵ㶼���ӡ����
{
	if (head == NULL)
	{
		return;
	}
	f(head->left);
	f(head->right);
}

void preOrderRecur(Node * head)  // �������
{
	if (head == NULL)
	{
		return;
	}
	cout << head->value << " ";
	preOrderRecur(head->left);
	preOrderRecur(head->right);
}

void inOrderRecur(Node * head)  // �������
{
	if (head == NULL)
	{
		return;
	}
	inOrderRecur(head->left);
	cout << head->value << " ";
	inOrderRecur(head->right);
}

void lastOrderRecur(Node * head)  // �������
{
	if (head == NULL)
	{
		return;
	}
	lastOrderRecur(head->left);
	lastOrderRecur(head->right);
	cout << head->value << " ";
}

// �ǵݹ�ʵ����ǰ�����
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
			if (pre->right != NULL)  // ��������
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

// �ǵݹ�ʵ�����������
void inOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<Node *> s;
		while (!s.empty() || node != NULL)  // ���˳�ѭ��������
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

// �ǵݹ�������
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
			if (pre->left != NULL)  // ��������
			{
				s.push(pre->left);   // ������  �� �ŵ�һ��ջ�� ���� ���Ҹ�
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
	cout << "�ݹ��������" << endl;
	preOrderRecur(head);
	cout << endl;
	cout << "�ݹ��������" << endl;
	inOrderRecur(head);
	cout << endl;
	cout << "�ݹ�������" << endl;
	lastOrderRecur(head);
	cout << endl << "-----------------" << endl;
	cout << "�ǵݹ�ǰ�����" << endl;
	preOrderUnRecur(head);
	cout << endl;
	cout << "�ǵݹ��������" << endl;
	inOrderUnRecur(head);
	cout << endl;
	cout << "�ǵݹ�������" << endl;
	lastOrderUnRecur(head);
	cout << endl;
	system("pause");
}


