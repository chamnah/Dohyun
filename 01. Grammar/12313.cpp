#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> totalNums;
	vector<int> currentNums;
	totalNums.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> totalNums[i];
	}
	
	size_t maxLength = 0;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j <= n - i; j++) 
		{
			currentNums.clear();
			for (int k = 0; k < i; k++)
			{
				currentNums.push_back(totalNums[j + k]);
			}

			bool check = true;
			for (size_t k = 0; k < currentNums.size(); k++)
			{
				if (k + 2 >= currentNums.size())
				{
					break;
				}

				if (k % 2 == 0)
				{
					if (currentNums[k] >= currentNums[k + 2])
					{
						check = false;
						break;
					}
				}
				else
				{
					if (currentNums[k] <= currentNums[k + 2])
					{
						check = false;
						break;
					}
				}
			}

			if (check)
			{
				maxLength = max(maxLength, currentNums.size());
			}
		}
	}

	cout << maxLength << endl;

	return 0;
}

/*
NYPC 후기

2025 NYPC / 정올

시간 부족

올해 시험 x?

자료구조
vector list 

목표 2025 NYPC - 본선 진출

수업 진행

클래스 -> 자료구조(vector(배열),list,map) -> 알고리즘 
-> 백준 or 프로그래머스(단계별 문제) -> NYPC 문제들 많이 풀어봄

미니게임 줄어듬

보강 하루

복습


*/