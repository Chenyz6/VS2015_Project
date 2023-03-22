#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		if (s.size() % 2 == 1)
		{
			return false;
		}
		map <char, char> m = {
			{')','('},
			{']','['},
			{'}','{'} };
		stack <char> sta;
		if (s.empty())
		{
			return false;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (!sta.empty())
			{
				if (sta.top() == m[s[i]])
				{
					sta.pop();
				}
				else
				{
					sta.push(s[i]);
				}
			}
			else
			{
				sta.push(s[i]);
			}
		}
		return sta.empty();
	}
};

int main()
{
	string str = "([)]";
	Solution sol;
	bool b = sol.isValid(str);
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