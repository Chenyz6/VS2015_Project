/*
������������¥�ݡ���Ҫ n ������ܵ���¥����

ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�

ʾ�� 1��

���룺n = 2
�����2
���ͣ������ַ�����������¥����
1. 1 �� + 1 ��
2. 2 ��
ʾ�� 2��

���룺n = 3
�����3
���ͣ������ַ�����������¥����
1. 1 �� + 1 �� + 1 ��
2. 1 �� + 2 ��
3. 2 �� + 1 ��*/
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		if (n == 1 || n == 2)
		{
			return 1;
		}
		int result = 0,temp2 = 1;
		for (int temp1 = n; temp1 >= 0; temp1--)
		{
			if (temp1 * 1 == n)
			{
				result++;
				continue;
			}
			if ((temp1 - 1) * 1 + (temp2) * 2 == n)
			{
				result += temp1;
				temp2++;
				continue;
			}
			if ((temp1 - 1) * 1 + (temp2)* 2 == n)
			{
				result += temp1;
				temp2++;
				continue;
			}
			break;
		}
		return result;
	}
};

// �����ݹ�
class Solution1 {
public:
		int climbStairs(int n) {
		if (n == 1) {
			return 1;
		}
		if (n == 2) {
			return 2;
		}
		return climbStairs(n - 1) + climbStairs(n - 2);
	}
};

// ����¼�ĵݹ�
class Solution2 {
public:
	int climbStairs(int n) {
		unordered_map<int, int> m;
		if (n == 1) {
			return 1;
		}
		if (n == 2) {
			return 2;
		}
		unordered_map<int, int>::iterator pos = m.find(n);
		if (pos != m.end())

		{
			cout << "--------" << n << " " << m.count(n) << endl;
			return m[n];
		}
		else
		{
			m.insert(pair<int, int>(n, climbStairs(n - 1) + climbStairs(n - 2)));
			cout << n << " " << m.count(n) << endl;
			return m[n];
		}
	}
};

int main()
{
	Solution2 s;
	cout << s.climbStairs(10) << endl;
	system("pause");
}