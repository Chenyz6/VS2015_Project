//#include <iostream>
//using namespace std;
//
//typedef struct Node
//{
//	int value;
//	struct Node *next;
//}List;
//
//class stack
//{
//private:
//	List * head;
//	int size = 0;
//public:
//	bool isEmpty()
//	{
//		return size == 0;
//	}
//	int my_size()
//	{
//		return size;
//	}
//	void push(int num)
//	{
//		List * p = new List;
//		p->value = num;
//		if (head == NULL)
//		{
//			head = p;
//		}
//		else
//		{
//			p->next = head;  // !!!!
//			head = p;
//		}
//		size++;
//	}
//	int pop()
//	{
//		int result = 0;
//		if (head != NULL)
//		{
//			result = head->value;
//			List * temp = head;
//			head = head->next;
//			delete temp;
//		}
//		size--;
//		return result;
//	}
//};
//
//int main()
//{
//	stack s;
//	cout << "容量是否为空:" << (s.isEmpty() ? "true" : "false") << endl;
//	cout << "容量大小： " << s.my_size() << endl;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	s.push(5);
//	cout << "容量是否为空:" << (s.isEmpty() ? "true" : "false") << endl;
//	cout << "容量大小： " << s.my_size() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << s.pop() << endl;
//	cout << "容量是否为空:" << (s.isEmpty() ? "true" : "false") << endl;
//	cout << "容量大小： " << s.my_size() << endl;
//	system("pause");
//	return 0;
//}