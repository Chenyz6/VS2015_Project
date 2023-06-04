#include <queue>
#include <vector>
#include <functional>
#include <iostream>
using namespace std;
/*
����:
��������costs��������profits����k
����m����:
costs[i]��ʾi����Ŀ�Ļ���
profits[i]��ʾi����Ŀ�ڿ۳�����֮����������Ǯ(����)k��ʾ ��ֻ�ܴ��е������k����Ŀ
m ��ʾ���ʼ���ʽ�
˵��:
��ÿ����һ����Ŀ�����ϻ�õ����棬����֧����ȥ����һ����Ŀ�����:
������õ����Ǯ����
*/

// Ĭ�ϴ����
priority_queue<int> big; // ʵ���ϵȼ��� 
priority_queue<int, vector<int>, less<int>>;
// С����
priority_queue<int, vector<int>, greater<int>> small;

int main()
{
	cout << "�����:" << endl;
	for (int i = 0;i < 10;i++)
	{
		int j = rand() % 10;
		cout << j << " ";
		big.push(j);
	}
	cout << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << big.top() << " ";
		big.pop();
	}
	cout << endl << "С����:" << endl;
	for (int i = 0;i < 10;i++)
	{
		int j = rand() % 10;
		cout << j << " ";
		small.push(j);
	}
	cout << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << small.top() << " ";
		small.pop();
	}
	system("pause");
}