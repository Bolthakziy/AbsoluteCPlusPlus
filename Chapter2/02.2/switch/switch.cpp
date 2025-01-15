#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "Enter your sex. : ";
	cin >> ch;

	switch(ch) {
		case 'M' :
		case 'm' :
			cout << "You are a man." << endl;
			break;
		case 'F' :
		case 'f' :
			cout << "You are a woman." << endl;
			break;
		default :
			cout << "Please enter a adequate character!" << endl;
			break;
	}

	return 0;
}
