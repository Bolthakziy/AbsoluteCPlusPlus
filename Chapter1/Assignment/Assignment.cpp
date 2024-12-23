#include <iostream>
using namespace std;

int main()
{
	int x, y, input;

	cout << "Enter the integer \'x\'. : ";
	cin >> input;
	cout << endl << endl << endl;
	cout << "The integer \'x\' will be same with input value." << endl;
	cout << "And \'y\' will be also same with x." << endl;
	y = x = input;
	cout << "x : " << x << "\t" << "y : " << y << endl;

	return 0;
}
