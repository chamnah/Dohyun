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
		cout << "����" << endl;
	}
	else
	{
		cout << "�ٸ���" << endl;
	}
	int iA = 0;
	int iB = iA + 10;
	iA += 10;

	return 0;
}

/*

opeator �����

1. +(���ϱ�),-(����),*(��),/(������),%(������) �����
2. +=,-=,*=,/=, %= �����
3. ==,!=,<,>,<=,>= �����

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
	   this : �ڽ��� ������ 
   }

   float operator+(float other) // bool
   {
       return m_iNum + other;
   }
}
1 ���ڰ� ���� Ŭ���� �� ���
2 ���ڰ� bool�� ���
3 ���ڰ� float�� ���

*/