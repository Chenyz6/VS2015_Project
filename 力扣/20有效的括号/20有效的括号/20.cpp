//#include <iostream>
//using namespace std;
//#include <string>
///*
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
//
//
//ʾ�� 1��
//���룺s = "()"
//�����true
//ʾ�� 2��
//���룺s = "()[]{}"
//�����true
//ʾ�� 3��
//���룺s = "(]"
//�����false
//*/
//class Solution {
//public:
//	bool isValid(string s) {
//		int small = 0;
//		int mid = 0;
//		int big = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			switch (s[i]) 
//			{
//			case '(':
//				small++;
//				break;
//			case ')':
//				if (i > 0 && s[i-1] == '(')
//				{
//					small--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			case '[':
//				mid++;
//				break;
//			case ']':
//				if (i > 0 && s[i - 1] == '[')
//				{
//					mid--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			case '{':
//				big++;
//				break;
//			case '}':
//				if (i > 0 && s[i - 1] == '{')
//				{
//					big--;
//					break;
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//		if (small == 0 && mid == 0 && big == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//int main()
//{
//	string str = "([)]" ;
//	Solution sol;
//	bool b = sol.isValid(str);
//	if (b == true)
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	system("pause");
//	return 0;
//}