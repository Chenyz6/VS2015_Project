/*
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。
示例 1：

输入：digits = [1,2,3]
输出：[1,2,4]
解释：输入数组表示数字 123。
示例 2：

输入：digits = [4,3,2,1]
输出：[4,3,2,2]
解释：输入数组表示数字 4321。
示例 3：

输入：digits = [0]
输出：[1]
*/
#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int result = 0;
//		int j = 1;
//		if (digits[0] == 0)
//		{
//			digits.pop_back();
//			digits.push_back(1);
//		}
//		for (int i = digits.size() - 1; i >= 0; i--)
//		{
//			result += digits[i] * j;
//			j *= 10;
//		}
//		vector<int> v;
//		v.push_back(result + 1);
//		return v;
//	}
//};

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		if (digits[0] == 0)
		{
			digits[0] = 1;
			return digits;
		}
		digits[digits.size() - 1]++;
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] >= 10)
			{
				digits[i] = digits[i] % 10;
				if (i - 1 < 0)
				{
					vector<int>::iterator it = digits.begin();
					digits.insert(it, 1);
				}
				else
				{
					digits[i - 1]++;
				}
			}
		}
		return digits;
	}
};

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(8);
	v.push_back(7);
	v.push_back(6);
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.push_back(0);
	vector<int> result = s.plusOne(v);
	system("pause");
}