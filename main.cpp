#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree* binarytree = nullptr;

	//ѭ��ִ������do-while���֣������û��˳�����
	bool exit_flag = 0;
	do
	{
		int input;

		//���벢�������Ϸ��� 
		int error_flag = 0;
		do
		{
			error_flag = 0;

			cout << "ѡ��Ҫ���еĲ���(�����Ӧ���)(������0��ȡ����)��";
			cin >> input;

			switch (input)
			{

			case 0://�������
			{
				cout << "1.�˳�����\n2.�����ն�����\n3.ǰ�����������\n4.�������������\n5.�������������" << endl;
				break;
			}

			case 1:case 2:break;

			case 3:case 4:case 5:
			{
				//�ж�binarytreeָ���Ƿ�Ϊ�գ�Ϊ���������ָ��Ķ�����в���
				if (binarytree == nullptr)
				{
					cout << "���ȴ�����������" << endl;
					error_flag = 1;
				}
				break;
			}

			default://�û����벻������������ѡ��ʱ����error_flag��1�������ʾ��䣬���¿�ʼѭ��
				cout << "����Ƿ���" << endl;
				error_flag = 1;
				break;

			}

		} while (error_flag == 1);

		//ִ�ж�Ӧ����
		switch (input)
		{

		case 1://�˳�����
		{
			exit_flag = 1;
			break;
		}

		case 2:
		{
			binarytree = new BinaryTree();
			cout << "	�Ѵ����ն�������" << endl;
			break;
		}

		case 3:
		{
			binarytree->PreOrder();
			cout << "	ǰ�������������" << endl;
			break;
		}

		case 4:
		{
			binarytree->InOrder();
			cout << "	���������������" << endl;
			break;
		}

		case 5:
		{
			binarytree->PostOrder();
			cout << "	���������������" << endl;
			break;
		}

		}
	} while (!exit_flag);
	cout << "�����������˳���" << endl;
}