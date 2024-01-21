#include <iostream>
#define STAR -1
using namespace std;

void main()
{
	int board[25];

	// 빙고판 판 만들기
	for (int i = 0; i < 25; i++)
	{
		board[i] = i + 1;
	}

	while (true)
	{
		for (size_t i = 0; i < 5; i++)// 0 ~ 4
		{
			for (size_t j = 0; j < 5; j++)//0 ~ 4
			{
				// i = 0 j 0 ~ 4 ; 0 ~4
				// i = 1 j 0 ~ 4 ; 0 ~4 + 5 -> 5 ~ 9
				if (board[(5 * i) + j] == STAR)
				{
					cout << "*" << "\t";
				}
				else
				{
					cout << board[(5 * i) + j] << "\t"; // 0 ~ 24
				}
			}
			cout << endl;
		}

		cout << "숫자를 입력해주세요." << endl;
		int select;
		cin >> select;
		board[select - 1] = STAR;

		int rows = 0;// 행 (가로)
		int column = 0; //열 (세로)
		int bingo = 0;

		for (size_t i = 0; i < 5; i++)
		{
			rows = 0;
			for (size_t j = 0; j < 5; j++) // 
			{
				//i = 0 / j 0 ~ 4  = 0 ~ 4
				//i = 1 / j 0 ~ 4  = 5 ~ 9
				if (board[5 * i + j] == STAR)
				{
					++rows;
				}
			}

			if (rows == 5)
			{
				++bingo;
			}
		}
		system("cls");
	}
}

/*
i = 0 j = 0 => 0
i = 0 j = 1 => 5
i = 0 j = 2 => 10
i = 0 j = 3 => 15
i = 0 j = 4 => 20

0 + 5 = 5

i = 1 j = 0 => 1
i = 1 j = 1 => 6
i = 1 j = 2 => 11
i = 1 j = 3 => 16
i = 1 j = 4 => 21

i = 2 j = 0 => 2
i = 2 j = 1 => 7
i = 2 j = 2 => 12
i = 2 j = 3 => 17
i = 2 j = 4 => 22

*/

/*
복습
빙고 다음시간에 안보고 만들기
*/


/*
1. 5x5 크기의 빙고판 만들기(Clear)
2. 입력한 숫자의 값을 *로 변경하기(Clear)
3. 별로 변경된 빙고판 갱신해서 출력하기(Clear)
- 숙제
4. *이 가로,세로,대각선 중 하나가 5개가 되면 빙고라고 출력하기
*/

/*
6차이
0  1  2  3  4
5  6  7  8  9
10 11 12 13 14
15 16 17 18 19
20 21 22 23 24



5 x 5 
1   2  3  4 5 endl; i+1
6   7  8  9 10 endl;i+1
11 12 13 14 15 endl;i+1
16 17 18 19 20 endl;i+1
21 22 23 24 25      i+1
*/