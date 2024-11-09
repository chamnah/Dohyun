#include <iostream>
using namespace std;

class A
{
public:
	int m_iNum = 0;

public:
	int operator +(int num)
	{
		return m_iNum + num;
	}

	void operator +=(int num)
	{
		m_iNum += num;
	}

	void operator =(int num)
	{
		m_iNum = num;
	}

	bool operator ==(int num)
	{
		return m_iNum == num;
	}


	void Add(int Num)
	{
		m_iNum += Num;
		cout << m_iNum << endl;
	}
};

int main()
{
	A temp;
	//temp.m_Num += 10;
	//temp.Add(10);

	//temp += 10;
	cout << temp + 20 << endl;
	temp = -100;

	cout << temp.m_iNum << endl;

	if (temp == 100)
	{
		cout << "같다" << endl;
	}
	else
	{
		cout << "다르다" << endl;
	}
	int iA = 0;
	int iB = iA + 10;
	iA += 10;

	return 0;
}

/*

opeator 만들기

1. +(더하기),-(빼기),*(곱),/(나누기),%(나머지) 만들기
2. +=,-=,*=,/=, %= 만들기
3. ==,!=,<,>,<=,>= 만들기

!
class A
{
private:
   int m_iNum;
public:
   A operator+(A other)
   {
       m_iNum + other.m_iNum;
	   return *this;
	   this : 자신의 포인터 
   }

   float operator+(float other) // bool
   {
       return m_iNum + other;
   }
}
1 인자가 같은 클래스 인 경우
2 인자가 bool인 경우
3 인자가 float인 경우

*/