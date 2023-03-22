#include<iostream>
using namespace std;
#include <string>
#include <map>
class Solution {
private:
	map<char, int> m = {
		{ 'I', 1 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'D', 500 },
		{ 'M', 1000 },
	};
public:
	int romanToInt(string s) {
		int sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			int value = m[s[i]];
			if ((i < s.size() - 1) && value < m[s[i + 1]])
			{
				sum -= value;
			}
			else
			{
				sum += value;
			}
		}
		return sum;
	}
};

int main()
{
	string str = "MCMXCIV";
	Solution s;
	int result = s.romanToInt(str);
	cout << result << endl;
	system("pause");
	return 0;
}