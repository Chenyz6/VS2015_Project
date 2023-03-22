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
		ListNode * list;
		if (p1->val < p2->val)
		{
			list->val = p1->val;
			p1 = p1->next;
		}
		else if (p1->val ==p2->val)
		{
			list->val = p1->val;
		}
	}
};

int main() 
{
	system("pause");
	return 0;
}