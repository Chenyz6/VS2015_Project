//#include "iostream"
//using namespace std;
//#include <string>
//
//class Person
//{
//public:
//	Person()  //构造函数  有参数 可以重载
//		//构造函数 函数名和类名相同
//	{
//		cout << "Person构造函数被调用" << endl;
//	}
//
//	Person(int a)  
//	{
//		age = a;
//		cout << "Person有参构造函数被调用" << endl;
//	}
//
//	Person(const Person &p)  //拷贝构造函数
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person拷贝构造函数被调用" << endl;
//	}
//
//	~Person() //析构函数  无参数  不可以重载
//	{
//		cout << "Person析构函数被调用" << endl;
//	}
//private:
//	int age;
//};
//
//void test()
//{
//	//1.括号法
//	//Person p;
//	//Person p2(10);
//	//Person p3(p2);
//	////2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//	//3.隐式转换法
//	Person p4 = 10;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
