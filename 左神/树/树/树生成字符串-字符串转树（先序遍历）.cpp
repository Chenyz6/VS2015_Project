#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string value;
	Node * left;
	Node * right;
};

void initNode(Node * head)
{
	Node * p = new Node;
	Node * p1 = new Node;
	Node * p2 = new Node;
	Node * p3 = new Node;
	head->value = "a";  // 根是5
	head->left = p;
	p->value = "f";  // 左是3
	p->left = NULL;
	p->right = NULL;
	head->right = p1;
	p1->value = "r";  // 右是1
	p1->left = p2;
	p1->right = p3;
	p2->value = "p";
	p2->right = NULL;
	p2->left = NULL;
	p3->value = "m";
	p3->right = NULL;
	p3->left = NULL;
}

string toString(Node * node)
{
	if (node == NULL)
	{
		return "#_";
	}
	string str = node->value + "_";
	str += toString(node->left);
	str += toString(node->right);
	return str;
}

int main()
{
	Node * head = new Node;
	initNode(head);
	cout << toString(head) << endl;
	system("pause");
}