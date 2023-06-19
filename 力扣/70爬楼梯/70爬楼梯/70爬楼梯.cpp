/*
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

示例 1：

输入：n = 2
输出：2
解释：有两种方法可以爬到楼顶。
1. 1 阶 + 1 阶
2. 2 阶
示例 2：

输入：n = 3
输出：3
解释：有三种方法可以爬到楼顶。
1. 1 阶 + 1 阶 + 1 阶
2. 1 阶 + 2 阶
3. 2 阶 + 1 阶*/
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		if (n == 1 || n == 2)
		{
			return 1;
		}
		int result = 0,temp2 = 1;
		for (int temp1 = n; temp1 >= 0; temp1--)
		{
			if (temp1 * 1 == n)
			{
				result++;
				continue;
			}
			if ((temp1 - 1) * 1 + (temp2) * 2 == n)
			{
				result += temp1;
				temp2++;
				continue;
			}
			if ((temp1 - 1) * 1 + (temp2)* 2 == n)
			{
				result += temp1;
				temp2++;
				continue;
			}
			break;
		}
		return result;
	}
};

// 暴力递归
class Solution1 {
public:
		int climbStairs(int n) {
		if (n == 1) {
			return 1;
		}
		if (n == 2) {
			return 2;
		}
		return climbStairs(n - 1) + climbStairs(n - 2);
	}
};

// 带记录的递归
class Solution2 {
public:
	int climbStairs(int n) {
		unordered_map<int, int> m;
		if (n == 1) {
			return 1;
		}
		if (n == 2) {
			return 2;
		}
		unordered_map<int, int>::iterator pos = m.find(n);
		if (pos != m.end())

		{
			cout << "--------" << n << " " << m.count(n) << endl;
			return m[n];
		}
		else
		{
			m.insert(pair<int, int>(n, climbStairs(n - 1) + climbStairs(n - 2)));
			cout << n << " " << m.count(n) << endl;
			return m[n];
		}
	}
};

int main()
{
	Solution2 s;
	cout << s.climbStairs(10) << endl;
	system("pause");
}