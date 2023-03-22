//#include <iostream>
//using namespace std;
//#include <string>
//
//typedef struct node    // ���嵥������
//{
//	int age;
//	string name;
//	struct node * next;
//}Student;
//
//int countList(Student * head)     // ����������
//{
//	int count = 0;
//	Student * p = head->next;
//	while (p != NULL)
//	{
//		count++;
//		p = p->next;
//	}
//	return count;
//}
//
//void insertList(Student * head, int index)  // �����в�����
//{
//	if (index < 0 || index > countList(head))
//	{
//		throw "out of range";
//	}
//	Student * pre = head;
//	for (int i = 0; i < index; i++)
//	{
//		pre = pre->next;
//	}
//
//
//	Student * newNode = new Student;
//	printf("��������Ҫ�������������֣�");
//	cin >> newNode->age;
//	cin >> newNode->name;
//
//	newNode->next = pre->next;
//	pre->next = newNode;
//}
//
//
//
//void deleteList(Student * head,int index)   // ������ɾ�����
//{
//	if (index < 0 || index > countList(head) - 1)
//	{
//		throw "out of range";
//	}
//	Student * pre = head;
//	for (int i = 0; i < index; i++)
//	{
//		pre = pre->next;
//	}
//	Student * p = pre->next;   // p��ʾҪ��ɾ���Ľ��!!!!!  ����Ҫ��һ��������
//	pre->next = pre->next->next;
//	delete p;
//}
//
//Student * createList1(int n)    // ��������--β�巨
//{
//	Student * head = new Student;
//	Student * pre = head;
//	for (int i = 0; i < n; i++)
//	{
//		Student * p = new Student;
//		printf("�������%dѧ������������֣�", i + 1);
//		cin >> p->age;
//		cin >> p->name;
//
//		pre->next = p;
//		pre = p;
//		p->next = NULL;
//	}
//	return head;
//}
//
//Student * createList2(int n)    // ��������--ͷ�巨
//{
//	Student * head = new Student;
//	head->next = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		Student * p = new Student;
//		printf("�������%dѧ������������֣�", i + 1);
//		cin >> p->age;
//		cin >> p->name;
//
//		p->next = head->next;
//		head->next = p;
//	}
//	return head;
//}
//
//void printList(Student * head)   // ��ӡ����
//{
//	Student * p = head->next;
//	while (p != NULL)
//	{
//		cout << p->age << "," << p->name << endl;
//
//		p = p->next;
//	}
//}
//
//int main()
//{
//	Student * s = createList2(3);
//	printList(s);
//	cout << "������Ϊ" <<countList(s) << endl;
//	insertList(s, 1);
//	printList(s);
//	cout << "�����������Ϊ" << countList(s) << endl;
//	deleteList(s, 1);
//	printList(s);
//	cout << "ɾ����������Ϊ" << countList(s) << endl;
//	system("pause");
//	return 0;
//}