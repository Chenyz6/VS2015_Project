#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class trieNode  // trieǰ׺��
{
public:
	int pass; // �˽ڵ�ͨ���˶��ٴ�
	int end;  // �жϴ��ַ����ǲ��ǽ�β��㣨�ǵĻ���ֵ�����Ƕ��ٸ��ַ����Ľ�β�ڵ㣩
	trieNode * nexts[26];  // ����ַ������ر�� ���ù�ϣ��
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
		cout << "�ַ�" << str << "��ӳɹ�" << endl;
		node->end++;
	}

	int search(string str)  // �����ַ����������
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

	int prefixNumber(string str) // ǰ׺���ִ���
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
					node->nexts[index] = NULL;  // ����ɾ��֮�����н��
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
	cout << "abc���ֹ�" << t.search("abc") << "��" << endl;
	cout << "abΪǰ׺���ֹ�" << t.prefixNumber("ab") << "��" << endl;
	t.deleteStr("ab");
	cout << "ab���ֹ�" << t.search("ab") << "��" << endl;
	system("pause");
}