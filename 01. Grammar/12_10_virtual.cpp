#include <iostream>

using namespace std;

/*
�ε� - ȣ��
�Լ� �����ε� : ������ �̸��� �Լ��� ���ڷ� �����Ͽ� ������

���̵� - �θ� ���� �ڽ��� �ö�Ÿ�� ����
�Լ� �������̵� : �θ� Ŭ�������� ���� �Լ��� �ڽ� Ŭ�������� ������ / ���� �Լ��� ����
*/

//void Func()
//{
//	cout << "Func1" << endl;
//}

/*
int Func()
{
	cout << "Func3" << endl;
	return 0;
}
*/
//void Func(int a)
//{
//	cout << "Func2" << endl;
//}

// ���� or ������ : virtual

class CParent
{
public:
	virtual void PrintMyClassName()
	{
		cout << "CParent Ŭ���� ȣ��" << endl;
	}
};

class CChild : public CParent
{
public:
	void PrintMyClassName()
	{
		cout << "CChild Ŭ���� ȣ��" << endl;
	}
};

/*
parent class è�Ǿ�

child class : ��������,�߽���,���
virtual PrintMyName()

int main()
{
   è�Ǿ�Ŭ������ �ڽ� Ŭ���� �����Ҵ�
   è�Ǿ� Ŭ���� PrintMyName�Լ� ȣ��

}
*/

int main()
{
	CParent* pParent = new CChild;
	pParent->PrintMyClassName();

	/*
	�θ� ������ Ȱ�� ��, �ϳ��� �迭�� ���� ����
	CParent* arrParent[2];
	arrParent[0] = new CChild;
	arrParent[1] = new CChild2;*/

	/*CParent* pParent = new CParent;
	pParent->PrintMyClassName();*/

	/*CParent tempParent;
	tempParent.PrintMyClassName();

	CChild tempChild;
	tempChild.PrintMyClassName();*/

	return 0;
}

/*
����
1. è�Ǿ� �θ� Ŭ���� ������ �迭 ũ�� 3���� �����
2. �迭 �ε��� 0,1,2 �� �߽���,���,�������� �����Ҵ�
3. �ݺ����� ����Ͽ�, �迭 ��� �ε��� ��ȸ�Ͽ�, PrintMyName�Լ� ȣ��
*/

/*
class CChild2 : public CParent
{
public:
	void PrintMyClassName()
	{
		cout << "CChild Ŭ���� ȣ��" << endl;
	}
};
*/