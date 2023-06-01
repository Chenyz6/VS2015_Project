#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* initListHead(int num)  // 带头节点的初始化
{
	ListNode * node = new ListNode;
	ListNode * cur = node;
	for (int i = 0; i < num; i++)
	{
		ListNode * p = new ListNode;
		p->val = rand() % 10;
		cur->next = p;
		p->next = NULL;
		cur = p;
	}
	cout << "带头节点的初始化完成" << num << "个结点" << endl;
	return node;
}

void printListHead(ListNode * node)  // 带头节点的打印
{
	if (node->next == NULL)
	{
		return;
	}
	ListNode * p = node->next;
	while (p != NULL)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}

ListNode* initList(int num)  // 不带头节点的初始化
{
	if (num == 0)
	{
		return NULL;
	}
	ListNode * node = new ListNode;
	ListNode * cur = node;
	cur->val = rand() % 10;
	for (int i = 0; i < num - 1; i++)
	{
		ListNode * p = new ListNode;
		p->val = rand() % 10;
		cur->next = p;
		p->next = NULL;
		cur = p;
	}
	cout << "不带头节点的初始化完成" << num << "个结点" << endl;
	return node;
}

void printList(ListNode * node)  // 不带头节点的打印
{
	ListNode * p = node;
	while (p != NULL)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}

int main()
{
	ListNode * head = initListHead(5);
	cout << "带头节点打印：" << endl;
	printListHead(head);
	ListNode * nohead = initList(3);
	cout << "不带头节点打印：" << endl;
	printList(nohead);
	system("pause");
	return 0;
}