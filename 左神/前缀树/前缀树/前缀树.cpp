#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class trieNode  // trie前缀树
{
public:
	int pass; // 此节点通过了多少次
	int end;  // 判断此字符串是不是结尾结点（是的话数值代表是多少个字符串的结尾节点）
	trieNode * nexts[26];
	trieNode()
	{
		pass = 0;
		end = 0;
		// next[0] == NULL 没有指向'a'的路
		// next[0] ！= NULL 有指向'a'的路
		for (int i = 0; i < 26; i++)
		{
			nexts[i] = NULL;
		}
	}
};

class trie
{
private:
	trieNode * root;  // 根节点的值为加入了多少个字符串
public:
	trie()
	{
		root = new trieNode;

	}

	void insert(string str)
	{
		if (str.empty())
		{
			return;
		}
		trieNode * node = root;
		node->pass++;
		int index = 0;
		for (int i = 0; i < str.length(); i++)
		{
			index = str[i] - 'a';
			if (node->nexts[index] == NULL)
			{
				node->nexts[index] = new trieNode;
			}
			node = node->nexts[index];
			node->pass++;
		}
		node->end++;
	}
};

int main()
{
	trie t;
	string s = "abc";
	string s1 = "abcd";
	t.insert(s);
	t.insert(s1);
	system("pause");
}