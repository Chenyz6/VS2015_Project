//#include <iostream>
//using namespace std;
//#include <string>
///*
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//每个右括号都有一个对应的相同类型的左括号。
//
//
//示例 1：
//输入：s = "()"
//输出：true
//示例 2：
//输入：s = "()[]{}"
//输出：true
//示例 3：
//输入：s = "(]"
//输出：false
//*/
//class Solution {
//public:
//	bool isValid(string s) {
//		int small = 0;
//		int mid = 0;
//		int big = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			switch (s[i]) 
//			{
//			case '(':
//				small++;
//				break;
//			case ')':
//				if (i > 0 && s[i-1] == '(')
//				{
//					small--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			case '[':
//				mid++;
//				break;
//			case ']':
//				if (i > 0 && s[i - 1] == '[')
//				{
//					mid--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			case '{':
//				big++;
//				break;
//			case '}':
//				if (i > 0 && s[i - 1] == '{')
//				{
//					big--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//		if (small == 0 && mid == 0 && big == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//int main()
//{
//	string str = "([)]" ;
//	Solution sol;
//	bool b = sol.isValid(str);
//	if (b == true)
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	system("pause");
//	return 0;
//}