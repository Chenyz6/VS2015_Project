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
//	if (node->right != NULL) // 如果有右子树
//		return getLeftMost(node->right);
//	else
//	{
//		Node * par = node->parent;
//		while (par != NULL && par->left != node)  // 当前节点不为父节点的左孩子 继续循环
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