#include <iostream>
#include <cmath>
using namespace std;

int RoundUp(double number);

int main()
{
	double a;
	char ch;

	do {
		cout << "Input your real number. : ";
		cin >> a;
		cout << "The round up for your number is " << RoundUp(a) << "." << endl;
		cout << "Do you still want to play? : ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

	cout << "The round-up game is over. Have a nice day!" << endl;

	return 0;
}

int RoundUp(double number)
{
	return static_cast<int>(ceil(number));
}
