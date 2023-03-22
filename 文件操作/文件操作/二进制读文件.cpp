#include<iostream>
using namespace std;
#include<fstream>

class Person
{
public:
	char arry[64];
	int a;
};

void test()
{
	ifstream ifs("Person.txt", ios::in | ios::binary);
	Person p = { "уехЩ" , 18 };
	ifs.read((char *)(&p), sizeof(p));
	cout << p.arry << "  " << p.a << endl;
	ifs.close();
}

int main()
{
	test();
	system("pause");
	return 0;
}