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
    SetConsoleTitle(L"����, ����, �� ����");
    system("mode con:cols=67 lines=36");

    while (true)
    {
        srand(time(0)); // �ݺ�

        //�ݺ�
        int playerInput = 0;
        cout << "1. ���� 2. ���� 3. �� 4. ������" << endl;
        cin >> playerInput; // �� �Լ��� ������ �Է��� �� ������ �����.

        if (playerInput == EXIT)
        {
            break;
        }

        system("cls");

        //�ݺ�
        int cpuInput = rand() % 3 + 1; //0 + 1 ~ 2 + 1 -> 1 ~ 3  0 + 1 -> 1

        //�ݺ�
        // �÷��̾� ���� ���� �� ���

        if (playerInput == ROCK && cpuInput == SCISSORS)
        {
            cout << "�̰���ϴ�." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == PAPER)
        {
            cout << "�̰���ϴ�." << endl;
        }
        else if (playerInput == PAPER && cpuInput == ROCK)
        {
            cout << "�̰���ϴ�." << endl;
        }
        else if (playerInput == PAPER && cpuInput == PAPER)
        {
            cout << "���º��Դϴ�." << endl;
        }
        else if (playerInput == ROCK && cpuInput == ROCK)
        {
            cout << "���º��Դϴ�." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == SCISSORS)
        {
            cout << "���º��Դϴ�." << endl;
        }
        else if (playerInput == SCISSORS && cpuInput == ROCK)
        {
            cout << "�����ϴ�." << endl;
        }
        else if (playerInput == PAPER && cpuInput == SCISSORS)
        {
            cout << "�����ϴ�." << endl;
        }
        else if (playerInput == ROCK && cpuInput == PAPER)
        {
            cout << "�����ϴ�." << endl;
        }
        else
        {
            cout << "�����Դϴ�" << endl;
        }

        if (playerInput == ROCK)
        {
            cout << "�÷��̾ �� �� : ����" << endl;
        }
        else if (playerInput == SCISSORS)
        {
            cout << "�÷��̾ �� �� : ����" << endl;
        }
        else if (playerInput == PAPER)
        {
            cout << "�÷��̾ �� �� : ���ڱ�" << endl;
        }

        if (cpuInput == ROCK)
        {
            cout << "��ǻ�Ͱ� �� �� : ����" << endl;
        }
        else if (cpuInput == SCISSORS)
        {
            cout << "��ǻ�Ͱ� �� �� : ����" << endl;
        }
        else if (cpuInput == PAPER)
        {
            cout << "��ǻ�Ͱ� �� �� : ���ڱ�" << endl;
        }
        else
        {
            cout << "�����߻�" << endl;
        }
    }
}