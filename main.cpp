#include <iostream>
#include "functions.h"

using namespace std;

void main()
{
	//���� ����� �����
	int input1 = getValutinput();

	// ���� ��������
	char op = getMathOperation();

	// ���� ����� �����
	int input2 = getValutinput();

	// ������ �������� � �������� ���������
	int result = calculateResult(input1, op, input2);

	// ����� 
	printResult(result);
}