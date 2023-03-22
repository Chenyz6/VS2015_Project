#include<iostream>
using namespace std;
#include <fstream>
int main()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}
	
	//第一种
	//char buffer[200] = { 0 };
	//while (ifs >> buffer)
	//{
	//	cout << buffer << endl;
	//}

	//第二种
	//char buffer[1024] = { 0 };
	//while (ifs.getline(buffer,sizeof(buffer)))
	//{
	//	cout << buffer << endl;
	//}

	//第三种
	//string buffer;
	//while ( getline(ifs,buffer))
	//{
	//	cout << buffer << endl;
	//}
	ifs.close();
	system("pause");
	return 0;
}