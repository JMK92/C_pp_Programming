/*
	��Ʈ ������
	- ��Ʈ(bit - binary digit, 2����)�� ��ȯ�ؼ� ����� �ϴ� ������
	- ���� : &(AND), |(OR), ^(XOR) - ���׿�����
	         ~(NOT), <<(Left shift), >>(Right shift) - ���� ������

	* BCD -> 10���� -> 2���� 4bit
	* 2���� �� 10������ �ٲܶ��� 8421�ڵ�
*/

#include<iostream>
using namespace std;

int main() {
	int num1 = 15; // 1111(2)
	int num2 = 8;  // 1000(2)
	 
	cout << "AND = " << (num1 & num2) << endl;  // 1000(2) = 8
	cout << "OR = " << (num1 | num2) << endl;   // 1111(2) = 15
	cout << "XOR = " << (num1 ^ num2) << endl;  // 0111(2) = 7
	cout << "~num1 = " << (~num1) << endl;      
	/*
		0 000 1111 (~��Ʈ �����Ҷ��� �տ� 4�ڸ� 0000 �ٴ´�) : 15
		1 111 0000 : ~15
		1 111 0000 => 2�� ���� = 1�� ���� + LSB1
		1 000 1111 => �� ���� 1�� ��ȣ�� ��.
		+        1
		1 001 0000  => -16 
	*/

	return 0;
}