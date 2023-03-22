#include <iostream>
using namespace std;

typedef struct Node
{
	int val;
	struct Node * next;
}ListNode;

ListNode * getKGroupEnd(ListNode * start,int k)  // ���ڵ�ͷ��β
{
	while (--k != 0 && start != NULL)
	{
		start = start->next;
	}
	return start;
}

void my_reverse(ListNode * start, ListNode * end)
{
	end = end->next;
	ListNode * pre = NULL;
	ListNode * cur = start;
	ListNode * next = NULL;
	while (cur != end)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	start->next = end;
}

ListNode * reverseKGroup(ListNode * head, int k)
{
	ListNode * start = head;
	ListNode * end = getKGroupEnd(start, k);
	if (end == NULL)
	{
		return head;
	}
	head = end;
	my_reverse(start, end);
	ListNode * lastEnd = start;
	while (lastEnd->next != NULL)
	{
		start = lastEnd->next;
		end = getKGroupEnd(start, k);
		if (end == NULL)
		{
			return head;
		}
		my_reverse(start, end);
		lastEnd->next = end;
		lastEnd = start;
	}
	return head;
}

ListNode * createList(int n)    // ��������--β�巨
{
	ListNode * head = new ListNode;
	ListNode * pre = head;
	for (int i = 0; i < n; i++)
	{
		ListNode * p = new ListNode;
		p->val = i + 1;
		pre->next = p;
		pre = p;
		p->next = NULL;
	}
	return head;
}

void printList(ListNode * head)   // ��ӡ����
{
	ListNode * p = head->next;
	while (p != NULL)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}

int main()
{
	ListNode * list = createList(5);
	printList(list);
	ListNode * list1 = reverseKGroup(list, 2);
	printList(list1);
	system("pause");
	return 0;
}