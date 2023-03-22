#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string result;  //定义一个返回的结果字符串
		string result1;  /*定义一个返回的结果字符串（因为大小已经设置为第一个字符串大小，
						如果最长前缀小与第一个字符串的大小，返回的结果后面会有\0\0\0等等占位，最终是不通过的）
						例如"apple","app"*/
		result.resize(strs[0].size());   //初始化result字符串的大小（必须，要不会报溢出）
		for (int j = 0; j < (strs[0].size()); j++)  //列循环
		{
			for (int i = 0; i < strs.size(); i++)   //行循环
			{
				if (i == 0)
				{
					result[j] = strs[i][j];   //先把第一个字符放到result[j]中，
					continue;
				}
				if (result[j] == strs[i][j])
				{
					result[j] = strs[i][j];   //下一个字符相等就继续放入result[j]中
					continue;
				}
				else {                    //不相等的话就赋为'\0' 退出
					result[j] = '\0';
					break;
				}
			}
			if (result[j] == '\0')			//如果发现result[j]== '\0' 就代表已经找到了最长前缀 可以返回了
			{
				result1 = result.substr(0, j);    //substr() 是个string的返回子字符串的方法返回从0开始到j的字符串 
				return result1;
			}
			if (result == strs[0])    //这个if是为了防止"aaa","aaa","aaa","aaa" 所有元素都一样的话 返回，						  
			{						  //要不然返回为空
				return result;
			}
		}
		return "";
	}
};

int main()
{
	vector<string> strs = { "flower","flow","flight" };  //测试案例  可以自行更改测试
	Solution s;
	string result = s.longestCommonPrefix(strs);
	cout << result << endl;
	system("pause");
	return 0;
}