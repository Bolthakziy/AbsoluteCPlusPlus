#include <iostream>
using namespace std;

int main()
{
	int n = 3, m = 3, i = 7, j = 7, value1, value2, value3, value4;

	value1 = 2 * (n++);
	cout << "value1 : " << value1 << endl;
	cout << "n : " << n << endl;

	value2 = 2 * (++m);
	cout << "value2 : " << value2 << endl;
	cout << "m : " << m << endl;

	value3 = i--;
	cout << "value3 : " << value3 << endl;
	cout << "i : " << i << endl;

	value4 = --j;
	cout << "value4 : " << value4 << endl;
	cout << "j : " << j << endl;

	return 0;
}
