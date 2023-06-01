//21. �ϲ�������������
//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�

#include <iostream>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode * p1 = list1;
		ListNode * p2 = list2;
		ListNode * result = new ListNode;
		ListNode * cur = result;
		if (list1 == NULL && list2 == NULL)
		{
			return NULL;
		}
		else if (p1 != NULL && p2 == NULL)
		{
			return list1;
		}
		else if (p1 == NULL && p2 != NULL)
		{
			return list2;
		}
		else
		{
			while (p1 != NULL && p2 != NULL)
			{
				if (p1->val <= p2->val)
				{
					ListNode * p = new ListNode;
					p->val = p1->val;
					cur->next = p;
					cur = p;
					p->next = NULL;
					p1 = p1->next;
				}
				else
				{
					ListNode * p = new ListNode;
					p->val = p2->val;
					cur->next = p;
					cur = p;
					p->next = NULL;
					p2 = p2->next;
				}
			}
			while (p1 != NULL)
			{
				ListNode * p = new ListNode;
				p->val = p1->val;
				cur->next = p;
				cur = p;
				p->next = NULL;
				p1 = p1->next;
			}
			while (p2 != NULL)
			{
				ListNode * p = new ListNode;
				p->val = p2->val;
				cur->next = p;
				cur = p;
				p->next = NULL;
				p2 = p2->next;
			}
		}
		return result;
	}
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
	return node;
}

void printListHead(ListNode * node)  // ��ӡ�б�
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

int main() 
{
	//ListNode * cur = node;
	//for (int i = 0;i < 3;i++)
	//{
	//	ListNode * p = new ListNode;
	//	cur->val = rand() % 10;
	//	p->next = NULL;
	//	cur->next = p;
	//	cur = p;
	//}
	//cur->next = NULL;

	ListNode * head = initListHead(0);
	cout << "����1" << endl;
	printListHead(head);

	//ListNode * node2 = new ListNode;
	//ListNode * cur2 = node2;
	//for (int i = 0;i < 3;i++)
	//{
	//	ListNode * p = new ListNode;
	//	cur2->val = rand() % 10;
	//	cur2->next = p;
	//	cur2 = p;
	//	p->next = NULL;
	//}
	//cout << endl << "����2" << endl;
	//printList(node2);

	//cout << endl << "�ϲ���" << endl;
	//Solution s;
	//ListNode* result = s.mergeTwoLists(node, node2);
	//printList(result);
	system("pause");
	return 0;
}