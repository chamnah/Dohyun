#include <iostream>

int main()
{
	int a[3];
	a[0] = 10;

	// 이중 배열*
	/*int arr[3][3] = {0,1,2,
					3,4,5,
					6,7,8};*/
	int arr[3][3] = { {0,1,2},{3,4,5},{6,7,8} };

	//int arr[10][10][10]; // 삼중 배열
	//int arr[10][10][10][10]; // 사중 배열

	arr[0]; // a[0][0] a[0][1] a[0][2] 3개
	arr[1]; // a[1][0] a[1][1] a[1][2] 3개
	arr[2]; // a[2][0] a[2][1] a[2][2] 3개

	/*arr[0][0] = 3;
	arr[0][1] = 2;*/
	
	// 이중 배열 출력
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << arr[i][j] << ", ";
		}
		std::cout << std::endl;
	}

	int tempArr[3][2] = { {0,1},{2,3},{4,5} };

	return 0;
}