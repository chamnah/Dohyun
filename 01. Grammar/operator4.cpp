#include <iostream>

using namespace std;

class A
{
public:
	// 1byte / 8bit -> 2byte / 16bit
	int a; // 4byte / 32bit 
	//���� : �������
	//�Լ��� : ���

	void func(int a) // ����
	{
		// ��ȯ��(void) �Լ��̸�(func) ����(int a) �Լ� ������(�߰�ȣ)
	}

	void operator =(int other)
	{
		//��ȯ��(void) �Լ��̸�(operator =) ����(int other) �Լ� ������(�߰�ȣ)
	}
};

class B
{
public:
	int a;
	int b;

	B operator +(B other)
	{
		B temp;
		temp.a = a + other.a;
		temp.b = b + other.b;
		return temp;
	}
};


int main()
{
	B tempA;
	tempA.a = 20;
	tempA.b = 30;

	B tempB;
	tempB.a = 10;
	tempB.b = 40;

	B tempC = tempA + tempB;

	cout << tempC.a << " / " << tempC.b << endl;

	/*
	1. operator �̸��� ������ �ִ�? ����? : �ִ�
	2. operator�� ������? �ƴϴ�? : �ƴϴ� �Լ���
	3. operator�� Ŭ���� ���ο����� ����� �� �ִ�? ����?
	���ο����� ��� ����
	*/

	/*A temp;
	temp = 3;

	int a = 3;

	a += 3;
	a -= 3;*/

	int a = 10;
	a += 20; // a = a + 20;

	cout << a << endl;

	// operator : ��ü

	return 0;
}

/*
�����ϱ�~!!!!
*/

/*
�ڷ���
int    ����    4byte
char   ����    1byte
float  �Ǽ�    4byte
bool   ��/���� 1byte

1byte - 8bit
1bit 0 or 1
010110 6bit 2^6
*/
/*
"����"�� <-> "�Ҹ�"��

������ 
�Լ���? O ������?
1. Ŭ���� ���ο����� ���� �� �ִ�? O (��� �Լ�)
2. Ŭ���� �ۿ����� ���� �� �ִ�? X

1. �����ڴ� ������ �ʾƵ� �ڵ����� �����ȴ�?
2. �����ڴ� ���� ���� ����ؾ� �Ѵ�? X

1. �����ڴ� �̸��� ������ �ִ�?
2. ������ �̸��� ���� ���� ������ �� �ִ�? X

1. �����ڴ� Ŭ������ ������ �� ȣ��ȴ�?
2. �����ڴ� Ŭ������ �Ҹ�� �� ȣ��ȴ�? X

class A
{
public:
    A()
	{}

	~A()
	{}
}


*/