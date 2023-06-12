/*给你两个二进制字符串 a 和 b ，以二进制字符串的形式返回它们的和。

示例 1：

输入 : a = "11", b = "1"
	输出："100"
	示例 2：

	输入：a = "1010", b = "1011"
	输出："10101"*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int alen = a.size() - 1;
		int blen = b.size() - 1;
		int temp = 0, i = 0, j = 0;
		if (alen <= blen)
		{
			for (int i = alen; i >= 0; i--)
			{
				if (a[i] + b[blen] + temp == 2)
				{
					temp = 1;
					b[blen] = 0;
				}
				else if (a[i] + b[blen] + temp == 3)
				{
					temp = 1;
					b[blen] = 1;
				}
				else
				{
					b[blen] = a[i] + b[blen];
				}
			}
		}

		return b;
	}
};

int main()
{
	string a = "0000";
	string b = "1011";
	Solution s;
	cout << s.addBinary(a, b) << endl;
	system("pause");
}