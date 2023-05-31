// 在某一标准下，优先考虑最满足标准的样本，最后考虑最不满足标准的样本
// 最终得到一个答案的算法，叫作贪心算法。
// 也就是说，不从整体最优上加以考虑，所做出的是在某种意义上的局部最优解。
// 局部最优 - ? ->整体最优


/*7.一些项目要占用一个会议室宣讲，会议室不能同时容纳两个项目的宣讲。
给你每一个项目开始的时间和结束的时间(给你一个数组，里面是一个个具体的项目)，
你来安排宣讲的日程，要求会议室进行的宣讲的场次最多。
返回这个最多的宣讲场次。*/
//----按结束时间早的顺序来进行排列 是最优解

#include <iostream>
#include <algorithm>
using namespace std;

struct program
{
	int start;
	int end;
};

class mycompare
{
public:
	bool operator() (program p1,program p2)
	{
		return p1.end < p2.end;
	}
};

int arrange(program programs[],int curtime)
{
	sort(programs,programs + sizeof(programs) / sizeof(programs[0]), mycompare());
	for (int i = 0;i < 10;i++)
	{
		cout << programs[i].end << " ";
	}
	return 0;
}

int main()
{
	program programs[10];
	for (int i = 0;i < 10;i++)
	{
		programs[i].start = i + 2;
		programs[i].end = i + 1;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << programs[i].end << " ";
	}
	cout << "-----------";
	arrange(programs, 6);

	system("pause");
}