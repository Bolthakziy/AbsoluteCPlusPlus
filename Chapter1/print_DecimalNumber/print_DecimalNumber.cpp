#include <iostream>
using namespace std;

int main()
{
	float price = 35.2943567;

	cout << "First print case!" << endl;
	cout << "Ths price is $" << price << endl;

	cout << "------------------------" << endl;
	cout << "------------------------" << endl;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Second print case!" << endl;
	cout << "The price is $" << price << endl;

	return 0;
}
