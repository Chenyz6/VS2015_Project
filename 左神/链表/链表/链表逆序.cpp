//#include<iostream>
//using namespace std;
//
//typedef struct Node    //  ���嵥����
//{
//	int value;
//	struct Node *next;
//}List;
//
//typedef struct doubleNode   //  ����˫����
//{
//	int value;
//	struct doubleNode * last;
//	struct doubleNode * next;
//}doubleList;
//
//List * initList(int num)   // ��ʼ��������
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
//	pre->next = NULL;
//	return head;
//}
//
//void printList(List * head)   // ��ӡ������
//{
//	if (head == NULL)
//	{
//		cout << "error";
//		return;
//	}
//	List * p = head;
//	while (p != NULL)
//	{
//		cout << p->value << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//List * insertList(List * node, int index, int num)  //  ����Ԫ��
//{
//	List * p = new List;
//	p->value = num;
//	List * pre = node;
//	for (int i = 0; i < index - 2; i++)
//	{
//		pre = pre->next;
//	}
//	p->next = pre->next;
//	pre->next = p;
//	return node;
//}
//
//List * deleteList(List * node, int index)    // ɾ��Ԫ��
//{
//	if (index < 0 || index > 5)
//	{
//		cout << "error" << endl;
//	}
//	List * pre = node;
//	for (int i = 0; i < index - 2; i++)
//	{
//		pre = pre->next;
//	}
//	pre->next = pre->next->next;
//	return node;
//}
//
//List * reverseList(List * head)   // ����������
//{
//	List * pre = NULL;
//	List * next = NULL;
//	while (head != NULL)
//	{
//		next = head->next;
//		head->next = pre;
//		pre = head;
//		head = next;
//	}
//	return pre;
//}
//
//int main()
//{
//	List * list = initList(5);
//	printList(list);
//	//insertList(list, 3, 100);
//	//printList(list);
//	//deleteList(list,3);
//	//printList(list);
//	List * head = reverseList(list);    // ע�ⷵ��ֵ����������
//	printList(head);
//	system("pause");
//	return 0;
//}