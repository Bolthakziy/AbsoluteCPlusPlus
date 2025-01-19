#include <iostream>
using namespace std;

int main()
{
	int number, first, second, third, result;

	cout << "Enter your number. Then your number will be chaged. : ";
	cin >> number;

	result = (first = number + 2, second = first * 3, third = second - 1);
	cout << "Your number is changed into like this. : " << result << endl;

	return 0;
}
