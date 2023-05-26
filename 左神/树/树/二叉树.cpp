//#include <iostream>
//#include <stack>
//#include <queue>
//#include <map>
//using namespace std;
//
//struct Node 
//{
//	int value;
//	Node * left;
//	Node * right;
//};
//
//void initNode(Node * head)
//{
//	Node * p = new Node;
//	Node * p1 = new Node;
//	Node * p2 = new Node;
//	Node * p3 = new Node;
//	head->value = 5;  // ����5
//	head->left = p;
//	p->value = 3;  // ����3
//	p->left = NULL;
//	p->right = NULL;
//	head->right = p1;
//	p1->value = 1;  // ����1
//	p1->left = p2;
//	p1->right = p3;
//	p2->value = 7;
//	p2->right = NULL;
//	p2->left = NULL;
//	p3->value = 9;
//	p3->right = NULL;
//	p3->left = NULL;
//}
//
//// �ݹ�ʵ��
//void f(Node * head)  // �ڵ�ı���  ÿ���ڵ㶼���ӡ����
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	f(head->left);
//	f(head->right);
//}
//
//void preOrderRecur(Node * head)  // �������
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	cout << head->value << " ";
//	preOrderRecur(head->left);
//	preOrderRecur(head->right);
//}
//
//void inOrderRecur(Node * head)  // �������
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	inOrderRecur(head->left);
//	cout << head->value << " ";
//	inOrderRecur(head->right);
//}
//
//void lastOrderRecur(Node * head)  // �������
//{
//	if (head == NULL)
//	{
//		return;
//	}
//	lastOrderRecur(head->left);
//	lastOrderRecur(head->right);
//	cout << head->value << " ";
//}
//
//// �ǵݹ�ʵ����ǰ�����
//void preOrderUnRecur(Node * node)
//{
//	if (node != NULL)
//	{
//		stack<Node *> s;
//		s.push(node);
//		while (!s.empty())
//		{
//			cout << s.top()->value << " ";
//			Node * pre = s.top();
//			s.pop();
//			if (pre->right != NULL)  // ��������
//			{
//				s.push(pre->right);
//			}
//			if (pre->left != NULL)
//			{
//				s.push(pre->left);
//			}
//		}
//	}
//}
//
//// �ǵݹ�ʵ�����������
//void inOrderUnRecur(Node * node)
//{
//	if (node != NULL)
//	{
//		stack<Node *> s;
//		while (!s.empty() || node != NULL)  // ���˳�ѭ��������
//		{
//			if (node != NULL)   
//			{
//				s.push(node);
//				node = node->left;
//			}
//			else
//			{
//				cout << s.top()->value << " ";
//				node = s.top();
//				s.pop();
//				node = node->right;
//			}
//		}
//	}
//}
//
//// �ǵݹ�������
//void lastOrderUnRecur(Node * node)
//{
//	if (node != NULL)
//	{
//		stack<Node *> s,s1;
//		s.push(node);
//		while (!s.empty())
//		{
//			s1.push(s.top());
//			Node * pre = s.top();
//			s.pop();
//			if (pre->left != NULL)  // ��������
//			{
//				s.push(pre->left);   // ������  �� �ŵ�һ��ջ�� ���� ���Ҹ�
//			}
//			if (pre->right != NULL)
//			{
//				s.push(pre->right);
//			}
//		}
//		while (!s1.empty())
//		{
//			cout << s1.top()->value << " ";
//			s1.pop();
//		}
//	}
//}
//
//int maxWidth(Node * node)
//{
//	queue<Node *> q;
//	map<Node*, int> m;
//	int curLevel = 1;
//	int curLevelNodes = 0;
//	int Max = 0;
//	m.insert(pair<Node *, int>(node, 1));
//	q.push(node);
//	while (!q.empty())
//	{
//		Node * temp = q.front();
//		if (curLevel == m[temp])
//		{
//			curLevelNodes++;
//		}
//		else
//		{
//			curLevel++;
//			Max = max(Max, curLevelNodes);
//			curLevelNodes = 1;
//		}
//		q.pop();
//		if (temp->left != NULL)
//		{
//			m.insert(pair<Node*, int>(temp->left, curLevel + 1));
//			q.push(temp->left);
//		}
//		if (temp->right != NULL)
//		{
//			m.insert(pair<Node*, int>(temp->right, curLevel + 1));
//			q.push(temp->right);
//		}
//	}
//	return Max;
//}
//
//
//int preValue = 0;
//bool checkBST(Node * node)    // BST ����������  ��������ǵ�������
//{
//	if (node == NULL)
//	{
//		return true;
//	}
//	bool isLeftBst = checkBST(node->left);
//	if (isLeftBst == false)
//	{
//		return false;
//	}
//	if (node->value <= preValue)
//	{
//		return false;
//	}
//	else
//	{
//		preValue = node->value;
//	}
//	checkBST(node->right);
//}
//
//void WidthUnRecur(Node * node)  // ������ȱ���
//{
//	queue<Node *> q;
//	q.push(node);
//	while (!q.empty())
//	{
//		cout << q.front()->value << " ";
//		Node * cur = q.front();
//		q.pop();
//		if (cur->left != NULL)
//		{
//			q.push(cur->left);
//		}
//		if (cur->right != NULL)
//		{
//			q.push(cur->right);
//		}
//	}
//}
//
//bool isCBT(Node * node)  // �ж��Ƿ�Ϊ��ȫ������ 
//{
//	queue<Node *> q;
//	bool leaf = false;
//	q.push(node);
//	while (!q.empty())
//	{
//		Node * cur = q.front();
//		q.pop();
//		if (leaf && (cur->left != NULL && cur->right != NULL) // �Ѿ������в�˫ȫ�Ľڵ�֮���ַ��ֵ�ǰ�ڵ㲻��Ҷ�ڵ�
//			|| (cur->right != NULL && cur->left == NULL)
//			) 
//		{
//			return false;
//		}
//		if (cur->left != NULL)
//		{
//			q.push(cur->left);
//		}
//		if (cur->right != NULL)
//		{
//			q.push(cur->right);
//		}
//		if (cur->left == NULL || cur->value == NULL)
//		{
//			leaf = true;
//		}
//	}
//	return true;
//}
//
//struct returnData
//{
//	bool isBST;
//	int max;
//	int min;
//	returnData(bool is,int ma,int mi) 
//	{
//		isBST = is;
//		max = ma;
//		min = mi;
//	}
//};
//returnData isBST2(Node * node)   // �ж��Ƿ�����������������2
//{
//	if (node == NULL)
//	{
//		return returnData(NULL, -1, -1);
//	}
//	returnData leftData = isBST2(node->left);
//	returnData rightData = isBST2(node->right);
//	int Min = node->value;
//	int Max = node->value;
//	if (node->left != NULL)
//	{
//		Min = min(Min, leftData.min);
//		Max = max(Max, leftData.max);
//	}
//	if (node->right != NULL)
//	{
//		Min = min(Min, rightData.min);
//		Max = max(Max, rightData.max);
//	}
//	bool isBST = true;
//	if (node != NULL && (!leftData.isBST || leftData.max >= node->value))
//	{
//		isBST = false;
//	}
//	if (node != NULL && (!rightData.isBST || rightData.min <= node->value))
//	{
//		isBST = false;
//	}
//	return returnData(isBST,Max,Min);
//}
//
//// �ж��Ƿ�����������
//struct fullData
//{
//	int height;
//	int nodes;
//	fullData(int h,int n)
//	{
//		height = h;
//		nodes = n;
//	}
//};
//
//bool isF(Node * node)
//{
//	fullData data = ff(node);
//	return (1 << data.height) - 1;  // 2��n���� ʹ������
//}
//
//fullData ff(Node * node)
//{
//	if (node == NULL)
//	{
//		return fullData(0,0);
//	}
//	fullData leftData = ff(node->left);
//	fullData rightData = ff(node->right);
//	int height = max(leftData.height,rightData.height) + 1;
//	int nodes = leftData.nodes + rightData.nodes + 1;
//	return fullData(height, nodes);
//}
//
//int main()
//{
//	Node * head = new Node;
//	initNode(head);
//	cout << "�ݹ��������" << endl;
//	preOrderRecur(head);
//	cout << endl;
//	cout << "�ݹ��������" << endl;
//	inOrderRecur(head);
//	cout << endl;
//	cout << "�ݹ�������" << endl;
//	lastOrderRecur(head);
//	cout << endl << "-----------------" << endl;
//	cout << "�ǵݹ�ǰ�����" << endl;
//	preOrderUnRecur(head);
//	cout << endl;
//	cout << "�ǵݹ��������" << endl;
//	inOrderUnRecur(head);
//	cout << endl;
//	cout << "�ǵݹ�������" << endl;
//	lastOrderUnRecur(head);
//	cout << endl << "-----------------" << endl;
//	cout << "�ǵݹ������ȱ���" << endl;
//	WidthUnRecur(head);
//	cout << endl;
//	cout << "�ݹ����Ƿ���BST����������" << endl;
//	cout << checkBST(head) << endl;
//	cout << "�ݹ����Ƿ���BST����������,��ʽ��" << endl; // BST Binary Search Tree
//	cout << isBST2(head).isBST << endl;
//	cout << "�ǵݹ����Ƿ�����ȫ������" << endl;
//	cout << isCBT(head) << endl;
//	system("pause");
//}
//
//
