#include <iostream>
#include <stack>
using namespace std;

struct Node 
{
	int value;
	Node * left;
	Node * right;
};

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
	cout << head->value;
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
	cout << head->value;
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
	cout << head->value;
}

// 非递归实现树前序遍历
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
			if (node->right != NULL)  // 先右再左
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
			if (node->right != NULL)  // 先右再左
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

// 后序遍历
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
			if (node->right != NULL)  // 先左再右   s1为根右左    s2为左右根
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


