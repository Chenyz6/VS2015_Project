#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class trieNode  // trie前缀树
{
public:
	int pass; // 此节点通过了多少次
	int end;  // 判断此字符串是不是结尾结点（是的话数值代表是多少个字符串的结尾节点）
	trieNode * nexts[26];  // 如果字符种类特别多 就用哈希表
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
		cout << "字符" << str << "添加成功" << endl;
		node->end++;
	}

	int search(string str)  // 查找字符加入过几次
	{
		if (str.empty())
		{
			return 0;
		}
		trieNode * node = root;
		int index = 0;
		for (int i = 0; i < str.length(); i++)
		{
			index = str[i] - 'a';
			if (node->nexts[index] == NULL)
			{
				return 0;
			}
			node = node->nexts[index];
		}
		return node->end;
	}

	int prefixNumber(string str) // 前缀出现次数
	{
		if (str.empty())
		{
			return 0;
		}
		trieNode * node = root;
		int index = 0;
		for (int i = 0; i < str.length(); i++)
		{
			index = str[i] - 'a';
			if (node->nexts[index] == NULL)
			{
				return 0;
			}
			node = node->nexts[index];
		}
		return node->pass;
	}

	void deleteStr(string str)
	{
		if (search(str) != 0)
		{
			trieNode * node = root;
			int index = 0;
			node->pass--;
			for (int i = 0; i < str.length(); i++)
			{
				index = str[i] - 'a';
				if (--node->nexts[index]->pass == 0)
				{
					delete node->nexts[index];
					node->nexts[index] = NULL;  // 遍历删除之后所有结点
					for (int i = 0; i < 26; i++)
					{
						if (node->nexts[i] != NULL)
						{
							delete node->nexts[i];
							node->nexts[i] = NULL;
						}
					}
					return;
				}
				node = node->nexts[index];
			}
			node->end--;
		}
	}
};

int main()
{
	trie t;
	string s = "abc";
	string s1 = "abcd";
	string s2 = "ab";
	string s3 = "ab";
	string s4 = "abc";
	t.insert(s);
	t.insert(s1);
	t.insert(s2);
	t.insert(s3);
	t.insert(s4);
	cout << "-----------------" << endl;
	cout << "abc出现过" << t.search("abc") << "次" << endl;
	cout << "ab为前缀出现过" << t.prefixNumber("ab") << "次" << endl;
	t.deleteStr("ab");
	cout << "ab出现过" << t.search("ab") << "次" << endl;
	system("pause");
}