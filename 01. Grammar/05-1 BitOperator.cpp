#include <iostream>
using namespace std;

void main()
{
	/*
	���� �ý���
	
	*/

	/*
	4 / 2 = 2 0 
	2 / 2 = 1 0 
	1 / 2 = 0 1 
	


	4 ->  
	
	32  16  8  4  2  1
	0   0   0  1  0  0

	*/

	// ���� �߰�
	// ��Ÿ� ���� ���� �߰�

	/*
	���� ������ �ִ�.
	ü���� �ִ�.
	�Ѿ�����.
	*/

	/*
	�����ڴ�~

	���� �ý���
	1. ���� ��� : ���߷� ���� / ȸ���� ���� / �� �Ӽ�
	2. myBuff�� ���߷� ���� ������ �� �Ӽ� ���� �߰�
	3. myBuff�� ȸ���� ���� ������ �����ϴ��� �˻�
	4. myBuff�� ȸ���� ���� ���� �߰�
	5. myBuff�� ���߷� ���� ����
	*/

	/*
	128 64 32 16 8 4 2 1 
	                   
	*/

	// �������
	//0x : 16����
	const int Attack  = 0x0001; //  0000001 1
	const int Defence = 0x0002; //  0000010 2
	const int HP	  = 0x0004; //  0000100 4
	const int MP	  = 0x0008; //  0001000 8
	const int CriDmg  = 0x0010; //  0010000 16
	const int CriRate = 0x0020; //  0100000 32
	//                  0x0040  //  1000000       64 = 16 * 4 
	//                  0x0080  //        128 = 16 * 8
	// or
	// 0000010 Defence
	//|0010000 CirDmg
	// 0010010
	int mybuff = Defence | CriDmg; // 

	bool checkBuff = mybuff & CriDmg; // true / false
	cout << "ũ��Ƽ�� ������ ������? (true) :" << checkBuff << endl;
	//  00010 - mybuff
	//^ 10000 - CriDmg     
	//  10010 - mybuff  
	//(XOR)
	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "ũ��Ƽ�� ������ ������? :" << checkBuff << endl;

	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "ũ��Ƽ�� ������ ������? :" << checkBuff << endl;

	/*
	OR(|) : ��Ʈ�� �߰� �� �� �ִ�.
	AND(&) : ��Ʈ�� �ִ��� �˻� �� �� �ִ�.
	XOR(^) : ��Ʈ�� ���ų� �� �� �ֵ�. On/Off
	*/

	/*
	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "ũ��Ƽ�� ������ ������? :" << checkBuff << endl;
	*/
	// true(1) : 0�� �ƴ� ��
	// false(0)
	/*
		XOR : ���� ���� ������ ����(0) ���� ���� �ٸ��� ��(1) 
	
		 10010 - mybuff
		^10000 - CriDmg
		 00010 - mybuff
	
	     ���� ���� checkBuff�� ���� 2������ ǥ���غ�����. 
	     AND(&) : ��� ���̾�� ���̰� �ƴϸ� ����
	    
		  10000 - CriDmg 16
	     &10010 - mybuff
	      10000 - checkBuff
	 
	    00010 - Defence
		10000 - CriDmg
		10010 - mybuff


		mybuff �� �������� ��Ÿ������!
		


		16 / 2 () - () 
	
	XOR ^ : ���� �״�. ����ġ (ON/OFF)
	OR | : �� �߰�
	AND & : �� �˻�
	*/

	/*
	- ����
	- ����!!!!!!!!!!!!!
	*/


}