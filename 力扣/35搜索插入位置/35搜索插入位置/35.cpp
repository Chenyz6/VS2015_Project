/*
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��



ʾ�� 1:

����: nums = [1,3,5,6], target = 5
���: 2*/
#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int length = nums.size();
		int R = length - 1;
		int L = 0,result = length;
		while (L <= R)
		{
			int mid = L +( (R - L) >> 1);
			if (target <= nums[mid])
			{
				result = mid;
				R = mid - 1;
			}
			else
			{
				L = mid + 1;
			}
		}
		return result;
	}
};


int main()
{
	vector<int> v = { 1,3,5,6 };
	Solution s;
	int result = s.searchInsert(v, 2);
	cout << result << endl;
	system("pause");
	return 0;
}