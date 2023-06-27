/*给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

示例 1:

输入: s = "abcabcbb"
输出: 3
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
	 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。*/
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {  
		if (s.size() == 1)
		{
			return 1;
		}
		if (s.size() == 0)
		{
			return 0;
		}
		int result = 1;
		for (int i = 0; i < s.size(); i++)
		{
			int num = 1;
			for (int j = i + 1,k = 1; j < s.size(); j++,k++)  // "pwwkew";
			{
				string sub = s.substr(i, k);
				//cout << sub << endl;
				if (isnotSubstr(sub, s[j]) == 0)
				{
					break;
				}
				else
				{
					num += 1;
					continue;
				}
			}
			//cout << num << endl;
			result = max(result,num);
		}
		return result;
	}

	int isnotSubstr(string s, char c)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == c)
			{
				return 0;
			}
			else
				continue;
		}
		return 1;
	}
};


class Solution1_official {
public:
	int lengthOfLongestSubstring(string s) {
		// 哈希集合，记录每个字符是否出现过
		unordered_set<char> occ;
		int n = s.size();
		// 右指针，初始值为 -1，相当于我们在字符串的左边界的左侧，还没有开始移动
		int rk = -1, ans = 0;
		// 枚举左指针的位置，初始值隐性地表示为 -1
		for (int i = 0; i < n; ++i) {
			if (i != 0) {
				// 左指针向右移动一格，移除一个字符
				occ.erase(s[i - 1]);
			}
			while (rk + 1 < n && !occ.count(s[rk + 1])) {
				// 不断地移动右指针
				occ.insert(s[rk + 1]);
				++rk;
			}
			// 第 i 到 rk 个字符是一个极长的无重复字符子串
			ans = max(ans, rk - i + 1);
		}
		return ans;
	}
};


int main()
{
	string str = "bbbbb";
	Solution s;
	cout << s.lengthOfLongestSubstring(str) << endl;
	system("pause");
}