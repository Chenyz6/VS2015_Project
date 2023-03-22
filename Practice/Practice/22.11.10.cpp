//#include <stdio.h>
//int main() {
//	int a[3][4] = { 1, 3, 5, 7, 
//					9, 11, 13, 15, 
//					17, 19, 21, 23 };
//	int(*p)[4] = a, i, j, k = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			k = k + *(*(p + i) + j);
//	printf("%d", k);
//	return 0;
//}
//
//下列程序的运行结果是 B1 1 & B2&B1 2 & B2&C 3 & ，请为横线处选择合适的程序
//#include<iostream>
//using namespace std;
//class B1
//{
//public:B1(int i)
//{
//	cout << "B1" << " " << i << "&";
//}
//};
//class B2
//{
//public:
//	B2()
//	{
//		cout << "B2" << "&";
//	}
//};
//class C : public B1, public B2 {
//public:
//	C(int a, int b, int c) :____
//	{
//		indiv = c;
//	cout << "C" << " " << indiv << "&";
//	}
//private:
//	B1 ml;
//	B2 m2;
//	int indiv;
//};
//int main()
//{
//	Cc(1, 2, 3);
//}
//
//
//
//
