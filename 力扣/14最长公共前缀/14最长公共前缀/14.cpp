#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string result;  //����һ�����صĽ���ַ���
		string result1;  /*����һ�����صĽ���ַ�������Ϊ��С�Ѿ�����Ϊ��һ���ַ�����С��
						����ǰ׺С���һ���ַ����Ĵ�С�����صĽ���������\0\0\0�ȵ�ռλ�������ǲ�ͨ���ģ�
						����"apple","app"*/
		result.resize(strs[0].size());   //��ʼ��result�ַ����Ĵ�С�����룬Ҫ���ᱨ�����
		for (int j = 0; j < (strs[0].size()); j++)  //��ѭ��
		{
			for (int i = 0; i < strs.size(); i++)   //��ѭ��
			{
				if (i == 0)
				{
					result[j] = strs[i][j];   //�Ȱѵ�һ���ַ��ŵ�result[j]�У�
					continue;
				}
				if (result[j] == strs[i][j])
				{
					result[j] = strs[i][j];   //��һ���ַ���Ⱦͼ�������result[j]��
					continue;
				}
				else {                    //����ȵĻ��͸�Ϊ'\0' �˳�
					result[j] = '\0';
					break;
				}
			}
			if (result[j] == '\0')			//�������result[j]== '\0' �ʹ����Ѿ��ҵ����ǰ׺ ���Է�����
			{
				result1 = result.substr(0, j);    //substr() �Ǹ�string�ķ������ַ����ķ������ش�0��ʼ��j���ַ��� 
				return result1;
			}
			if (result == strs[0])    //���if��Ϊ�˷�ֹ"aaa","aaa","aaa","aaa" ����Ԫ�ض�һ���Ļ� ���أ�						  
			{						  //Ҫ��Ȼ����Ϊ��
				return result;
			}
		}
		return "";
	}
};

int main()
{
	vector<string> strs = { "flower","flow","flight" };  //���԰���  �������и��Ĳ���
	Solution s;
	string result = s.longestCommonPrefix(strs);
	cout << result << endl;
	system("pause");
	return 0;
}