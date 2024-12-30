#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double circleArea;
	int radius;

	cout << "Input a radius you want. : ";
	cin >> radius;
	circleArea = radius * radius * PI;
	cout << "The area of the circle : " << circleArea << endl;

	return 0;
}
