/*
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

请你将两个数相加，并以相同形式返回一个表示和的链表。

你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
*/
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
/*
输入：l1 = [2,4,3], l2 = [5,6,4]
输出：[7,0,8]
解释：342 + 465 = 807.
示例 2：

输入：l1 = [0], l2 = [0]
输出：[0]
示例 3：

输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
输出：[8,9,9,9,0,0,0,1]*/
#include <iostream>
#include <list>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* l1_t = l1;
		ListNode* l2_t = l2;
		ListNode* temp;  // temp用来记录l1前一个节点
		int num = 0;
		while (l1_t != NULL && l2_t != NULL)
		{
			l1_t->val = l1_t->val + l2_t->val + num;
			if (l1_t->val >= 10)
			{
				num = l1_t->val / 10;
				l1_t->val = l1_t->val % 10;
			}
			else
			{
				num = 0;
			}
			temp = l1_t;
			l1_t = l1_t->next;
			l2_t = l2_t->next;
		}
		while (l1_t != NULL)
		{
			l1_t->val = l1_t->val + num;
			if (l1_t->val >= 10)
			{
				num = l1_t->val / 10;
				l1_t->val = l1_t->val % 10;
			}
			else
			{
				num = 0;
			}
			temp = l1_t;
			l1_t = l1_t->next;
		}
		while (l2_t != NULL)
		{
			ListNode * p = new ListNode;
			p->val = l2_t->val + num;
			if (p->val >= 10)
			{
				num = p->val / 10;
				p->val = p->val % 10;
			}
			else
			{
				num = 0;
			}
			temp->next = p;
			temp = p;
			p->next = NULL;
			l2_t = l2_t->next;
		}
		if (num != 0)
		{
			ListNode * p = new ListNode;
			p->val = num;
			temp->next = p;
			p->next = NULL;
		}
		return l1;
	}
};

int main()
{
	ListNode* head1 = new ListNode;
	ListNode* head2 = new ListNode;
	Solution s;
	ListNode * result = s.addTwoNumbers(head1, head2);
	system("pause");
	return 0;
}