#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "Input your alphabet. ";
	cin >> ch;

	if ((ch > 'a') && (ch < 'z')) {
		cout << "Your alphabet is a lowercase." << endl;
	} else if ((ch > 'A') && (ch < 'Z')) {
		cout << "your alphabet is an uppercase." << endl;
	} else {

	}

	return 0;
}
