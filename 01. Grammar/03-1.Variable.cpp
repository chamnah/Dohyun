#include <iostream>

void main()
{
	/*
	��ǻ�� ���� ���� ����
	1bit  = 0 , 1
	1byte = 8bit  0000 0000 
	1kb   = 1024byte
	1mb   = 1024kb
	1gb   = 1024mb
	1tb   = 1024gb

	�ڷ��� - �����͸� ǥ���ϴ� ����

	1byte 8bit

	2^8

	����      | �뷮  | ��� ������       |  ǥ�� ����            |  ǥ������(unsigned) 
	*char     | 1byte |   ����            |  -128 ~ 0 ~ 127 (256) |   0 ~ 255
	*bool     | 1byte |   ��/����         |   true / false        |   
	short     | 2byte |   ����            |  -32768 ~ 32767       |   0 ~ 65535
	*int      | 4byte |   ����            |   -21�� ~  21��       |   0 ~ 42��
	long      | 4byte |   ����            |   -21�� ~  21��       |   0 ~ 42��
	long long | 8byte |   ����            |   -2^63 ~  2^63       |
	*float    | 4byte |   �Ǽ�            |    
	double    | 8byte |   �Ǽ�            |
	*/

	/*
	int number = 0; // �ʱ�ȭ c
	int number(0); // �ʱ�ȭ c++
	int number;     // ����
	number = 0;     // ����
	*/

	/*
	short number = 32767;
	std::cout << "First :" << number << std::endl;

	number = 32768; // ���� �÷ο� : �޸� ũ�⸦ ����� ����
	std::cout << "Second :" << number << std::endl;
	*/

	/*
	unsigned short number = 32767;
	std::cout << "First :" << number << std::endl;

	number = 50000; // ���� �÷ο� : �޸� ũ�⸦ ����� ����
	std::cout << "Second :" << number << std::endl;
	*/

	//bool temp = true; // 0�� �ƴ� ��
	//bool temp = false; // 0

	/*
	// ASC �ڵ� ����ǥ  
	char text = 'a';
	char text = 97;
	std::cout << text << std::endl;
	*/

	/*
	float number = 0.1f;
	double number2 = 0.1;
	*/

	// ���� �̸� ��Ģ 
	//int 1number = 0;  ���ڰ� �տ� ������ �ȵȴ�.
	//int %number = 0; // _�� ������ Ư�� ��ȣ �ȵ�


	// �밡���� ǥ���
	// int = iNumber
	// float = fNumber;
	// bool  = bNumber;
	// char  = szNumber;
	
	// ī�� ǥ���
	// GameCount  

	system("pause");
}