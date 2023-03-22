//#include <iostream>
//using namespace std;
//#include <thread>
//
//void mythread(int a,const string & str1)
//{
//	cout << a << endl;
//	cout << str1.c_str() << endl;
//	cout << this_thread::get_id() << endl;
//	//c_str()函数返回一个指向正规C字符串的指针常量, 内容与本string串相同。
//	//这是为了与c语言兼容，在c语言中没有string类型
//	//故必须通过string类对象的成员函数c_str()把string 对象转换成c中的字符串样式。
//}
//
//int main()
//{
//	int i = 10;
//	int & it = i;
//	char str[] = "i love";
//
//	thread threadobj(mythread, i, string(str));
//	threadobj.detach();
//
//	cout << "end" << endl;
//	system("pause");
//	return 0;
//}