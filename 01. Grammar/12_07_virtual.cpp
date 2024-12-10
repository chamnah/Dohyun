#include <iostream>
using namespace std;

/*
클래스 상속 : 부모 클래스가 자식 클래스에게 변수 혹은 함수를 넘겨주는것.
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
클래스

class 챔피언
{
}
class 볼리베어
class 요네
class 야스오
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
	int m_iShieldDeffence; // 방패 방어력
};

class CAchor : public CPlayer
{
public:
	int m_iArrowCount; // 화살 갯수
};

class CWizzard : public CPlayer
{
public:
	int m_iMagicAttack; // 마법 공격력
};

/*
텍스트 알피지

플레이어

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
접근지정자 - 클래스의 멤버 변수 혹은 함수의 내/외부 접근 영역을 지정하는 키워드 
public : 클래스 내부 혹은 외부 모두 접근이 가능하다. 자식 클래스 O
private : 클래스 내부에서만 접근이 가능하다. 자식 클래스 X
protected : 클래스 내부와 자식 클래스에서 접근이 가능하다. 외부X

private   : 클래스 내부 O / 자식 X / 외부 X
protected : 클래스 내부 O / 자식 O / 외부 X
public    : 클래스 내부 O / 자식 O / 외부 O 
*/

/*
숙제 : 복습
접근지정자 확인 할 거

*/
/*
부모 클래스
자식 클래스

접근지정자
private : 클래스 내부 O 외부 X 자식 클래스 X
protected : 클래스 내부 O 외부 X 자식 클래스 O
public : 클래스 내부 O 외부 O 자식 클래스 O

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