#include <iostream>
#include <vector>
using namespace std;

enum DeleteType
{
	None, // 제거 안함
	Front, // 앞에 제거
	Back  // 뒤에 제거
};

int main()
{
	int n;
	cin >> n;
	vector<int> conf;
	conf.resize(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> conf[i];
	}

	DeleteType delType = None; // 어떤 위치를 제거할 지 혹은 제거 안할지 여부

	while (conf.size() > 0) // 배열에 요소를 제거하면서, 원하는 수열을 만들기 위해 계속 반복
	{
		delType = None;

		for (size_t i = 0; i < conf.size() - 2; i += 2)// 배열 사이즈 만큼 검사
		{
			if (conf[i] >= conf[i + 2])
			{
				if (i == 0) // 첫번째 검사부터 틀리면 앞 제거
				{
					delType = Front;
				}
				else // 아니면 뒤에 제거
				{
					delType = Back;
				}
				break;
			}
		}
		
		if (delType == None) // 위에 홀수 검사가 성공할 때만 아래 실패 여부 검사
		{
			for (size_t i = 1; i < conf.size() - 2; i += 2)
			{
				if (conf[i] <= conf[i + 2])
				{
					if (i == 1) // 첫번째 요소 검사부터 틀리면 앞 제거
					{
						delType = Front;
					}
					else // 아니면 뒤에 제거
					{
						delType = Back;
					}

					break;
				}
			}
		}
		
		if (delType == Front)
		{
			conf.erase(conf.begin()); // 앞에 제거
		}
		else if (delType == Back)
		{
			conf.pop_back(); // 뒤에 제거
		}
		else
		{
			break; // None이면, 검사 성공했다는 의미이므로, 탈출
		}
	}

	cout << conf.size() << endl; // 배열 갯수 출력

	return  0;
}


/*
	홀수 : 점점 증가
	짝수 : 점점 감소

	1. 10 2 9 3 8 4 7 5 6 1
	홀수 : 10 9 8 7 6
	짝수 : 2 3 4 5 1

	2. 2 9 3 8 4 7 5 6 1
	홀수 : 2 3 4 5 1
	짝수 : 9 8 7 6

	제거 조건
	1.
	만약, 홀수가 감소하고, 짝수가 증가된다면,
	앞에 제거 후 재검사

	2.
	만약, 홀수가 점점 증가하다가 감소이면, 뒤에 제거
	만약, 짝수가 점점 감소하다가 증가되면, 뒤에 제거

	*/