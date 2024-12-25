#include <iostream>
using namespace std;

int main()
{
	int x, y, z, temp1, temp2;

	cout << "Input \'x\'. : ";
	cin >> x;
	cout << "Input \'y\'. : ";
	cin >> y;
	cout << "Input \'z\'. : ";
	cin >> z;
	temp1 = x * y + z;
	temp2 = x * (y + z);
	x *= y + z;
	cout << "\'x *= y + z\' equals to \'x = x * y + z\'?" << endl;
	cout << "Let\'s check it." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;
	cout << "...................................." << endl;

	if (x == temp1) {
		cout << "Yes, they are same." << endl;
	} else if (x == temp2) {
		cout << "No, they are different." << endl;
		cout << "\'x *= y + z\' equals to \'x = x * (y + z)\'." << endl;
	} else {

	}

	return 0;
}
