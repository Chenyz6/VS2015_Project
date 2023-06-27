/*给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。

示例 1：

输入：head = [1,1,2]
输出：[1,2]
示例 2：


输入：head = [1,1,2,3,3]
输出：[1,2,3]*/


//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

#include <iostream>
#include <list>
using namespace std;
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		//[1, 1, 2, 3, 3]
		if (head == NULL)
		{
			return head;
		}
		if (head->next == NULL)
		{
			return head;
		}
		ListNode * pre = head;
		ListNode * cur = head->next;
		while (cur != NULL)
		{
			if (pre->val == cur->val)
			{
				pre->next = cur->next;
				ListNode * temp = cur;
				cur = cur->next;
				delete temp;
			}
			else
			{
				pre = pre->next;
				cur = cur->next;
			}
		}
		return head;
	}
};

class Solution_offical {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head) {
			return head;
		}

		ListNode* cur = head;
		while (cur->next) {
			if (cur->val == cur->next->val) {
				cur->next = cur->next->next;
			}
			else {
				cur = cur->next;
			}
		}

		return head;
	}
};

int main()
{
	system("pause");
	return 0;
}