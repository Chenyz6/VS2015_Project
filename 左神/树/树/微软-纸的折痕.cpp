//#include <iostream>
//using namespace std;
//
//void process(int n, int N, bool result);
//
//struct Node
//{
//	int value;
//	Node * left;
//	Node * right;
//};
//
//void printNode(int n)
//{
//	process(1, n, true);
//}
//
//void process(int n, int N, bool result)  // n��ʾ��ǰ�Ľڵ������N��ʾ�ܹ��Ĳ�����result��ʾ����͹
//{
//	if (n > N)
//	{
//		return;
//	}
//	process(n + 1, N, true);   // ��-true ͹-false
//	cout << (result ? "�� " : "͹ ");
//	process(n + 1, N, false);
//}
//
//int main()
//{
//	printNode(3);
//	cout << endl;
//	system("pause");
//}