//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "���ù��캯��" << endl;
//	}
//
//	Person(int age , int weight)
//	{
//		m_age = age;
//		m_weight = new int(weight);
//		cout << "���ù��캯��" << endl;
//	}
//	Person(const Person & p)
//	{
//		m_age = p.m_age;
//		m_weight = new int(*p.m_weight);
//		cout << "���ÿ�������" << endl;
//	}
//
//	~Person()
//	{
//		if (m_weight != NULL)
//		{
//			delete m_weight;
//			m_weight = NULL;
//		}
//		cout << "������������" << endl;
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
//	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_weight << endl;
//	cout << "p1�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_weight << endl;
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//}