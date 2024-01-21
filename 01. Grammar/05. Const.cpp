#define SIZE 100 // #붙으면 전처리기

void main()
{
	/*
	상수 : 변하지 않는 수
	const 
	오류를 막기 위해서 사용


	const : 상수
	변수 : 변하는 수
	상수 : 변하지않는 수
	*/

	int temp = 10; // 컴파일
	const int width = temp; //컴파일
	constexpr int width2 = SIZE; // 컴파일 시간 전에 만들어진다. 최적화 용도

	//전처리기 -> (constexpr) -> 컴파일 


	//width = 100;
	int ratio = 100 / width;

	const int num = 100; // 상수 : 값을 수정할 수 없다.
}