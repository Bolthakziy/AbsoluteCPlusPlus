#include <iostream>
using namespace std;

int main()
{
	int index1, index2, i = 0, j = 0;

	cout << "Enter your number of iteration for the 1st circuit. ";
	cin >> index1;

	while (i <= index1) {
		cout << "1st circulation" << endl;
		++i;
	}

	cout << "Now enter your number of iteration for the 2nd circuit. ";
	cin >> index2;

	do {
		cout << "2nd circulation" << endl;
		++j;
	} while (j <= index2);

	return 0;
}
