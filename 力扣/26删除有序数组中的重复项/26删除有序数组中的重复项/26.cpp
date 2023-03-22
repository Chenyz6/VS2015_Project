#include<iostream>
using namespace std;
#include<vector>
/*
����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��

������ĳЩ�����в��ܸı�����ĳ��ȣ����Ա��뽫�����������nums�ĵ�һ���֡����淶��˵�������ɾ���ظ���֮���� k ��Ԫ�أ���ô nums ��ǰ k ��Ԫ��Ӧ�ñ������ս����

�����ս������ nums ��ǰ k ��λ�ú󷵻� k ��

��Ҫʹ�ö���Ŀռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

�����׼:

ϵͳ��������Ĵ���������������:

int[] nums = [...]; // ��������
int[] expectedNums = [...]; // ������ȷ��������

int k = removeDuplicates(nums); // ����

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
assert nums[i] == expectedNums[i];
}
������ж��Զ�ͨ������ô������⽫�� ͨ����



ʾ�� 1��

���룺nums = [1,1,2]
�����2, nums = [1,2,_]
���ͣ�����Ӧ�÷����µĳ��� 2 ������ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�
ʾ�� 2��

���룺nums = [0,0,1,1,1,2,2,3,3,4]
�����5, nums = [0,1,2,3,4]
���ͣ�����Ӧ�÷����µĳ��� 5 �� ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�*/

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int temp = nums[0];
		int mark = 1;
		if (nums.size() == 0)
		{
			return 0;
		}
		else if (nums.size() == 1)
		{
			return 1;
		}
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == temp) 
			{
				continue;
			}
			else
			{
				temp = nums[i];
				nums[mark] = nums[i];
				mark++;
			}
		}
		return mark;
	}
};

int main()
{
	system("pause");
	return 0;
}