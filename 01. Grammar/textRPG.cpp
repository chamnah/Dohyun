#include <iostream>

using namespace std;

enum DungeonType
{
	MOUNTAIN_OF_GOLEM, // 골렘 0
	NEST_OF_BALROG,    // 발록 1
	CAVE_OF_ZAKUM,     // 자쿰 2
	BLACKWIZARD,       // 검은 마법사 3
	END,               // 4
	BACK = END
};
enum MainSelectType
{
	DUNGEON,
	HOTEL,
	STORAGE,
	EXIT
};

enum JobType
{
	NONE,
	WIZZARD,
	WARRIOR,
	SOCCER_PLAYER,
	STUDENT,
	LOL_GAMER
};

class Monster
{
private:
	char m_szName[10];
	int  m_iHP;
	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0; // 드롭 머니

public:
	void SetName(const char* pszName)
	{
		strcpy_s(m_szName, pszName);
	}
};

class Player
{
private:
	char m_szName[10];
	JobType m_eJob = JobType::NONE;
	int  m_iHP;
	int  m_iLevel = 0;
	int  m_iAttack = 0; //AD
	int  m_iMagicAttack = 0; // AP
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

	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0; // 드롭 머니

	Player p1;
	Monster arrayMonster[DungeonType::END] = 
	{ 
	  {"아주 강한 골렘", 100, 20, 10, 50, 100},
	  {"마음이 아픈 발록", 200, 40, 20, 100, 200},
	  {"자...자쿰", 400, 80, 40, 200, 400},
	  {"어두침침한 법사", 800, 160, 80, 400, 800}
	};
	// 몬스터 능력치 미리 세팅
	
	arrayMonster[DungeonType::MOUNTAIN_OF_GOLEM].SetName("아주 강한 골렘");
	arrayMonster[DungeonType::NEST_OF_BALROG].SetName("약한 검은 마법사");
	arrayMonster[DungeonType::CAVE_OF_ZAKUM].SetName("약한 검은 마법사");
	arrayMonster[DungeonType::BLACKWIZARD].SetName("약한 검은 마법사");


	char szName[10];
	cin >> szName;
	p1.SetName(szName);

	cout << "자네의 이름은 " << p1.GetName() << "이군." << endl;
	
	// 직업 고르기
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
			break;
		}

		system("cls");
	}

	p1.PrintStatus();

	while (true)
	{
		int mainSelect = 0;
		cout << "1. 던전 2. 여관 3. 상점 4. 게임 종료" << endl;
		cin >> mainSelect;
		system("cls");

		switch (mainSelect)
		{
		case DUNGEON:
		{
			cout << "1. 골렘의 산 2. 발록의 둥지 3. 자쿰의 동굴 4. 검은 마법사 5. 뒤로 가기" << endl;
			int dungeonSelect = 0;
			cin >> dungeonSelect;
			switch (dungeonSelect)
			{
			case MOUNTAIN_OF_GOLEM:
				cout << "====== 골렘의 산 =====" << endl;
				//몬스터 능력치(0)
				// 플레이어 능력치(0)
				arrayMonster[dungeonSelect];
				p1;
				// 전투

				break;
			case NEST_OF_BALROG:
				cout << "====== 발록의 둥지 =====" << endl;

				// 전투

				break;
			case CAVE_OF_ZAKUM:
				cout << "====== 자쿰의 동굴 =====" << endl;

				// 전투

				break;
			case BLACKWIZARD:
				cout << "====== 검은 마법사 =====" << endl;

				// 전투

				break;
			case BACK:
				break;
			default:
				break;
			}
		}

			break;
		case HOTEL:
			break;
		case STORAGE:
			break;
		case EXIT:
			break;
		default:
			break;
		}
	}

	

	return 0;
}

/*
10/05 ~ 10/08 숙제

앱 인벤터 
결과값 텍스트 컴포넌트에 출력하기
준비 블록 활용해서, 준비 되었다는 내용을 텍스트 컴포넌트에 출력하기
*/

/*
10/1 숙제

1. 모든 던전 몬스터 능력치 / 플레이어 능력치 띄우기

2. 앱인벤터 알아오기

*/

/*
09/28 숙제
1. 몬스터 능력치 세팅

2. 던전 입장 시, 몬스터와 플레이어 능력치 각각 출력

3. 웹 인증 알아오기
*/


/*
09/24 숙제
1. 웹 인증하기 만들기
 - 혹시 문제 발생 시 문의 바람

2. 아이디와 내 점수 함께 표시하기(꼭)

--------------------------------------
     랭킹
1. 김땡땡 10

아이디 : 김땡땡 / 점수 : 0
1. 쓰레기 줍기
2. 전기 아껴쓰기

09/21 숙제
앱인벤터 로그인 기능 만들어오기
*/

/*
영재 개발원 과제

1. 기획 O
- 지구챌린지
-- 퀘스트 부여
-- 퀘스트 완료 - 카메라 인증
-- 인증되면, 점수 받음
-- 점수는 파이어 베이스로 관리
-- 점수판에 점수들 등록
*/


/* 
할 수 있는 것
1. 로그인
2. 카메라 인증 가능
*/

/*
09 / 14 숙제
1. 던전 선택 후, 던전 몬스터 능력치 출력하기
*/

/* 09 / 07 숙제
1. 몬스터 종류 별로 능력치 세팅해오기
  - 몬스터 타입 및 능력치와 이름은 마음대로 설정 가능

2. 복습 꼼꼼히 해오기~!!!!!
*/



/*
숙제 : 복습~!!
안보고 치기
*/




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
얼굴 스캔 / 사물 판단

*/