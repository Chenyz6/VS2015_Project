// ��ĳһ��׼�£����ȿ����������׼�������������������׼������
// ���յõ�һ���𰸵��㷨������̰���㷨��
// Ҳ����˵���������������ϼ��Կ��ǣ�������������ĳ�������ϵľֲ����Ž⡣
// �ֲ����� - ? ->��������


/*7.һЩ��ĿҪռ��һ�������������������Ҳ���ͬʱ����������Ŀ��������
����ÿһ����Ŀ��ʼ��ʱ��ͽ�����ʱ��(����һ�����飬������һ�����������Ŀ)��
���������������ճ̣�Ҫ������ҽ��е������ĳ�����ࡣ
������������������Ρ�*/
//----������ʱ�����˳������������ �����Ž�

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