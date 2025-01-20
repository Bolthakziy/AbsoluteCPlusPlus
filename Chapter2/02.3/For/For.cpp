#include <iostream>
using namespace std;

int main()
{
	int i;

	for (i = 1; i <= 12; ++i) {
		if (i % 3 == 1) {
			cout << "@";
		} else if (i % 3 == 2) {
			cout << "#";
		} else {
			cout << "*";
		}
	}
	cout << endl;

	return 0;
}
