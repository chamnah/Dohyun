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
			int input;
			cin >> input;
			arrLine.push_back(input);
		}

		arrA.push_back(arrLine);
	}

	/*
	H = 3
	i = 0 / j = 0 => y = 0     0 (+,-,*) 0 = 0
	i = 1 / j = 0 => y = 1     1 (+,-)   0 = 1
	i = 1 / j = 1 => y = 0     1 (-)     1 = 0
	i = 2 / j = 0 => y = 2     2 (+,-)   0 = 2
	i = 2 / j = 1 => y = 1     2 (-)     1 = 1
	i = 2 / j = 2 => y = 0     2 (-)     2 = 0
	                           i    -    j = y


	H = 3						h            j        x  
	i = 0 / j = 0 => x = 2		3	(+,-)    0  -1  = 2
	i = 1 / j = 0 => x = 2		3   (+,-)    0  -1  = 2
	i = 1 / j = 1 => x = 1		3   -        1  -1  = 1
	i = 2 / j = 0 => x = 2		3	(+,-)    0  -1  = 2
	i = 2 / j = 1 => x = 1		3	-        1  -1  = 1
	i = 2 / j = 2 => x = 0		3	-        2  -1  = 0
	                            h   -        j  - 1
	*/
	/*
	2
	2 1
	2 1 0
	*/

	// 회전
	vector<vector<int>> arrRotationA;
	for (size_t i = 0; i < arrA.size(); i++)
	{
		vector<int> arrLine;
		for (size_t j = 0; j < arrA[i].size(); j++)
		{
			arrLine.push_back(arrA[height - j - 1][i-j]);
			cout << arrA[height - j - 1][i - j];
		}

		arrRotationA.push_back(arrLine);
		cout << endl;
	}

	
	vector<vector<int>> arrB;
	for (size_t i = 0; i < height; i++)
	{
		vector<int> arrLine;
		for (size_t j = 0; j < i + 1; j++)
		{
			int input;
			cin >> input;
			arrLine.push_back(input);
		}

		arrB.push_back(arrLine);
	}

	int wrong = 0;

	for (size_t i = 0; i < arrA.size(); i++)
	{
		for (size_t j = 0; j < arrA[i].size(); j++)
		{
			if (arrA[i][j] != arrB[i][j])
			{
				wrong += 1;
			}
		}
	}
	
	cout << wrong;
	
	return 0;
}
/*
숙제
arrRotationA_2 추가하여 회전한 삼각형 만들기

arrB랑 arrA비교
arrB랑 arrRotationA비교
arrB랑 arrRotationA_2 비교

가장 차이값이 낮은 숫자를 출력

*/