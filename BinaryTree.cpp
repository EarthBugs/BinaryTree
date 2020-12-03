#include <iostream>
#include "BinaryTree.h"
using namespace std;

BinaryTreeNode* BinaryTree::Create(BinaryTreeNode* bt)
{
	char input;
	cout << "请输入创建一颗二叉树的结点数据：" << endl;
	cin >> input;
	if (input == '#')
		return nullptr;
	else
	{
		bt = new BinaryTreeNode;
		bt->data = input;
		//递归调用本函数，创建剩余结点
		bt->lchild = Create(bt->lchild);
		bt->rchild = Create(bt->rchild);
	}
	return bt;
}

void BinaryTree::Release(BinaryTreeNode* bt)
{
	if (bt != nullptr)
	{
		Release(bt->lchild);
		Release(bt->rchild);
		delete bt;
	}
}

void BinaryTree::PreOrder(BinaryTreeNode* bt)
{
	if (bt == nullptr)
		return;
	else
	{
		cout << bt->data << ",";
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}

void BinaryTree::InOrder(BinaryTreeNode* bt)
{
	if (bt == nullptr)
		return;
	else
	{
		InOrder(bt->lchild);
		cout << bt->data << ",";
		InOrder(bt->rchild);
	}
}

void BinaryTree::PostOrder(BinaryTreeNode* bt)
{
	if (bt == nullptr)
		return;
	else
	{
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data << ",";
	}
}
