#include <iostream>
using namespace std;

/*
Ŭ���� ��� : �θ� Ŭ������ �ڽ� Ŭ�������� ���� Ȥ�� �Լ��� �Ѱ��ִ°�.
*/

class Parent
{
public:
	int m_iNum = 20;
};

class Child1 : public Parent
{
};

class Child2 : public Parent
{
};

class Child3 : public Parent
{
};

/*
Ŭ����

class è�Ǿ�
{
}
class ��������
class ���
class �߽���
*/

class CPlayer
{
public:
	int m_iHP; // 4byte
	int m_iMoney;

	void PrintPlayer()
	{
		m_iHP;
		cout << "Show Player" << endl;
	}
};

class CWarrior : public CPlayer
{
public:
	int m_iShieldDeffence; // ���� ����
};

class CAchor : public CPlayer
{
public:
	int m_iArrowCount; // ȭ�� ����
};

class CWizzard : public CPlayer
{
public:
	int m_iMagicAttack; // ���� ���ݷ�
};

/*
�ؽ�Ʈ ������

�÷��̾�

*/

class CA
{
private:
	int m_iPrivateNum = 0;
protected:
	int m_iProtectedNum = 0;
public:
	int m_iPublicNum = 0;

	void AFunc()
	{
		m_iPrivateNum = 30;
		m_iProtectedNum = 20;
		m_iPublicNum = 40;
	}

	void Func2()
	{
		//m_iPrivateNum
	}
};

class CB : public CA
{
	void BFunc()
	{
		//m_iPrivateNum = 20; X
		m_iProtectedNum = 10;
		m_iPublicNum = 20;
	}
};

int main()
{
	CB tempB;
	//tempB.m_iPrivateNum X;
	//tempB.m_iProtectedNum X;
	tempB.m_iPublicNum = 20;

	/*CWarrior tempA;
	tempA.PrintPlayer();*/

	//int 4byte
	//cout << sizeof(CWarrior);

	return 0;
}

/*
���������� - Ŭ������ ��� ���� Ȥ�� �Լ��� ��/�ܺ� ���� ������ �����ϴ� Ű���� 
public : Ŭ���� ���� Ȥ�� �ܺ� ��� ������ �����ϴ�. �ڽ� Ŭ���� O
private : Ŭ���� ���ο����� ������ �����ϴ�. �ڽ� Ŭ���� X
protected : Ŭ���� ���ο� �ڽ� Ŭ�������� ������ �����ϴ�. �ܺ�X

private   : Ŭ���� ���� O / �ڽ� X / �ܺ� X
protected : Ŭ���� ���� O / �ڽ� O / �ܺ� X
public    : Ŭ���� ���� O / �ڽ� O / �ܺ� O 
*/

/*
���� : ����
���������� Ȯ�� �� ��

*/
/*
�θ� Ŭ����
�ڽ� Ŭ����

����������
private : Ŭ���� ���� O �ܺ� X �ڽ� Ŭ���� X
protected : Ŭ���� ���� O �ܺ� X �ڽ� Ŭ���� O
public : Ŭ���� ���� O �ܺ� O �ڽ� Ŭ���� O

*/

class CParent
{
private:
	int m_privateNum;
protected:
	int m_protectedNum;
public:
	int m_publicNum;

	void ParentFunc()
	{
		m_privateNum = 20; 
		m_protectedNum = 20; 
		m_publicNum = 20; 
	}
};

class CChild : public CParent
{

public:
	void ChildFunc()
	{
		m_privateNum = 20;   
		m_protectedNum = 20; 
		m_publicNum = 20;    
	}

};

int main()
{
	CChild tempChild;
	tempChild.m_publicNum = 20;

	// m_privateNum = 20;   X
	// m_protectedNum = 20; X
	// m_publicNum = 20;    O

}