#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int height;
    cin >> height;
    vector<vector<int>> arrA;
    for (size_t i = 0; i < height; i++)
    {
        vector<int> arrLine;

        for (size_t j = 0; j < i + 1; j++)
        {
            int value;
            cin >> value;
            arrLine.push_back(value);
        }
        arrA.push_back(arrLine);
    }

    vector<vector<int>> arrB;
    for (size_t i = 0; i < height; i++)
    {
        vector<int>arrLine;
        for (size_t j = 0; j < i + 1; j++)
        {
            int value;
            cin >> value;
            arrLine.push_back(value);
        }
        arrB.push_back(arrLine);
    }

    vector<vector<int>> arrRotationA;
    for (size_t i = 0; i < arrA.size(); i++)
    {
        vector<int> arrLine;
        for (size_t j = 0; j < arrA[i].size(); j++)
        {
            arrLine.push_back(arrA[height - 1 - j][i - j]);
        }
        arrRotationA.push_back(arrLine);
    }
    vector<vector<int>> arrRotationA_2;
    for (size_t i = 0; i < arrA.size(); i++)
    {
        vector<int> arrLine;
        for (size_t j = 0; j < arrA[i].size(); j++)
        {
            arrLine.push_back(arrRotationA[height - 1 - j][i - j]);
        }
        arrRotationA_2.push_back(arrLine);
    }
    int wrong = 0;
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < i + 1; j++)
        {
            if (arrA[i][j] != arrB[i][j])
            {
                ++wrong;
            }
        }
    }
    int wrongA = 0;
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < i + 1; j++)
        {
            if (arrRotationA[i][j] != arrB[i][j])
            {
                ++wrongA;
            }
        }
    }
    int wrongB = 0;
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < i + 1; j++)
        {
            if (arrRotationA_2[i][j] != arrB[i][j])
            {
                ++wrongB;
            }
        }
    }
    if (wrong < wrongA && wrong < wrongB)
    {
        cout << wrong;
    }
    else if (wrong > wrongA && wrongB > wrongA)
    {
        cout << wrongA;
    }
    else
    {
        cout << wrongB;
    }
}