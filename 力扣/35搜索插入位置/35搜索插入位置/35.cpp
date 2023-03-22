/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。



示例 1:

输入: nums = [1,3,5,6], target = 5
输出: 2*/
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