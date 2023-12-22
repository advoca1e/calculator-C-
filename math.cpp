#include <iostream>
using namespace std;

int getValutinput()
{

	cout << "Enter an intger: ";
	int Value;
	cin >> Value;
	return Value;
}

char getMathOperation()
{
	char op;
	cout << "Enter which operator ( + , - , * , / ) ";
	cin >> op;
	return op;

}

int calculateResult(int input1, char op, int input2)
{

	switch (op)
	{
	case'+': 
		return input1 + input2;
	
	case'-':
		return input1 - input2;

	case'*': 
		return input1 * input2;
		
	case'/': 
		return input1 / input2;
		
	}
}

void printResult(int result)
{

	cout << "Your result: " << result;

}
