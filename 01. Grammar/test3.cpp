#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> totalList;
	vector<int> currentList;

	int n = 0;
	cin >> n;
	totalList.resize(n);
	currentList.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> totalList[i];
	}

	const int nextIndex = 2;
	size_t maxLength = 0;
	for (size_t i = 0; i < totalList.size(); i++)
	{
		currentList.assign(totalList.begin() + i, totalList.end());

		vector <int>::iterator iter = currentList.begin();

		int index = 1;

		for (; iter != currentList.end();)
		{
			if ((iter + 1) == currentList.end())
			{
				break;
			}

			if ((iter + 2) == currentList.end())
			{
				break;
			}

			if (index % 2 == 1 && (*iter) < *(iter + nextIndex))
			{
				++iter;
				++index;
			}
			else if (index % 2 == 0 && (*iter) > *(iter + nextIndex))
			{
				++iter;
				++index;
			}
			else
			{
				currentList.erase(iter + nextIndex);
			}
		}

		if (maxLength < currentList.size())
		{
			maxLength = currentList.size();
		}

		currentList.clear();
	}

	int m = maxLength;
	cout << m << endl;
	return 0;
}


/*
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

*/