#include <iostream>
#include <stack>
using namespace std;

struct Node 
{
	int value;
	Node * left;
	Node * right;
};

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
	cout << head->value;
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
	cout << head->value;
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
	cout << head->value;
}

// �ǵݹ�ʵ����ǰ�����
void preOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<int> s;
		s.push(node->value);
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
			if (node->right != NULL)  // ��������
			{
				s.push(node->right->value);
			}
			if (node->left != NULL) 
			{
				s.push(node->left->value);
			}
		}
	}
}

void preOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<int> s;
		s.push(node->value);
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
			if (node->right != NULL)  // ��������
			{
				s.push(node->right->value);
			}
			if (node->left != NULL)
			{
				s.push(node->left->value);
			}
		}
	}
}

// �������
void lastOrderUnRecur(Node * node)
{
	if (node != NULL)
	{
		stack<int> s1,s2;
		s1.push(node->value);
		while (!s1.empty())
		{
			s2.push(s1.top);
			s1.pop();
			if (node->right != NULL)  // ��������   s1Ϊ������    s2Ϊ���Ҹ�
			{
				s1.push(node->right->value);
			}
			if (node->left != NULL)
			{
				s1.push(node->left->value);
			}
		}
		while (!s2.empty())
		{
			cout << s2.top() << endl;
			s2.pop();
		}
	}
}

int main()
{
	system("pause");
}


