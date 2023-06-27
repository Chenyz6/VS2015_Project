/*����һ���ַ��� s �������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�

ʾ�� 1:

����: s = "abcabcbb"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
ʾ�� 2:

����: s = "bbbbb"
���: 1
����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
ʾ�� 3:

����: s = "pwwkew"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
	 ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���*/
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
		// ��ϣ���ϣ���¼ÿ���ַ��Ƿ���ֹ�
		unordered_set<char> occ;
		int n = s.size();
		// ��ָ�룬��ʼֵΪ -1���൱���������ַ�������߽����࣬��û�п�ʼ�ƶ�
		int rk = -1, ans = 0;
		// ö����ָ���λ�ã���ʼֵ���Եر�ʾΪ -1
		for (int i = 0; i < n; ++i) {
			if (i != 0) {
				// ��ָ�������ƶ�һ���Ƴ�һ���ַ�
				occ.erase(s[i - 1]);
			}
			while (rk + 1 < n && !occ.count(s[rk + 1])) {
				// ���ϵ��ƶ���ָ��
				occ.insert(s[rk + 1]);
				++rk;
			}
			// �� i �� rk ���ַ���һ�����������ظ��ַ��Ӵ�
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