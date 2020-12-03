#pragma once

struct BinaryTreeNode
{
	char data;
	BinaryTreeNode* lchild, * rchild;
};

class BinaryTree
{
private:
	BinaryTreeNode* root;//指向根节点的头指针
	BinaryTreeNode* Create(BinaryTreeNode* bt);//构造函数调用
	void Release(BinaryTreeNode* bt);//析构函数调用
	void PreOrder(BinaryTreeNode* bt);//前序遍历函数调用
	void InOrder(BinaryTreeNode* bt);//中序遍历函数调用
	void PostOrder(BinaryTreeNode* bt);//后序遍历函数调用
public:
	BinaryTree() { root = Create(root); }//构造函数
	~BinaryTree() { Release(root); }//析构函数，释放各节点的存储空间
	void PreOrder() { PreOrder(root); }//前序遍历二叉树
	void InOrder() { InOrder(root); }//中序遍历二叉树
	void PostOrder() { PostOrder(root); }//后序遍历二叉树
};