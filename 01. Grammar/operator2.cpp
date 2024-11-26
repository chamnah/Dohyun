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

opeator(연산자) 만들기

1. +(더하기),-(빼기),*(곱),/(나누기),%(나머지) 만들기
2. +=,-=,*=,/=, %= 만들기
3. ==,!=,<,>,<=,>= 만들기

1 인자가 같은 클래스 인 경우
2 인자가 bool인 경우
3 인자가 float인 경우

!
11/12 숙제~!!!!
1 인자가 같은 클래스 인 경우

class A
{
private:
   int m_iNum;
   float m_fNum;
   bool  m_b;
public:
   A operator+(A other)
   {
      A cA;
      cA.m_iNum = m_iNum + other.m_iNum;
      cA.m_fNum = m_fNum + other.m_fNum;
      cA.m_b = m_b + other.m_b;
   }

   float operator+(float other) // bool
   {
       return m_iNum + other;
   }
}



*/