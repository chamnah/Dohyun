#define SIZE 100 // #������ ��ó����

void main()
{
	/*
	��� : ������ �ʴ� ��
	const 
	������ ���� ���ؼ� ���


	const : ���
	���� : ���ϴ� ��
	��� : �������ʴ� ��
	*/

	int temp = 10; // ������
	const int width = temp; //������
	constexpr int width2 = SIZE; // ������ �ð� ���� ���������. ����ȭ �뵵

	//��ó���� -> (constexpr) -> ������ 


	//width = 100;
	int ratio = 100 / width;

	const int num = 100; // ��� : ���� ������ �� ����.
}