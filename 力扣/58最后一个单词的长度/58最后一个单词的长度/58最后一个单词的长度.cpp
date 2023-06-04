#include <iostream>
using namespace std;
#include <string>

class Solution {
public:
	int lengthOfLastWord(string s) {
		int length = s.size();
		int i = 0;
		int j = length - 1;
		while (s[j] == ' ' && j >= 0)
		{
			j--;
		}
		while (s[j] != ' ' && j >= 0)
		{
			i++;
			j--;
			if (j < 0)
				return i;
		}
		return i;
	}
};

int main()
{
	Solution s;
	cout << s.lengthOfLastWord("a ");
	system("pause");
}