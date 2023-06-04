#include <queue>
#include <vector>
#include <functional>
#include <iostream>
using namespace std;
/*
输入:
正数数组costs正数数组profits正数k
正数m含义:
costs[i]表示i号项目的花费
profits[i]表示i号项目在扣除花费之后还能挣到的钱(利润)k表示 你只能串行的最多做k个项目
m 表示你初始的资金
说明:
你每做完一个项目，马上获得的收益，可以支持你去做下一个项目。输出:
你最后获得的最大钱数。
*/

// 默认大根堆
priority_queue<int> big; // 实际上等价于 
priority_queue<int, vector<int>, less<int>>;
// 小根堆
priority_queue<int, vector<int>, greater<int>> small;

int main()
{
	cout << "大根堆:" << endl;
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
	cout << endl << "小根堆:" << endl;
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