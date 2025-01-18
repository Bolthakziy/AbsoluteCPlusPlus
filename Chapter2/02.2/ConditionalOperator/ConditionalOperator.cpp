#include <iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber, biggerNumber;

	cout << "Enter 2 numbers. : ";
	cin >> firstNumber >> secondNumber;

	biggerNumber = (firstNumber >= secondNumber) ? firstNumber : secondNumber;
	cout << "Your big number is " << biggerNumber << "." << endl;

	return 0;
}
