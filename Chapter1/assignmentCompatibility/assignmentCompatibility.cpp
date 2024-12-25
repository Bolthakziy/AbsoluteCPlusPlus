#include <iostream>
using namespace std;

int main()
{
	double d;
	int x, y;
	bool b;

	cout << "Input any real number. : ";
	cin >> d;
	cout << "There is an integer variable. It is \'x\'." << endl;
	cout << "The real number you input will enter the integer variable, x." << endl;
	x = d;
	cout << "What is the value of x?" << endl;
	cout << "The value of x : " << x << endl << endl << endl;
	cout << "Input any natural number. : ";
	cin >> y;
	cout << "There is a boolean variable. It is \'b\'." << endl;
	cout << "The natural number you input will enter the boolean variable, b." << endl;
	b = y;
	cout << "What is the value of b?" << endl;
	cout << "The value of b : " << b << endl;

	return 0;
}
