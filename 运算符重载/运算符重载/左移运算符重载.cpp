//#include <iostream>
//using namespace std;
//class Person
//{
//	friend ostream & operator<< (ostream & out, Person & p);
//public:
//	Person(int a,int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream & operator<< (ostream & out, Person & p)
//{
//	out << "m_a = " << p.m_a << "m_b = " << p.m_b;
//	return out;
//}
//
//void test()
//{
//	Person p(10, 10);
//	cout << p << " hello " << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//}