#include <iostream>
using namespace std;

int main()
{
	double d = 85.82;
	int x;

	x = static_cast<int>(d);
	cout << "The value of \'d\' : " << d << endl;
	cout << "The value of \'x\' : " << x << endl;

	return 0;
}
