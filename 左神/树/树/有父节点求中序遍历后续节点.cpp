//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int value;
//	Node * left;
//	Node * right;
//	Node * parent;
//};
//
//Node * getSuccessorNode(Node * node)
//{
//	if (node == NULL)
//	{
//		return node;
//	}
//	if (node->right != NULL) // �����������
//		return getLeftMost(node->right);
//	else
//	{
//		Node * par = node->parent;
//		while (par != NULL && par->left != node)  // ��ǰ�ڵ㲻Ϊ���ڵ������ ����ѭ��
//		{
//			par = par->parent;
//			node = par;
//		}
//		return par;
//	}
//}
//
//Node * getLeftMost(Node * node)
//{
//	while (node->left != NULL)
//	{
//		node = node->left;
//	}
//	return node;
//}