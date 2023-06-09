/*
����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ��
ʾ�� 1��

���룺digits = [1,2,3]
�����[1,2,4]
���ͣ����������ʾ���� 123��
ʾ�� 2��

���룺digits = [4,3,2,1]
�����[4,3,2,2]
���ͣ����������ʾ���� 4321��
ʾ�� 3��

���룺digits = [0]
�����[1]
*/
#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int result = 0;
//		int j = 1;
//		if (digits[0] == 0)
//		{
//			digits.pop_back();
//			digits.push_back(1);
//		}
//		for (int i = digits.size() - 1; i >= 0; i--)
//		{
//			result += digits[i] * j;
//			j *= 10;
//		}
//		vector<int> v;
//		v.push_back(result + 1);
//		return v;
//	}
//};

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		if (digits[0] == 0)
		{
			digits[0] = 1;
			return digits;
		}
		digits[digits.size() - 1]++;
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] >= 10)
			{
				digits[i] = digits[i] % 10;
				if (i - 1 < 0)
				{
					vector<int>::iterator it = digits.begin();
					digits.insert(it, 1);
				}
				else
				{
					digits[i - 1]++;
				}
			}
		}
		return digits;
	}
};

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(8);
	v.push_back(7);
	v.push_back(6);
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.push_back(0);
	vector<int> result = s.plusOne(v);
	system("pause");
}