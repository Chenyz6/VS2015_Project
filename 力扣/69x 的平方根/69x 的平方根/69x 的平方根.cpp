/*给你一个非负整数 x ，计算并返回 x 的 算术平方根 。

由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。

注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。

示例 1：
输入：x = 4
输出：2
示例 2：

输入：x = 8
输出：2
解释：8 的算术平方根是 2.82842..., 由于返回类型是整数，小数部分将被舍去。
*/
#include <iostream>
using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		if (x == 0)
		{
			return 0;
		}
		if (x == 1)
		{
			return 1;
		}
		for (long i = 0; i <= x; i++)
		{
			if (i * i < x)
			{
				continue;
			}
			else if(i * i == x)
			{
				return i;
			}
			return i - 1;
		}
		return -1;
	}
};

// 二分查找
class Solution1 {
public:
	int mySqrt(int x) {
		int l = 0, r = x, ans = -1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if ((long long)mid * mid <= x) {
				ans = mid;
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		return ans;
	}
};

int main()
{
#define num 2
	Solution s;
	cout << s.mySqrt(num) << endl;
	cout << pow(num, 0.5) << endl;
	system("pause");
}