#include <iostream>
#include <unordered_map>
using namespace std;

struct List
{
	Node * nodes;
	List * next;
};

struct Node 
{
public:
	int value;
	int in;
	int out;
	List * nexts = new List;

};

class Graph
{
public:
	unordered_map<int, Node> nodes;

};

int main()
{
	system("pause");
}