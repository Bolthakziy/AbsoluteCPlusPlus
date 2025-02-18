#include <iostream>
using namespace std;

void operate_FloatingPointNumbers(char operation, double a, double b);

int main()
{
	char operation;
	double a, b;

	cout << "+\t-\t*\t\\" << endl;
	cout << "Which operation do you want? : ";
	cin >> operation;
	cout << "Then input your 2 floating point numbers for operating! : ";
	cin >> a >> b;
	operate_FloatingPointNumbers(operation, a, b);

	return 0;
}

void operate_FloatingPointNumbers(char operation, double a, double b)
{
	switch (operation) {
		case '+' :
			cout << "The sum of your 2 numbers is " << a + b << "." << endl;
			break;
		case '-' :
			cout << "The subtraction of your 2 numbers is" << a - b << "." << endl;
			break;
		case '*' :
			cout << "The multiply of your 2 numbers is " << a * b << "." << endl;
			break;
		case '/' :
			cout << "The division of your 2 numbers is " << a / b << "." << endl;
			break;
		default :
			cout << "Please enter a correct operation...." << endl;
			break;
	}
}
