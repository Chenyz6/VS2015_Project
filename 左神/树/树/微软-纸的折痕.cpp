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
//void process(int n, int N, bool result)  // n表示当前的节点层数，N表示总共的层数，result表示凹或凸
//{
//	if (n > N)
//	{
//		return;
//	}
//	process(n + 1, N, true);   // 凹-true 凸-false
//	cout << (result ? "凹 " : "凸 ");
//	process(n + 1, N, false);
//}
//
//int main()
//{
//	printNode(3);
//	cout << endl;
//	system("pause");
//}