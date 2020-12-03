#pragma once

struct BinaryTreeNode
{
	char data;
	BinaryTreeNode* lchild, * rchild;
};

class BinaryTree
{
private:
	BinaryTreeNode* root;//ָ����ڵ��ͷָ��
	BinaryTreeNode* Create(BinaryTreeNode* bt);//���캯������
	void Release(BinaryTreeNode* bt);//������������
	void PreOrder(BinaryTreeNode* bt);//ǰ�������������
	void InOrder(BinaryTreeNode* bt);//���������������
	void PostOrder(BinaryTreeNode* bt);//���������������
public:
	BinaryTree() { root = Create(root); }//���캯��
	~BinaryTree() { Release(root); }//�����������ͷŸ��ڵ�Ĵ洢�ռ�
	void PreOrder() { PreOrder(root); }//ǰ�����������
	void InOrder() { InOrder(root); }//�������������
	void PostOrder() { PostOrder(root); }//�������������
};