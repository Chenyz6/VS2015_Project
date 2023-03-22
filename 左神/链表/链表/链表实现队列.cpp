//#include <iostream>
//using namespace std;
//
//typedef struct Node
//{
//	int value;
//	struct Node * next;
//}LinkList;
//
//class MyQueue
//{
//private:
//	LinkList * head;
//	LinkList * tail;
//public:
//	int size = 0;
//
//public:
//	bool isEmpty()
//	{
//		return size == 0;
//	}
//
//	int m_size()
//	{
//		return size;
//	}
//
//	void insert(int value)
//	{
//		LinkList * p = new LinkList;
//		p->value = value;
//		if (tail == NULL)
//		{
//			head = p;
//			tail = p;
//		}
//		else
//		{
//			tail->next = p;
//			tail = p;
//		}
//		size++;
//	}
//
//	int pop()
//	{
//		int result = NULL;
//		if (head != NULL)
//		{
//			result = head->value;
//			LinkList * temp = head;  // 删除当前节点
//			head = head->next;
//			size--;
//			delete temp;
//		}
//		else
//		{
//			tail = NULL;  // 如果头节点为空 超过了尾节点 则需要将尾节点置为空
//		}
//		return result;
//	}
//};
//
//
//int main()
//{
//	MyQueue queue;    //  队列测试案例
//	cout << (queue.isEmpty() ? "true" : "false") << endl;
//	queue.insert(1);
//	queue.insert(2);
//	queue.insert(3);
//	queue.insert(4);
//	queue.insert(5);
//	cout << "size == " << queue.m_size() << endl;
//	cout << queue.pop() << endl;
//	cout << queue.pop() << endl;
//	cout << queue.pop() << endl;
//	cout << queue.pop() << endl;
//	cout << queue.pop() << endl;
//	system("pause");
//	return 0;
//}