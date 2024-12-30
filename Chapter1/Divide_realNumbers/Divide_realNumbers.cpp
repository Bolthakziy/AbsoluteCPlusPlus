#include <iostream>
using namespace std;

int main()
{
	int int_dividend = 19, int_divisor = 6;
	double double_dividend = (double)int_dividend, double_divisor = (double)int_divisor;

	cout << "What is the value of the expression \'19 / 6\'?" << endl;
	cout << "The answer : " << int_dividend / int_divisor << endl << endl;
	cout << "What is the value of the expression \'19.0 / 6.0\'?" << endl;
	cout << "The answer : " << double_dividend / double_divisor << endl;

	return 0;
}
