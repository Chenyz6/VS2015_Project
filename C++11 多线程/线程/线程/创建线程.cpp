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
//		cout << "�����˹��캯��" << endl;
//	};
//
//	TA(const TA & ta) : m_a(ta.m_a)
//	{
//		cout << "�����˿������캯��" << endl;
//	};
//
//	~TA()
//	{
//		cout << "��������������" << endl;
//	};
//
//	void operator()()  // ���ܴ�����
//	{
//		cout << "�߳�operator������ʼִ����" << endl;
//		cout << "m_a��ֵ1Ϊ��" << m_a << endl;
//		cout << "m_a��ֵ2Ϊ��" << m_a << endl;
//		cout << "m_a��ֵ3Ϊ��" << m_a << endl;
//		cout << "m_a��ֵ4Ϊ��" << m_a << endl;
//		cout << "m_a��ֵ5Ϊ��" << m_a << endl;
//		cout << "m_a��ֵ6Ϊ��" << m_a << endl;
//		cout << "�߳�operator����������" << endl;
//	}
//
//};
//
//
//int main()
//{
//	thread mytobj(mythread);  // ����mytobj����  �߳�ִ����㣨��ڣ�mythread  mythread��ʼִ��
//	
//	// mytobj.join(); // join ����/��� �������߳�  �����̵߳ȴ����߳�ִ�����  Ȼ�����̺߳����̻߳��
//
//	if (mytobj.joinable())   // �ж��Ƿ����join����detach
//	{
//		mytobj.join();
//	}
//
//	//mytobj.detach();  // �����̹߳��������߳�ʧȥ��������̵߳Ĺ�������ʱ���߳̾ͻ�פ���ں�̨����
//
//	TA ta(1);
//	thread mytobj2(ta);
//	mytobj2.join();
//
//
//	//lambda
//	auto mylamthread = [] {
//		cout << "lambda���ʽ���߳�" << endl;
//	};
//
//	thread mytobj3(mylamthread);
//	mytobj3.join();
//
//	int a = 10;
//	TA ta1(a);   // ���ܴ����û���ָ��
//	thread mytobj4(ta1);
//	mytobj4.join();
//
//	cout << "main thread" << endl;
//	system("pause");
//	return 0;
//}