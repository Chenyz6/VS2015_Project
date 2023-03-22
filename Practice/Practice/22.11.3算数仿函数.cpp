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
//	Person p1("张三", 10);
//	Person p2("李四", 80);
//	Person p3("小明", 40);
//	Person p4("李明", 20);
//	Person p5("小红", 10);
//	Person p6("小红", 70);
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
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << endl;
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
