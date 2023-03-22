//#include <iostream>
//using namespace std;
//
//typedef struct doubleNode   //  定义双链表
//{
//	int value;
//	struct doubleNode * last;
//	struct doubleNode * next;
//}DoubleList;
//
//DoubleList * initDoubleList(int num)   // 初始化双链表
//{
//	DoubleList * head = new DoubleList;
//	DoubleList * pre = head;
//	cout << "shuru: ";
//	cin >> pre->value;
//	pre->last = NULL;
//	for (int i = 1; i < num; i++)
//	{
//		DoubleList * p = new DoubleList;
//		cout << "shuru: ";
//		cin >> p->value;
//		pre->next = p;
//		p->last = pre;
//		pre = p;
//	}
//	pre->next = NULL;
//	return head;
//}
//
//void printDoubleList(DoubleList * head)    // 打印双链表
//{
//	while (head != NULL)
//	{
//		cout << head->value << " " << endl;
//		head = head->next;
//	}
//	cout << endl;
//}
//
//DoubleList * reverseDoubleList(DoubleList * head)    // 双链表逆序
//{
//	DoubleList * pre = NULL;
//	DoubleList * next = NULL;
//	while (head != NULL)
//	{
//		next = head->next;
//		head->next = pre;
//		head->last = next;
//		pre = head;
//		head = next;
//	}
//	return pre;
//}
//
//int main()
//{
//	DoubleList * list = initDoubleList(5);
//	printDoubleList(list);
//	DoubleList * reverselist = reverseDoubleList(list);
//	printDoubleList(reverselist);
//	system("pause");
//	return 0;
//}