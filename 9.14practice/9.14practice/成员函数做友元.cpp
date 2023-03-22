#include <iostream>
using namespace std;
#include <string>
class Building
{
	friend void gg::visit1();
public:
	Building()
	{
		sittingroom = "¿ÍÌü";
		bedroom = "ÎÔÊÒ";
	}
public:
	string sittingroom;
private:
	string bedroom;
};

class gg
{
public:
	gg()
	{
		building = new Building;
	}
public:
	Building * building;
	void  visit1();
};

void gg::visit1()
{
	cout << building->sittingroom << endl;
	cout << building->bedroom << endl;
}

void test()
{
	gg ggg;
	ggg.visit1();
}

int main()
{
	test();
	system("pause");
}