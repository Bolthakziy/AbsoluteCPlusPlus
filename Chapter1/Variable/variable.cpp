#include <iostream>
using namespace std;

int main()
{
	cout << "This source code runs on a \'x86\' CPU(64 bits)." << endl;
	cout << endl;
	cout << endl;
	cout << "The size of \'short\' variable :\t\t" << sizeof(short) << "byte(s)" << endl;
	cout << "The size of \'int\' variable :\t\t" << sizeof(int) << "byte(s)" << endl;
	cout << "The size of \'long\' variable :\t\t" << sizeof(long) << "byte(s)" << endl;
	cout << "The size of \'float\' variable :\t\t" << sizeof(float) << "byte(s)" << endl;
	cout << "The size of \'double\' variable :\t\t" << sizeof(double) << "byte(s)" << endl;
	cout << "The size of \'long double\' variable :\t\t" << sizeof(long double) << "byte(s)" << endl;
	cout << "The size of \'char\' variable :\t\t" << sizeof(char) << "byte(s)" << endl;
	cout << "the size of \'bool\' variable :\t\t" << sizeof(bool) << "byte(s)" << endl;

	return 0;
}
