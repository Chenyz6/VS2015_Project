//#include <iostream>
//using namespace std;
//#include <string>
//
//typedef struct node    // 定义单向链表
//{
//	int age;
//	string name;
//	struct node * next;
//}Student;
//
//int countList(Student * head)     // 查找链表长度
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
//void insertList(Student * head, int index)  // 链表中插入结点
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
//	printf("请输入新要插入的年龄和名字：");
//	cin >> newNode->age;
//	cin >> newNode->name;
//
//	newNode->next = pre->next;
//	pre->next = newNode;
//}
//
//
//
//void deleteList(Student * head,int index)   // 链表中删除结点
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
//	Student * p = pre->next;   // p表示要被删除的结点!!!!!  必须要用一个来接收
//	pre->next = pre->next->next;
//	delete p;
//}
//
//Student * createList1(int n)    // 创建链表--尾插法
//{
//	Student * head = new Student;
//	Student * pre = head;
//	for (int i = 0; i < n; i++)
//	{
//		Student * p = new Student;
//		printf("请输入第%d学生的年龄和名字：", i + 1);
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
//Student * createList2(int n)    // 创建链表--头插法
//{
//	Student * head = new Student;
//	head->next = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		Student * p = new Student;
//		printf("请输入第%d学生的年龄和名字：", i + 1);
//		cin >> p->age;
//		cin >> p->name;
//
//		p->next = head->next;
//		head->next = p;
//	}
//	return head;
//}
//
//void printList(Student * head)   // 打印链表
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
//	cout << "链表长度为" <<countList(s) << endl;
//	insertList(s, 1);
//	printList(s);
//	cout << "插入后链表长度为" << countList(s) << endl;
//	deleteList(s, 1);
//	printList(s);
//	cout << "删除后链表长度为" << countList(s) << endl;
//	system("pause");
//	return 0;
//}