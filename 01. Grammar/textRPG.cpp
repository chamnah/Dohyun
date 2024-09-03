#include <iostream>

using namespace std;

enum JobType
{
	NONE,
	WIZZARD,
	WARRIOR,
	SOCCER_PLAYER,
	STUDENT,
	LOL_GAMER
};

class Player
{
private:
	char m_szName[10];
	JobType m_eJob = JobType::NONE;
	int  m_iLevel = 0;
	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0;

public:
	//Getter/Setter
	void SetName(const char* pszName)
	{
		strcpy_s(m_szName, pszName);
	}

	const char* GetName()
	{
		return m_szName;
	}

	void SetAttack(int _iAttackPoint)
	{
		m_iAttack = _iAttackPoint;
	}

	void SetJob(JobType _eType)
	{
		m_eJob = _eType;
	}

	const char* GetJobName()
	{
		switch (m_eJob)
		{
		case WIZZARD:
			return "마법사";
		case WARRIOR:
			return "전사";
		case SOCCER_PLAYER:
			return "축구 선수";
		case STUDENT:
			return "학생";
		case LOL_GAMER:
			return "롤 프로게이머";
		default:
			break;
		}
	}

	void PrintStatus()
	{
		cout << "============== 상태창 ==============" << endl;
		cout << "이름 : " << m_szName << endl;
		cout << "레벨 : " << m_iLevel << endl;
		cout << "직업 : " << GetJobName() << endl;
		cout << "물리 공격력 : " << m_iAttack << endl;
		cout << "마법 공격력 : " << m_iMagicAttack << endl;
		cout << "방어력 : " << m_iDefence << endl;
		cout << "돈 : " << m_iMoney << endl;
		cout << "==================================" << endl;
	}

};

int main()
{
	cout << "눈을 뜨세요. 용사여......" << endl;
	cout << "도현 월드에 온 걸 환영하네." << endl;
	cout << "자네의 이름은 무엇인가?" << endl;

	Player p1;

	char szName[10];
	cin >> szName;
	p1.SetName(szName);

	cout << "자네의 이름은 " << p1.GetName() << "이군." << endl;
	
	while (true)
	{
		cout << "우리 월드를 탐험하기 위해서는 직업이 필수라네." << endl;
		cout << "원하는 직업을 골라보게나." << endl;
		cout << "1. 마법사 2. 전사 3. 축구선수 4.학생 5. 롤 게이머 " << endl;

		int iJob;
		cin >> iJob;
		
		switch (iJob)
		{
		case WIZZARD:
			cout << "======= 마법사 ======" << endl;
			cout << "물리 공격력 : 3" << endl;
			cout << "마법 공격력 : 10" << endl;
			cout << "방어력 : 2" << endl;
			cout << "돈 : 500" << endl;
			p1.SetAttack(3);
			p1.SetJob(WIZZARD);
			break;
		case WARRIOR:
			cout << "======= 전사 ======" << endl;
			cout << "물리 공격력 : 7" << endl;
			cout << "마법 공격력 : 2" << endl;
			cout << "방어력 : 5" << endl;
			cout << "돈 : 300" << endl;
			p1.SetJob(WARRIOR);
			break;
		case SOCCER_PLAYER:
			cout << "======= 축구선수 ======" << endl;
			cout << "물리 공격력 : 20" << endl;
			cout << "마법 공격력 : 1" << endl;
			cout << "방어력 : 7" << endl;
			cout << "돈 : 10000" << endl;
			p1.SetJob(SOCCER_PLAYER);
			break;
		case STUDENT:
			cout << "======= 수험생 ======" << endl;
			cout << "물리 공격력 : 3" << endl;
			cout << "마법 공격력 : 3" << endl;
			cout << "방어력 : 4" << endl;
			cout << "돈 : 200" << endl;
			p1.SetJob(STUDENT);
			break;
		case LOL_GAMER:
			cout << "======= 롤 게이머 ======" << endl;
			cout << "물리 공격력 : 15" << endl;
			cout << "마법 공격력 : 10" << endl;
			cout << "방어력 : 6" << endl;
			cout << "돈 : 50000" << endl;
			p1.SetJob(LOL_GAMER);
			break;
		default:
			break;
		}

		int selectInput = 0;
		cout << "1. 선택 2. 뒤로가기" << endl;
		cin >> selectInput;

		if (selectInput == 1)
		{
			// 능력치 세팅
			break;
		}

		system("cls");
	}
	// 능력치 출력하기

	p1.PrintStatus();

	return 0;
}

/*
숙제 : 직업 선택 후 능력치 세팅하기
주의 : private 상태 변경하면 안됨
*/

/*
숙제
1. 직업 선택 후 아래 선택지 띄우기
  1. 던전
  2. 여관
  3. 상점
  4. 나가기

2. 나가기 구현해보기(게임 종료) 

인재개발원 -> 앱 인벤터 / 앤트리

해본거
앱 인벤터 : 회원 가입 / 로그인 / QR 생성 / QR 스캔

개발원


*/