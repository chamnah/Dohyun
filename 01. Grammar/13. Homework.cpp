#include <iostream>
#include <Windows.h>
using namespace std;

enum RockScissorsPaperType
{
    SCISSORS = 1,
    ROCK,
    PAPER,
    EXIT
};

void main()
{
    SetConsoleTitle(L"가위, 바위, 보 게임");
    system("mode con:cols=67 lines=36");

    while (true)
    {
        srand(time(0)); // 반복

        //반복
        int playerInput = 0;
        cout << "1. 가위 2. 바위 3. 보 4. 나가기" << endl;
        cin >> playerInput; // 이 함수를 만나면 입력이 될 때까지 멈춘다.

        if (playerInput == EXIT)
        {
            break;
        }

        system("cls");

        //반복
        int cpuInput = rand() % 3 + 1; //0 + 1 ~ 2 + 1 -> 1 ~ 3  0 + 1 -> 1

        //반복
        // 플레이어 가위 바위 보 결과

        if (playerInput == ROCK && cpuInput == SCISSORS)
        {
            cout << "이겼습니다." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == PAPER)
        {
            cout << "이겼습니다." << endl;
        }
        else if (playerInput == PAPER && cpuInput == ROCK)
        {
            cout << "이겼습니다." << endl;
        }
        else if (playerInput == PAPER && cpuInput == PAPER)
        {
            cout << "무승부입니다." << endl;
        }
        else if (playerInput == ROCK && cpuInput == ROCK)
        {
            cout << "무승부입니다." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == SCISSORS)
        {
            cout << "무승부입니다." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == ROCK)
        {
            cout << "졌습니다." << endl;
        }
        else if (playerInput == PAPER && cpuInput == SCISSORS)
        {
            cout << "졌습니다." << endl;
        }
        else if (playerInput == ROCK && cpuInput == PAPER)
        {
            cout << "졌습니다." << endl;
        }
        else
        {
            cout << "오류입니다" << endl;
        }

        if (playerInput == ROCK)
        {
            cout << "플레이어가 낸 것 : 바위" << endl;
        }
        else if (playerInput == SCISSORS)
        {
            cout << "플레이어가 낸 것 : 가위" << endl;
        }
        else if (playerInput == PAPER)
        {
            cout << "플레이어가 낸 것 : 보자기" << endl;
        }

        if (cpuInput == ROCK)
        {
            cout << "컴퓨터가 낸 것 : 바위" << endl;
        }
        else if (cpuInput == SCISSORS)
        {
            cout << "컴퓨터가 낸 것 : 가위" << endl;
        }
        else if (cpuInput == PAPER)
        {
            cout << "컴퓨터가 낸 것 : 보자기" << endl;
        }
        else
        {
            cout << "오류발생" << endl;
        }
    }
}