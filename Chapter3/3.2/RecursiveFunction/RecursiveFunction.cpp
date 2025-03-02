#include <iostream>
using namespace std;

int recursiveSum(int n);

int main()
{
	int number;

	cout << "Enter your number. : ";
	cin >> number;
	cout << "The result of the sum from 1 to your number is like below." << endl;
	cout << recursiveSum(number) << endl;

	return 0;
}

int recursiveSum(int n)
{
	if ((n != 1) && (n > 0)) {
		return (n + recursiveSum(n - 1));
	} else if (n == 1) {
		return 1;
	} else {
		cout << "You enter an inappropriate number...." << endl;

		return -1;
	}
}
