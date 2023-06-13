/*给你两个二进制字符串 a 和 b ，以二进制字符串的形式返回它们的和。

示例 1：

输入 : a = "11", b = "1"
	输出："100"
	示例 2：

	输入：a = "1010", b = "1011"
	输出："10101"*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int alen = a.size() - 1;
		int blen = b.size() - 1;
		int temp = 0;
		if (alen <= blen)
		{
			a.insert(0, blen - alen,'0');
			alen = blen;
		}
		else
			b.insert(0, alen - blen, '0');
		for (int i = alen; i >= 0; i--)
		{
			if (a[i] + b[i] - '0' - '0' + temp == 2)
			{
				temp = 1;
				a[i] = '0';
			}
			else if (a[i] + b[i] - '0' - '0' + temp == 3)
			{
				temp = 1;
				a[i] = '1';
			}
			else if (a[i] + b[i] - '0' - '0' + temp == 1)
			{
				temp = 0;
				a[i] = '1';
			}
			else
			{
				a[i] = a[i] + b[i] - '0';
			}
		}
		if (temp == 1)
		{
			a.insert(0, "1");
		}
		return a;
	}
};


// 官方题解
class Solution1 {   
public:
	string addBinary(string a, string b) {
		string ans;
		reverse(a.begin(), a.end());    //  110      011
		reverse(b.begin(), b.end());    //  10       01

		int n = max(a.size(), b.size()), carry = 0;
		for (size_t i = 0; i < n; ++i) {
			carry += i < a.size() ? (a.at(i) == '1') : 0;
			carry += i < b.size() ? (b.at(i) == '1') : 0;
			ans.push_back((carry % 2) ? '1' : '0');
			carry /= 2;
		}

		if (carry) {
			ans.push_back('1');
		}
		reverse(ans.begin(), ans.end());

		return ans;
	}
};


int main()
{
	string a = "0001";
	string b = "1";
	Solution s;
	cout << s.addBinary(a, b) << endl;
	system("pause");
}