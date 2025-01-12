#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	bool b;

	cout << "Let us evaluate the expression." << endl;
	cout << "The expression is \"(i < k) && (k < j)\"." << endl;
	cout << "Input three numbers you want. : ";
	cin >> i >> j >> k;
	b = ((i < k) && (k < j));

	if (b) {
		cout << "The result is true." << endl;
	} else {
		cout << "The result is false." << endl;
	}

	return 0;
}
