#include <iostream>using namespace std;int main(){	const int town = 3;	int balloonRange = 1;  // ����	int mosquito[town/*0~2*/][town/*0~2*/] = {{1,2,1},											 {2,2,2},											 {1,2,1} };	int maximum = INT_MIN;	// ���� ��� ��ǳ�� �Ͷ߸���	for (size_t i = 0; i < town; i++)	{		for (size_t j = 0; j < town; j++)		{			int attackMosquito = mosquito[i][j]; // ���� ��ǳ���� ���� ��ġ�� ��� ��			// ������ ����			for (int w = 1; w <= balloonRange; w++)
			{
				if (j + w >= town)// �迭 ������ �Ѿ�ٸ� Ż��(���� ���� ������ ��ǳ�� ������ �Ѿ ���)
				{
					continue;
				}

				attackMosquito += mosquito[i][j + w];
			}			// ���� ����			//....			if (attackMosquito > maximum) // ���� ����� ���� ���� ���� �ִ�� ���� ��� �� ���� ũ�ٸ�, 			{				maximum = attackMosquito; // ���� ��� �ִ밪�� ��ü�Ѵ�.			}		}	}	// ����	// 1.	//������ ��� ��ǳ�� �ִ밪	//...	//������ ��� ��ǳ���� ���� ��� ��ǳ�� �ִ밪 �� �� ���	//...	//2. īƮ���̴� ���� ����	std::cout << maximum << endl;// ��ǳ���� ������ �� ���� ���� ���� �� �ִ� ��� �ִ밪�� ����Ѵ�.}/*[3][3]; i,j-1  i,j  i,j+ 1[0,0][0,1][0,2] j < 3[1,0][1,1][1,2][2,0][2,1][2,2]*/