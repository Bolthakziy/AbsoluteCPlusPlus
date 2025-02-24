#include <iostream>
using namespace std;

void divide_Number(int dividend, int divisor);

int main()
{
	int a, b;

	cout << "Input your dividend. : ";
	cin >> a;
	cout << "And now input your divisor. : ";
	cin >> b;
	divide_Number(a, b);

	return 0;
}

void divide_Number(int dividend, int divisor)
{
	if (divisor == 0) {
		cout << "This expression can not executed...." << endl;

		return;
	} else {
		if (dividend % divisor != 0) {
			cout << dividend << " can not be divided by " << divisor << "." << endl;
		} else {
			cout << dividend << " can be divided by " << divisor << "." << endl;
		}
	}
}
