#include <iostream>
using namespace std;

class A
{
public:
	A() 
	{
		cout << "�⺻ ������ ȣ��" << endl;
	}
	A(int iNum)
	{
		cout << "�����ִ� ������ ȣ��" << endl;
		cout << iNum << endl;
	}

	A(const A& other) // other tempA
	{
		cout << "���� ������ ȣ��" << endl;
		//cout << other.m_iNum << endl;

		m_iNum = other.m_iNum; // tempB
	}

	int m_iNum = 0;
};

int main()
{
	//A tempA = 10;// == tempA(10)
	A tempA;// �⺻������
	tempA.m_iNum = 10;

	A tempB(tempA); // ���������

	cout << "tempA : " << tempA.m_iNum << endl; // 10
	cout << "tempB : " << tempB.m_iNum << endl; // 200

	/*
	tempB.m_iNum = tempA.m_iNum;
	*/

	//cout << tempB.m_iNum;

	return 0;
}