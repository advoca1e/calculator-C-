#include <iostream>
#include "functions.h"

using namespace std;

void main()
{
	//ввод першої цифри
	int input1 = getValutinput();

	// вибір операції
	char op = getMathOperation();

	// ввод другої цифри
	int input2 = getValutinput();

	// робить операцію і виводить результат
	int result = calculateResult(input1, op, input2);

	// вивод 
	printResult(result);
}