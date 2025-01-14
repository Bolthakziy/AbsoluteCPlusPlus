#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "Enter your number. : ";
	cin >> x;

	if (x < 10) {
		cout << "Your number is an one-digit number." << endl;
	} else {
		cout << "Your number is too big." << endl;
	}

	return 0;
}
