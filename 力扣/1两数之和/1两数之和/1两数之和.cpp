#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ������
���������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�

����԰�����˳�򷵻ش𰸡�

ʾ�� 1��

���룺nums = [2,7,11,15], target = 9
�����[0,1]
���ͣ���Ϊ nums[0] + nums[1] == 9 ������ [0, 1] ��
ʾ�� 2��

���룺nums = [3,2,4], target = 6
�����[1,2]*/

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if ((nums[i] + nums[j]) == target)
				{
					return{ i,j };
				}
			}
		}
		return{};
	}
};

int main()
{
	vector<int> v{ 2,7,11,15 };
	Solution s;
	vector<int> result = s.twoSum(v, 9);
	for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
	{
		cout << *it << " ";
	}
	system("pause");
	return 0;
}