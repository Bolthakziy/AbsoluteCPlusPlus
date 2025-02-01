#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int number, opponentNumber;

	cout << "Let\'s play a dice game." << endl;
	cout << "Enter your number from \'1\' to \'6\'. : ";
	cin >> number;
	opponentNumber = (rand() % 6) + 1;

	if (number > opponentNumber) {
		cout << "You win." << endl;
	} else {
		cout << "You lose...." << endl;
	}

	return 0;
}
