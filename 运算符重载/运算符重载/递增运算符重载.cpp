//#include <iostream>
//using namespace std;
//
//class myint
//{
//	friend ostream & operator<< (ostream& cout, myint a);
//public:
//	myint()
//	{
//		m_a = 0;
//	}
//
//	myint & operator++()
//	{
//		m_a++;
//		return *this;
//	}
//
//	myint operator++(int)
//	{
//		myint temp = *this;
//		m_a++;
//		return temp;
//	}
//
//private:
//	int m_a;
//};
//
//ostream & operator<< (ostream& cout, myint a)
//{
//    cout << a.m_a;
//	return cout;
//}
//
//
//
//void test()
//{
//	myint a;
//	cout << a++ << endl;
//	cout << a << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//}