#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	DWORD dword;   // unsigned long
	WORD word;     // unsigned short
	cout << "WORD大小：" << sizeof(WORD) << endl;
	cout << "DWORD大小：" << sizeof(DWORD) << endl;
	system("pause");
}