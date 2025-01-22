#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string land;
	fstream input;
	input.open("Lande.txt");

	while (input >> land) {
		cout << land << endl;
	}

	input.close();

	return 0;
}
