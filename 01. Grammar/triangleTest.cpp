#include <iostream>
#include <vector> // 무한히 늘어나는 배열(가변 배열)
using namespace std;
int main()
{
    int count;
    cin >> count;

    //vector<저장할 자료형>

    // 2차원 배열
    vector<vector<int>> triangleA;
    vector<vector<int>> triangleB;

    triangleA.resize(count); // 첫번째 배열의 크기 ex) a[5][7] => 5부분의 크기를 말함
    triangleB.resize(count);


    //count 3
    // i = 0 j = 0
    // i = 1 j = 0,1
    // i = 2 j = 0,1,2

    // 정삼각형 A 입력
    for (int i = 0; i < count; ++i) // 세로 부분
    {
        for (int j = 0; j <= i; ++j) // 가로 부분
        {
            int input = 0;
            cin >> input;
            triangleA[i].push_back(input);
        }
    }

    // 정삼각형 B 입력
    for (int i = 0; i < count; ++i) // 세로 부분
    {
        for (int j = 0; j <= i; ++j) // 가로 부분
        {
            int input = 0;
            cin >> input;
            triangleB[i].push_back(input);
        }
    }


    return 0;
}