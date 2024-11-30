#include <iostream>
using namespace std;

class A
{
public:
	A() 
	{
		cout << "기본 생성자 호출" << endl;
	}
	A(int iNum)
	{
		cout << "인자있는 생성자 호출" << endl;
		cout << iNum << endl;
	}

	A(const A& other) // other tempA
	{
		cout << "복사 생성자 호출" << endl;
		//cout << other.m_iNum << endl;

		m_iNum = other.m_iNum; // tempB
	}

	int m_iNum = 0;
};

int main()
{
	//A tempA = 10;// == tempA(10)
	A tempA;// 기본생성자
	tempA.m_iNum = 10;

	A tempB(tempA); // 복사생성자

	cout << "tempA : " << tempA.m_iNum << endl; // 10
	cout << "tempB : " << tempB.m_iNum << endl; // 200

	/*
	tempB.m_iNum = tempA.m_iNum;
	*/

	//cout << tempB.m_iNum;

	return 0;
}