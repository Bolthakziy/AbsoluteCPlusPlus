#include <iostream>
using namespace std;

int main()
{
	unsigned int number;	

	cout << "There is a number \'100\'." << endl;
	cout << "Do you want to divide it? Then input a number you want! : ";
	cin >> number;

	if (number > 100) {
		cout << "You input too big number...." << endl;
	} else if ((number > 0) && (number <= 100)) {
		cout << "The divided number is " << 100 / number << endl;
	} else {
		cerr << "The number \'100\' can not be devided...." << endl;
	}

	return 0;
}
