#include <iostream>
using namespace std;

class A
{
public:
	int m_iNum = 20;

	A()
	{
		cout << "1. �⺻ ������ ȣ��" << endl;
	}
	A(int iNum)
	{
		cout << "2. �����ִ� ������ ȣ��" << endl;
	}
	A(const A& other)
	{
		cout << "3. ���� ������ ȣ��" << endl;
	}

	void operator =(int other)
	{
		cout << "4. operator int ȣ��" << endl;
	}

	void operator =(const A& other)
	{
		cout << "5. operator A ȣ��" << endl;
	}
};

int main()
{
	A tempA;
	tempA = 10;

	/*A tempB = func2();
	int a = 20;*/
	/*A tempA;
	func(tempA);*/

	return 0;
}


void func(A other) // other ��ü ����
{

}

A func2()
{
	A tempA;
	tempA.m_iNum = 20;

	return tempA;
}






/*
class A
{
public:
	bool m_bCheck = true;
	bool* m_pCheck = nullptr;

	A()
	{
	}
	A(const A& other)
	{
		m_bCheck = false;// tempA / tempB
	}
};

int main()
{
	A tempA;
	tempA.m_bCheck = false;
	tempA.m_pCheck = new bool;
	*tempA.m_pCheck = true;

	//A tempB = tempA;
	A tempB(tempA); // ���������
	delete tempA.m_pCheck;

	std::cout << "ptr :" << *tempB.m_pCheck << "bool : " << tempB.m_bCheck << endl;
}*/