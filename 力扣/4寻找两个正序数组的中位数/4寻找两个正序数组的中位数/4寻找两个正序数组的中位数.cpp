/*����������С�ֱ�Ϊ m �� n �����򣨴�С�������� nums1 �� nums2�������ҳ���������������������� ��λ�� ��

�㷨��ʱ�临�Ӷ�Ӧ��Ϊ O(log (m+n)) ��

ʾ�� 1��

���룺nums1 = [1,3], nums2 = [2]
�����2.00000
���ͣ��ϲ����� = [1,2,3] ����λ�� 2
ʾ�� 2��

���룺nums1 = [1,2], nums2 = [3,4]
�����2.50000
���ͣ��ϲ����� = [1,2,3,4] ����λ�� (2 + 3) / 2 = 2.5*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector <int> v;
		vector <int>::iterator it1 = nums1.begin();
		vector <int>::iterator it2 = nums2.begin();
		while (it1 != nums1.end() && it2 != nums2.end())
		{
			if (*it1 <= *it2)
			{
				v.push_back(*it1);
				++it1;
			}
			else
			{
				v.push_back(*it2);
				++it2;
			}
		}
		while (it1 != nums1.end())
		{
			v.push_back(*it1);
			++it1;
		}
		while (it2 != nums2.end())
		{
			v.push_back(*it2);
			++it2;
		}
		int size = v.size();
		if (size == 0)
		{
			return 0;
		}
		else if (size == 1)
		{
			return v[0];
		}
		if (size % 2 != 0)
		{
			return v[(int)size / 2];
		}
		else
		{
			return (v[(int)size / 2] + v[(int)size / 2 - 1]) / (double)2;
		}
	}
};

class Solution_offical {
public:
	int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {
		/* ��Ҫ˼·��Ҫ�ҵ��� k (k>1) С��Ԫ�أ���ô��ȡ pivot1 = nums1[k/2-1] �� pivot2 = nums2[k/2-1] ���бȽ�
		* ����� "/" ��ʾ����
		* nums1 ��С�ڵ��� pivot1 ��Ԫ���� nums1[0 .. k/2-2] ���� k/2-1 ��
		* nums2 ��С�ڵ��� pivot2 ��Ԫ���� nums2[0 .. k/2-2] ���� k/2-1 ��
		* ȡ pivot = min(pivot1, pivot2)������������С�ڵ��� pivot ��Ԫ�ع��Ʋ��ᳬ�� (k/2-1) + (k/2-1) <= k-2 ��
		* ���� pivot �������Ҳֻ���ǵ� k-1 С��Ԫ��
		* ��� pivot = pivot1����ô nums1[0 .. k/2-1] ���������ǵ� k С��Ԫ�ء�����ЩԪ��ȫ�� "ɾ��"��ʣ�µ���Ϊ�µ� nums1 ����
		* ��� pivot = pivot2����ô nums2[0 .. k/2-1] ���������ǵ� k С��Ԫ�ء�����ЩԪ��ȫ�� "ɾ��"��ʣ�µ���Ϊ�µ� nums2 ����
		* �������� "ɾ��" ��һЩԪ�أ���ЩԪ�ض��ȵ� k С��Ԫ��ҪС���������Ҫ�޸� k ��ֵ����ȥɾ�������ĸ���
		*/

		int m = nums1.size();
		int n = nums2.size();
		int index1 = 0, index2 = 0;

		while (true) {
			// �߽����
			if (index1 == m) {
				return nums2[index2 + k - 1];
			}
			if (index2 == n) {
				return nums1[index1 + k - 1];
			}
			if (k == 1) {
				return min(nums1[index1], nums2[index2]);
			}

			// �������
			int newIndex1 = min(index1 + k / 2 - 1, m - 1);
			int newIndex2 = min(index2 + k / 2 - 1, n - 1);
			int pivot1 = nums1[newIndex1];
			int pivot2 = nums2[newIndex2];
			if (pivot1 <= pivot2) {
				k -= newIndex1 - index1 + 1;
				index1 = newIndex1 + 1;
			}
			else {
				k -= newIndex2 - index2 + 1;
				index2 = newIndex2 + 1;
			}
		}
	}

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int totalLength = nums1.size() + nums2.size();
		if (totalLength % 2 == 1) {
			return getKthElement(nums1, nums2, (totalLength + 1) / 2);
		}
		else {
			return (getKthElement(nums1, nums2, totalLength / 2) + getKthElement(nums1, nums2, totalLength / 2 + 1)) / 2.0;
		}
	}
};


int main()
{
	vector<int> v1 = {1,2};
	vector<int> v2 = {3,4};
	Solution s;
	cout << s.findMedianSortedArrays(v1, v2) << endl;
	system("pause");
	return 0;
}