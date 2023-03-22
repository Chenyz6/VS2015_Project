
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int n = nums.size();
		int left = 0;
		for (int right = 0; right < n; right++) {
			if (nums[right] != val) {
				nums[left] = nums[right];
				left++;
			}
		}
		return left;
	}
};



class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int left = 0, right = nums.size();
		while (left < right) {
			if (nums[left] == val) {
				nums[left] = nums[right - 1];
				right--;
			}
			else {
				left++;
			}
		}
		return left;
	}
};
