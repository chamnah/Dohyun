#include <iostream>
#include <vector> // ������ �þ�� �迭(���� �迭)
using namespace std;
int main()
{
    int count;
    cin >> count;

    //vector<������ �ڷ���>

    // 2���� �迭
    vector<vector<int>> triangleA;
    vector<vector<int>> triangleB;

    triangleA.resize(count); // ù��° �迭�� ũ�� ex) a[5][7] => 5�κ��� ũ�⸦ ����
    triangleB.resize(count);


    //count 3
    // i = 0 j = 0
    // i = 1 j = 0,1
    // i = 2 j = 0,1,2

    // ���ﰢ�� A �Է�
    for (int i = 0; i < count; ++i) // ���� �κ�
    {
        for (int j = 0; j <= i; ++j) // ���� �κ�
        {
            int input = 0;
            cin >> input;
            triangleA[i].push_back(input);
        }
    }

    // ���ﰢ�� B �Է�
    for (int i = 0; i < count; ++i) // ���� �κ�
    {
        for (int j = 0; j <= i; ++j) // ���� �κ�
        {
            int input = 0;
            cin >> input;
            triangleB[i].push_back(input);
        }
    }


    return 0;
}