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

	/*
	ClassA
	{
	  int a = 10
	  int b = 20
	}
	A.a + A.b   B.a + B.b 
	ClassB
	{
	  int a = -10;
	  int b = 30;
	}

	bool ��(true) / ����(false)

	bool a = (10 == 10) ��(true)
	
	�� or �� = ��
	�� or ���� = ��
	���� or �� = ��
	���� or ���� = ����
	*/



	/*int a = 10;
	if (999999)
	{
		cout << "10�� �½��ϴ�." << endl;
	}
	else
	{
		cout << "10�� �ƴմϴ�." << endl;
	}*/
}

/*
1bit 0 1
1byte - 8bit

true - ���� ǥ�� �� 0�� �ƴ� ��
false - 0

bool  |  ��(true) or ����(false)				| 1byte
char  |	 ����									| 1byte
int	  |	 ���� 0,+10,-10							| 4byte
float |	 �Ǽ� 0.1 3.0							| 4byte
*/


/*
opeator �����
1. +(���ϱ�),-(����),*(��),/(������),%(������) ����� 
2. +=,-=,*=,/=, %= �����
3. ==,!=,<,>,<=,>= �����
*/

