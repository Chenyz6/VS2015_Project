/*
����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�

��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣

Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�



˵��:

Ϊʲô������ֵ��������������Ĵ���������?

��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�

����������ڲ���������:

// nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
int len = removeElement(nums, val);

// �ں������޸�����������ڵ������ǿɼ��ġ�
// ������ĺ������صĳ���, �����ӡ�������� �ó��ȷ�Χ�� ������Ԫ�ء�
for (int i = 0; i < len; i++) {
print(nums[i]);
}


ʾ�� 1��

���룺nums = [3,2,2,3], val = 3
�����2, nums = [2,2]
���ͣ�����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء����磬�������ص��³���Ϊ 2 ���� nums = [2,2,3,3] �� nums = [2,2,0,0]��Ҳ�ᱻ������ȷ�𰸡�
*/
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i = 0;
		int size = nums.size();
		int result = size;
		int k = nums.size() - 1;
		for (int i = 0; i < size; i++)   
		{
			if (nums[i] == val)				
			{
				result--;
				while (nums[k] == val)
				{
					if (i == k)
					{
						break;
					}
					k--,size--;
					result--;
					if (k < 0)
					{
						return 0;
					}
				}
				nums[i] = nums[k];
				k--, size--;
			}
		}
		return result;
	}
};




int main()
{
	vector<int> nums = {2,3,3};
	int val = 3;
	Solution s;
	int result = s.removeElement(nums, val);
	for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << result << endl;
	system("pause");
	return 0;
}