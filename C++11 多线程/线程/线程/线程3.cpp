//#include <iostream>
//using namespace std;
//#include <thread>
//
//void mythread(int a,const string & str1)
//{
//	cout << a << endl;
//	cout << str1.c_str() << endl;
//	cout << this_thread::get_id() << endl;
//	//c_str()��������һ��ָ������C�ַ�����ָ�볣��, �����뱾string����ͬ��
//	//����Ϊ����c���Լ��ݣ���c������û��string����
//	//�ʱ���ͨ��string�����ĳ�Ա����c_str()��string ����ת����c�е��ַ�����ʽ��
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