#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
	int x, y;

	cout << "Input your 2 numbers. : ";
	cin >> x >> y;
	cout << "The sum of your 2 numbers is " << sum(x, y) << "." << endl;

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}
