//#include <iostream>
//using namespace std;
//#include <functional>
//#include <vector>
//#include <algorithm>
//
//void myCompare(int val)
//{
//	cout << val << endl;
//}
//
//class my_compare
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(string str,int a)
//	{
//		name = str;
//		age = a;
//	}
//	string name;
//	int age;
//
//	bool operator==(const Person & per)
//	{
//		if (per.age == this->age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//void test()
//{
//	vector<Person> p;
//	Person p1("����", 10);
//	Person p2("����", 80);
//	Person p3("С��", 40);
//	Person p4("����", 20);
//	Person p5("С��", 10);
//	Person p6("С��", 70);
//
//
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	p.push_back(p5);
//
//	vector<Person>::iterator it = find(p.begin(), p.end(), p6);
//	if (it == p.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << endl;
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
