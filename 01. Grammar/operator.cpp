#include <iostream>
using namespace std;

class A
{
public:
	int m_iA = 200;

	int operator +(int other)
	{
		return m_iA + other;
	}
	
	void operator =(int other)
	{
		m_iA = other;
	}

	void operator +=(int other)
	{
		m_iA = m_iA + other;
	}

	bool operator !=(int other)
	{
		return m_iA != other;
	}

};

int main()
{
	A temp;
	temp = 10;
	temp = temp + 10;
	temp += 20;

	if (temp != 10)
	{

	}

	int a = 10; // 10
	a = a + 10; // 10 + 10
	a += 20;    // 10 + 10 + 20
	
	cout << "a : " << a << "class temp : " << temp.m_iA;

	/*int a = 10,
	int b = 20;

	cout << a + b;*/
}

/*
opeator �����
1. +(���ϱ�),-(����),*(��),/(������),%(������) ����� 
2. +=,-=,*=,/=, %= �����
3. ==,!=,<,>,<=,>= �����
*/