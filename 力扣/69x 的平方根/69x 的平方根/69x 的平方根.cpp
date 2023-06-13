/*����һ���Ǹ����� x �����㲢���� x �� ����ƽ���� ��

���ڷ������������������ֻ���� �������� ��С�����ֽ��� ��ȥ ��

ע�⣺������ʹ���κ�����ָ����������������� pow(x, 0.5) ���� x ** 0.5 ��

ʾ�� 1��
���룺x = 4
�����2
ʾ�� 2��

���룺x = 8
�����2
���ͣ�8 ������ƽ������ 2.82842..., ���ڷ���������������С�����ֽ�����ȥ��
*/
#include <iostream>
using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		if (x == 0)
		{
			return 0;
		}
		if (x == 1)
		{
			return 1;
		}
		for (long i = 0; i <= x; i++)
		{
			if (i * i < x)
			{
				continue;
			}
			else if(i * i == x)
			{
				return i;
			}
			return i - 1;
		}
		return -1;
	}
};

// ���ֲ���
class Solution1 {
public:
	int mySqrt(int x) {
		int l = 0, r = x, ans = -1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if ((long long)mid * mid <= x) {
				ans = mid;
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		return ans;
	}
};

int main()
{
#define num 2
	Solution s;
	cout << s.mySqrt(num) << endl;
	cout << pow(num, 0.5) << endl;
	system("pause");
}