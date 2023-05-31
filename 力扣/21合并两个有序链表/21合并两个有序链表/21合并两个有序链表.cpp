//21. 合并两个有序链表
//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

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
					cur->val = p1->val;
					cur->next = p;
					cur = p;
					p->next = NULL;
					p1 = p1->next;
				}
				else
				{
					ListNode * p = new ListNode;
					cur->val = p2->val;
					cur->next = p;
					cur = p;
					p->next = NULL;
					p2 = p2->next;
				}
			}
			while (p1 != NULL)
			{
				ListNode * p = new ListNode;
				cur->val = p1->val;
				cur->next = p;
				cur = p;
				p->next = NULL;
				p1 = p1->next;
			}
			while (p2 != NULL)
			{
				ListNode * p = new ListNode;
				cur->val = p2->val;
				cur->next = p;
				cur = p;
				p->next = NULL;
				p2 = p2->next;
			}
		}
		return result;
	}
};

void printList(ListNode * p)  // 打印列表
{
	while (p != NULL)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}

int main() 
{
	ListNode * node = new ListNode;
	ListNode * cur = node;
	for (int i = 0;i < 3;i++)
	{
		ListNode * p = new ListNode;
		cur->val = rand() % 10;
		cur->next = p;
		cur = p;
		p->next = NULL;
	}
	cout << "链表1" << endl;
	printList(node);

	ListNode * node2 = new ListNode;
	ListNode * cur2 = node2;
	for (int i = 0;i < 3;i++)
	{
		ListNode * p = new ListNode;
		cur2->val = rand() % 10;
		cur2->next = p;
		cur2 = p;
		p->next = NULL;
	}
	cout << endl << "链表2" << endl;
	printList(node2);

	cout << endl << "合并完" << endl;
	Solution s;
	ListNode* result = s.mergeTwoLists(node, node2);
	printList(result);
	system("pause");
	return 0;
}