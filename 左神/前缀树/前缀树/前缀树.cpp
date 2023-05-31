#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class trieNode  // trieǰ׺��
{
public:
	int pass; // �˽ڵ�ͨ���˶��ٴ�
	int end;  // �жϴ��ַ����ǲ��ǽ�β��㣨�ǵĻ���ֵ�����Ƕ��ٸ��ַ����Ľ�β�ڵ㣩
	trieNode * nexts[26];
	trieNode()
	{
		pass = 0;
		end = 0;
		// next[0] == NULL û��ָ��'a'��·
		// next[0] ��= NULL ��ָ��'a'��·
		for (int i = 0; i < 26; i++)
		{
			nexts[i] = NULL;
		}
	}
};

class trie
{
private:
	trieNode * root;  // ���ڵ��ֵΪ�����˶��ٸ��ַ���
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