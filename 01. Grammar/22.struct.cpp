#include <iostream>
//클래스 == 구조체 c++ 기준
//커스텀 자료형
//int / char / bool : 기본 자료형
using namespace std;

struct Animal
{
	int leg;
	bool wing;
	bool tail;
};

/*
struct car
{
	int wheel; // 4byte
	int seat;  // 4
	int mouth; // 4
	int window; //4
	bool wing; //1byte
	bool boost; // 1byte
};
*/

struct car
{
	bool wing; //1byte + 3byte
	bool boost; // 1byte
	int wheel; // 4byte
};

//cout << "car의 크기 :" << sizeof(car) << endl;

/*Animal dog = {4, false, true};
dog.wing = false;
dog.leg = 4;
dog.tail = true;*/

/*
구조체의 특징 : 가장 큰 크기의 자료형을 기준으로 크기를 늘린다.
*/
enum PositionType : int
{
	FW,// 공격수
	MF,//미드필더
	DF, // 수비수
	GK // 골키퍼
};

enum SelectType
{
	ADD = 1,
	DEL,
	SEARCH,
	VIEW,
	EXIT
};

struct Player
{
	char name[16];//""
	int height; // 0
	PositionType pos; //0
};

int main()
{
	Player ply[10] = {};

	while (true)
	{
		int select;
		cout << "1. 선수 영입 2. 선수 방출 3. 선수 검색 4. 선수 보기 5. 나가기" << endl;
		cin >> select;

		switch (select)
		{
		case ADD:
			Player addPlayer;
			int pos;
			cout << "이름을 입력해주세요" << endl;
			cin >> addPlayer.name;
			cin >> pos;

			ply[0] = addPlayer;
			ply[0].pos = static_cast<PositionType>(pos);

			//선수 영입
			break;
		case DEL:
			//선수 방출
			break;
		case SEARCH:
		{
			bool sameChar = true;
			for (int i = 0; i < 9; i++) // ply 순회
			{
				sameChar = true;
				for (int j = 0; j < 16; j++) // 문자열 순회
				{
					if (ply[i].name[j] != b[j])
					{
						sameChar = false;
						break;
					}
				}

				if (sameChar)
				{
					cout << ply[i].name;
					break;
				}
			}
		}
			//선수 검색
			break;
		case VIEW:
			//선수 보기
			break;
		case EXIT:
			//나가기
			break;
		default:
			break;
		}

		/*add할때는 height == 0 존재하지 않는다.
		view할때는 name 길이가 0이면 존재하지 않는다.
		ply[i].height = 0;
		ply[i].name = "";
		ply[10]->ply[9]*/
			int n = 0;
			char temp[16] = "";
			
			memset(ply[n].name, 0, sizeof(ply[n].name));

			for (size_t i = 0; i < sizeof(ply[n].name); i++)
			{
				cout << i << "번째";
				if (true)
				{

				}
				else
				{

				}
				ply[n].name[i] = '\0';
			}
	}

	//선수 관리 프로그램
	// 선수 영입 - 추가
	// 선수 방출 - 삭제
	// 선수 검색
	return 0;

	//숙제
	//선수 관리 프로그램
	/*
	1. 선수 보기에서 내가 추가한 선수만 출력되게끔 바꾸기

	2. 선수 방출 만들어보기
	   - 선수 이름 입력 - 해당 이름의 선수가 방출
	*/

	/*
	숙제
	SEARCH 기능 - 이름 검색
	*/

	/*
	메시 

	ply 0 ~ 9
	
	ply[0].name[0 ~ 15] == 메시[0 ~ 15]
	ply[1].name == 메시
	ply[2].name == 메시

	*/
	/*
	수업모토
	학생이 보지 않고 수업코드를 작성할 수 있어야 된다.
	
	1. 문자열 복사 / 뒤에 붙이기 / 비교
	2. 선수 관리 프로그램
	3. 빙고 프로그램
	

	시간충분!! 질문!!
	*/
}