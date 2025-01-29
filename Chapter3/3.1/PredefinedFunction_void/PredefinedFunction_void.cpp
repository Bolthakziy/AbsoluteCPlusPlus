#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned int divisor;

	cout << "We will find a divisor of the number \'6\'." << endl;
	cout << "Input a divisor number from 0 and 6. : ";
	cin >> divisor;

	switch (divisor) {
		case 1 :
		case 2 :
		case 3 :
		case 6 :
			cout << "This number is the divisor of \'6\'." << endl;
			break;
		case 0 : 
			cout << "This number will make an error...." << endl;
			exit(1);
		case 4 :
		case 5 :
			cout << "This number is not the divisor of \'6\'." << endl;
			break;
		default :
			cout << "This number is not appropriate for a divisor of \'6\'...." << endl;
			break;
	}

	return 0;
}
