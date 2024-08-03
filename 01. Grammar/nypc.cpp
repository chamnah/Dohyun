#include <iostream>using namespace std;int main(){	const int town = 3;	int balloonRange = 1;  // 범위	int mosquito[town/*0~2*/][town/*0~2*/] = {{1,2,1},											 {2,2,2},											 {1,2,1} };	int maximum = INT_MIN;	// 십자 모양 물풍선 터뜨리기	for (size_t i = 0; i < town; i++)	{		for (size_t j = 0; j < town; j++)		{			int attackMosquito = mosquito[i][j]; // 현재 물풍선이 터진 위치의 모기 수			// 오른쪽 범위			for (int w = 1; w <= balloonRange; w++)
			{
				if (j + w >= town)// 배열 범위를 넘어간다면 탈출(붐힐 마을 밖으로 물풍선 범위가 넘어간 경우)
				{
					continue;
				}

				attackMosquito += mosquito[i][j + w];
			}			// 왼쪽 범위			//....			if (attackMosquito > maximum) // 잡은 모기의 수가 현재 구한 최대로 잡은 모기 수 보다 크다면, 			{				maximum = attackMosquito; // 잡은 모기 최대값을 교체한다.			}		}	}	// 숙제	// 1.	//엑스자 모양 물풍선 최대값	//...	//엑스자 모양 물풍선과 십자 모양 물풍선 최대값 비교 후 출력	//...	//2. 카트라이더 보드 게임	std::cout << maximum << endl;// 물풍선이 터졌을 때 가장 많이 잡을 수 있는 모기 최대값을 출력한다.}/*[3][3]; i,j-1  i,j  i,j+ 1[0,0][0,1][0,2] j < 3[1,0][1,1][1,2][2,0][2,1][2,2]*/