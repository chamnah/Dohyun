#include <iostream>
using namespace std;

class A
{
public:
	int m_iNum = 20;

	A()
	{
		cout << "1. 기본 생성자 호출" << endl;
	}
	A(int iNum)
	{
		cout << "2. 인자있는 생성자 호출" << endl;
	}
	A(const A& other)
	{
		cout << "3. 복사 생성자 호출" << endl;
	}

	void operator =(int other)
	{
		cout << "4. operator int 호출" << endl;
	}

	void operator =(const A& other)
	{
		cout << "5. operator A 호출" << endl;
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


void func(A other) // other 객체 생성
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
	A tempB(tempA); // 복사생성자
	delete tempA.m_pCheck;

	std::cout << "ptr :" << *tempB.m_pCheck << "bool : " << tempB.m_bCheck << endl;
}*/