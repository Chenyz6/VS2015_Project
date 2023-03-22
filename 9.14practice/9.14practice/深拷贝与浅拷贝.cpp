//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "调用构造函数" << endl;
//	}
//
//	Person(int age , int weight)
//	{
//		m_age = age;
//		m_weight = new int(weight);
//		cout << "调用构造函数" << endl;
//	}
//	Person(const Person & p)
//	{
//		m_age = p.m_age;
//		m_weight = new int(*p.m_weight);
//		cout << "调用拷贝函数" << endl;
//	}
//
//	~Person()
//	{
//		if (m_weight != NULL)
//		{
//			delete m_weight;
//			m_weight = NULL;
//		}
//		cout << "调用析构函数" << endl;
//	}
//public:
//	int m_age;
//	int * m_weight;
//};
//
//void test()
//{
//	Person p1(100, 200);
//	Person p2(p1);
//	cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_weight << endl;
//	cout << "p1的年龄： " << p2.m_age << " 身高： " << *p2.m_weight << endl;
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//}