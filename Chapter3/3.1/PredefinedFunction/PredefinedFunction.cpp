#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Enter your 2 decimal numbers. : ";
	cin >> a >> b;
	cout << "\n\n\nYour entering decimal numbers. : " << a << "\t" << b << endl;
	cout << "Each root value of your numbers. : " << sqrt(a) << "\t" << sqrt(b) << endl;
	cout << "Each absolute value of your numbers. : " << fabs(a) << "\t" << fabs(b) << endl;

	return 0;
}
