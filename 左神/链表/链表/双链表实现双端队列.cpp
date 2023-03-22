//#include <iostream>
//using namespace std;
//
//typedef struct Node
//{
//	int value;
//	struct Node * last;
//	struct Node * next;
//}DoubleList;
//
//class deque
//{
//private:
//	DoubleList * head;
//	DoubleList * tail;
//	int size = 0;
//public:
//	void pushHead(int num)
//	{
//		DoubleList * p = new DoubleList;
//		p->value = num;
//		if (head == NULL)
//		{
//			head = p;
//			tail = p;
//		}
//		else
//		{
//			p->next = head;
//			head->last = p;
//			p->last = NULL;
//			head = p;
//		}
//		size++;
//	}
//	int popHead()
//	{
//		int result;
//		if (head == NULL)
//		{
//			result = NULL;
//		}
//		else if (head == tail)
//		{
//			DoubleList * temp = head;
//			result = head->value;
//			head = NULL;
//			tail = NULL;
//			delete temp;
//		}
//		else
//		{
//			result = head->value;
//			DoubleList * temp = head;
//			head = head->next;
//			head->last = NULL;
//			delete temp;
//		}
//		size--;
//		return result;
//	}
//	void pushTail(int num)
//	{
//		DoubleList * p = new DoubleList;
//		p->value = num;
//		if (tail != NULL)
//		{
//			tail->next = p;
//			p->last = tail;
//			p->next = NULL;
//			tail = p;
//		}
//		else
//		{
//			tail = p;
//			head = p;
//		}
//		size++;
//	}
//	int popTail()
//	{
//		int result;
//		if (tail == NULL)
//		{
//			return NULL;
//		}
//		else if (tail == head)
//		{
//			result = tail->value;
//			DoubleList * temp = tail;
//			tail = NULL;
//			head = NULL;
//			delete temp;
//		}
//		else
//		{
//			result = tail->value;
//			DoubleList * temp = tail;
//			tail = tail->last;
//			tail->next = NULL;
//			delete temp;
//		}
//		size--;
//		return result;
//	}
//};
//
//int main()
//{
//	deque q;
//	q.pushHead(1);
//	q.pushHead(2);
//	q.pushHead(3);
//	q.pushHead(4);
//	q.pushHead(5);
//	cout << q.popHead() << " ";
//	cout << q.popHead() << " ";
//	cout << q.popHead() << " ";
//	cout << q.popHead() << " ";
//	cout << q.popHead() << " ";
//	cout << endl << "----------------" << endl;
//	q.pushTail(1);
//	q.pushTail(2);
//	q.pushTail(3);
//	q.pushTail(4);
//	q.pushTail(5);
//	cout << q.popTail() << " ";
//	cout << q.popTail() << " ";
//	cout << q.popTail() << " ";
//	cout << q.popTail() << " ";
//	cout << q.popTail() << " ";
//	system("pause");
//	return 0;
//}