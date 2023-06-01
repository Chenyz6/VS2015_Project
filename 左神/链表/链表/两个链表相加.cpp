//#include<iostream>
//using namespace std;
//
//typedef struct node
//{
//	int value;
//	struct node * next;
//}List;
//
//List * insertList(int n)  // 插入元素
//{
//	List * head = new List;
//	List * pre = head;
//	cout << "插入列表元素：";
//	cin >> head->value;
//	for (int i = 0; i < n - 1; i++)
//	{
//		List * p = new List;
//		cout << "插入列表元素：";
//		cin >> p->value;
//		pre->next = p;
//		pre = p;
//		p->next = NULL;
//	}
//	return head;
//}
//
//void printList(List * p)  // 打印列表
//{
//	while (p != NULL)
//	{
//		cout << p->value << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//int lengthList(List * p)
//{
//	int length = 0;
//	while (p != NULL)
//	{
//		length++;
//		p = p->next;
//	}
//	return length;
//}
//
//List * addList(List * head1, List * head2)
//{
//	int len1 = lengthList(head1);
//	int len2 = lengthList(head2);
//	List * l = new List;
//	List * s = new List;
//	List * head = new List;
//	int advance = 0;
//	List * last = new List;
//	if (lengthList(head1) >= lengthList(head2))
//	{
//		l = head1;
//		s = head2;
//		head = l;
//	}
//	else
//	{
//		l = head2;
//		s = head1;
//		head = l;
//	}
//	while (s != NULL)
//	{
//		int sum = l->value + s->value + advance;
//		advance = sum / 10;
//		l->value = sum % 10;
//		last = l;
//		l = l->next;
//		s = s->next;
//	}
//	while (l != NULL)
//	{
//		int sum = l->value + advance;
//		advance = sum / 10;
//		l->value = sum % 10;
//		last = l;
//		l = l->next;
//	}
//	if (advance == 1)
//	{
//		List * p = new List;
//		last->next = p;
//		p->value = 1;
//		p->next = NULL;
//	}
//	return head;
//}
//
//int main()
//{
//	cout << "插入第一个列表元素" << endl;
//	List * p1 = insertList(3);
//	printList(p1);
//	cout << "length:" << lengthList(p1) << endl;
//	cout << "插入第二个列表元素" << endl;
//	List * p2 = insertList(5);
//	printList(p2);
//	cout << "length:" << lengthList(p2) << endl;
//	cout << "--------------------" << endl;
//	List * head = addList(p1, p2);
//	printList(head);
//	system("pause");
//	return 0;
//}
