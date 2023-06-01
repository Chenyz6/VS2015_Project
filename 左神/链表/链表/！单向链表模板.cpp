#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* initListHead(int num)  // ��ͷ�ڵ�ĳ�ʼ��
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
	cout << "��ͷ�ڵ�ĳ�ʼ�����" << num << "�����" << endl;
	return node;
}

void printListHead(ListNode * node)  // ��ͷ�ڵ�Ĵ�ӡ
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

ListNode* initList(int num)  // ����ͷ�ڵ�ĳ�ʼ��
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
	cout << "����ͷ�ڵ�ĳ�ʼ�����" << num << "�����" << endl;
	return node;
}

void printList(ListNode * node)  // ����ͷ�ڵ�Ĵ�ӡ
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
	cout << "��ͷ�ڵ��ӡ��" << endl;
	printListHead(head);
	ListNode * nohead = initList(3);
	cout << "����ͷ�ڵ��ӡ��" << endl;
	printList(nohead);
	system("pause");
	return 0;
}