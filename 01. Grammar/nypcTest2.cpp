#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> totalList; // 제공된 수열 모습 
	vector <int> currentList; // 최종 모습 - 
	int n = 0;
	cin >> n; // 수열의 갯수 받기
	totalList.resize(n); // 배열의 크기
	currentList.resize(n);// 배열의 크기
	for (int i = 0; i < n; i++)
	{
		cin >> totalList[i]; // 수열 받기
	}
	
	const int nextIndex = 2; // 다음 번째 홀수/짝수별 이동
	size_t maxLength = 0; // 가장 긴 경우의 길이
	for (size_t i = 0; i < totalList.size(); i++) // 첫 시작 위치 별로 길이를 모두 구하기 위함
	{
		currentList.assign(totalList.begin() + i, totalList.end()); //시작위치 별로 값 복사

		// 홀수
		//iterator pointer와 비슷한 자료형이다. 값 접근 : (*odditer) 
		vector <int>::iterator odditer = currentList.begin();//시작

		for (; odditer != currentList.end();)//currentList 전체 순회
		{
			if ((odditer + 1) == currentList.end())
			{
				break;
			}

			if ((odditer + 2) == currentList.end())
			{
				break;
			}

			//if (conf[i] <= conf[i + 2])
			if (*odditer < *(odditer + nextIndex)) // 홀수 증가한 경우
			{
				odditer += nextIndex; // 다음 홀수번쨰로 이동
			}
			else // 감소하거나, 크기가 동일한 경우
			{
				currentList.erase(odditer + nextIndex); // 제거한다.
			}
		}

		if (currentList.size() > 0) // 
		{
			vector <int>::iterator eveniter = currentList.begin() + 1;

			for (; eveniter != currentList.end();)
			{
				if ((eveniter + 1) == currentList.end())
				{
					break;
				}

				if ((eveniter + 2) == currentList.end())
				{
					break;
				}

				if (*eveniter > *(eveniter + nextIndex)) // 짝수 참 다음 위치의 값이 더 작은 경우 
				{
					eveniter += 2;
				}
				else // 더 크거나 같은 경우
				{
					currentList.erase(eveniter + nextIndex); // 제거
				}
			}
		}

		maxLength = max(maxLength,currentList.size()); // 두 인자 중 더 큰값 반환
		currentList.clear();
	}

	cout << maxLength;
}




/*
10 2 9 3 8 4 7 5 6 1




*/