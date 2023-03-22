//#include <iostream>
//using namespace std;
//
//typedef struct Node
//{
//	int value;
//	struct Node * next;
//}List;
//
//typedef struct DNode
//{
//	int value;
//	struct DNode * last;
//	struct DNode * next;
//}doubleList;
//
//List * initList(int num)
//{
//	List * head = new List;
//	cout << "shuru: ";
//	cin >> head->value;
//	List * pre = head;
//	for (int i = 1; i < num; i++)
//	{
//		List * p = new List;
//		cout << "shuru: ";
//		cin >> p->value;
//		pre->next = p;
//		pre = p;
//	}
//	pre->next = NULL;   // !!!!!!!
//	return head;
//}
//
//List * reverseList(List * head)
//{
//	List * last = NULL;
//	List * next = NULL;
//	while (head != NULL)
//	{
//		next = head->next;
//		head->next = last;
//		last = head;
//		head = next;
//	}
//	return last;
//}
//
//void printList(List * head)
//{
//	List * pre = head;
//	while (pre != NULL)
//	{
//		cout << pre->value << " ";
//		pre = pre->next;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	List * list =  initList(3);
//	printList(list);
//	List * reverselist = reverseList(list);
//	printList(reverselist);
//	system("pause");
//	return 0;
//}