#include<iostream>
using namespace std;
#include <fstream>
int main()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 0;
	}
	
	//��һ��
	//char buffer[200] = { 0 };
	//while (ifs >> buffer)
	//{
	//	cout << buffer << endl;
	//}

	//�ڶ���
	//char buffer[1024] = { 0 };
	//while (ifs.getline(buffer,sizeof(buffer)))
	//{
	//	cout << buffer << endl;
	//}

	//������
	//string buffer;
	//while ( getline(ifs,buffer))
	//{
	//	cout << buffer << endl;
	//}
	ifs.close();
	system("pause");
	return 0;
}