/*
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

���磬121 �ǻ��ģ��� 123 ���ǡ�


ʾ�� 1��

���룺x = 121
�����true
ʾ�� 2��

���룺x = -121
�����false
���ͣ��������Ҷ�, Ϊ -121 �� ���������, Ϊ 121- �����������һ����������
ʾ�� 3��

���룺x = 10
�����false
���ͣ����������, Ϊ 01 �����������һ����������*/
#include <string>
using namespace std;
#include <iostream>
//#include <algorithm>
class Solution {
public:
	bool isPalindrome(int x) {
		//string str = to_string(x);
		//cout << str << endl;
		//string result = str;
		//reverse(result.begin(),result.end());
		//cout << result << endl;
		//if (str == result)
		//{
		//	return true;
		//}
		//else
		//{
		//	return false;
		//}
		int x1 = x;
		int y = 0;
		while (x != 0)
		{
			y = y * 10 + x % 10;
			x /= 10;
		}
		if (x1 == y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Solution s;
	bool b = s.isPalindrome(100121);
	if (b == true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}