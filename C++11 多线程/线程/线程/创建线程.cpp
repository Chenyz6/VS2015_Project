//#include <iostream>
//using namespace std;
//#include <thread>
//
//void mythread()
//{
//	cout << "thread begin" << endl;
//
//	//while (1)
//	//{
//
//	//}
//
//	cout << "thread end" << endl;
//}
//
//class TA 
//{
//public:
//	int m_a;
//	TA(int a) : m_a(a) {
//		cout << "调用了构造函数" << endl;
//	};
//
//	TA(const TA & ta) : m_a(ta.m_a)
//	{
//		cout << "调用了拷贝构造函数" << endl;
//	};
//
//	~TA()
//	{
//		cout << "调用了析构函数" << endl;
//	};
//
//	void operator()()  // 不能带参数
//	{
//		cout << "线程operator（）开始执行了" << endl;
//		cout << "m_a的值1为：" << m_a << endl;
//		cout << "m_a的值2为：" << m_a << endl;
//		cout << "m_a的值3为：" << m_a << endl;
//		cout << "m_a的值4为：" << m_a << endl;
//		cout << "m_a的值5为：" << m_a << endl;
//		cout << "m_a的值6为：" << m_a << endl;
//		cout << "线程operator（）结束了" << endl;
//	}
//
//};
//
//
//int main()
//{
//	thread mytobj(mythread);  // 创建mytobj对象  线程执行起点（入口）mythread  mythread开始执行
//	
//	// mytobj.join(); // join 加入/汇合 阻塞主线程  让主线程等待子线程执行完毕  然后子线程和主线程汇合
//
//	if (mytobj.joinable())   // 判断是否可以join或者detach
//	{
//		mytobj.join();
//	}
//
//	//mytobj.detach();  // 与主线程关联的子线程失去与这个主线程的关联，此时子线程就会驻留在后台运行
//
//	TA ta(1);
//	thread mytobj2(ta);
//	mytobj2.join();
//
//
//	//lambda
//	auto mylamthread = [] {
//		cout << "lambda表达式的线程" << endl;
//	};
//
//	thread mytobj3(mylamthread);
//	mytobj3.join();
//
//	int a = 10;
//	TA ta1(a);   // 不能传引用或者指针
//	thread mytobj4(ta1);
//	mytobj4.join();
//
//	cout << "main thread" << endl;
//	system("pause");
//	return 0;
//}