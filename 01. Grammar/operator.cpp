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

	bool 참(true) / 거짓(false)

	bool a = (10 == 10) 참(true)
	
	참 or 참 = 참
	참 or 거짓 = 참
	거짓 or 참 = 참
	거짓 or 거짓 = 거짓
	*/



	/*int a = 10;
	if (999999)
	{
		cout << "10이 맞습니다." << endl;
	}
	else
	{
		cout << "10이 아닙니다." << endl;
	}*/
}

/*
1bit 0 1
1byte - 8bit

true - 정수 표현 시 0이 아닌 수
false - 0

bool  |  참(true) or 거짓(false)				| 1byte
char  |	 문자									| 1byte
int	  |	 정수 0,+10,-10							| 4byte
float |	 실수 0.1 3.0							| 4byte
*/


/*
opeator 만들기
1. +(더하기),-(빼기),*(곱),/(나누기),%(나머지) 만들기 
2. +=,-=,*=,/=, %= 만들기
3. ==,!=,<,>,<=,>= 만들기
*/

