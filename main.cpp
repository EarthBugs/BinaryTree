#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree* binarytree = nullptr;

	//循环执行以下do-while部分，除非用户退出程序
	bool exit_flag = 0;
	do
	{
		int input;

		//输入并检测输入合法性 
		int error_flag = 0;
		do
		{
			error_flag = 0;

			cout << "选择将要进行的操作(输入对应序号)(可输入0获取帮助)：";
			cin >> input;

			switch (input)
			{

			case 0://输出帮助
			{
				cout << "1.退出程序\n2.创建空二叉树\n3.前序遍历二叉树\n4.中序遍历二叉树\n5.后序遍历二叉树" << endl;
				break;
			}

			case 1:case 2:break;

			case 3:case 4:case 5:
			{
				//判断binarytree指针是否为空，为空则不允许对指向的对象进行操作
				if (binarytree == nullptr)
				{
					cout << "请先创建二叉树！" << endl;
					error_flag = 1;
				}
				break;
			}

			default://用户输入不属于上述任意选项时，将error_flag置1并输出提示语句，重新开始循环
				cout << "输入非法！" << endl;
				error_flag = 1;
				break;

			}

		} while (error_flag == 1);

		//执行对应命令
		switch (input)
		{

		case 1://退出程序
		{
			exit_flag = 1;
			break;
		}

		case 2:
		{
			binarytree = new BinaryTree();
			cout << "	已创建空二叉树。" << endl;
			break;
		}

		case 3:
		{
			binarytree->PreOrder();
			cout << "	前序遍历二叉树。" << endl;
			break;
		}

		case 4:
		{
			binarytree->InOrder();
			cout << "	中序遍历二叉树。" << endl;
			break;
		}

		case 5:
		{
			binarytree->PostOrder();
			cout << "	后序遍历二叉树。" << endl;
			break;
		}

		}
	} while (!exit_flag);
	cout << "程序已正常退出。" << endl;
}