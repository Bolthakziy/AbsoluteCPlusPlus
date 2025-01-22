#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string FirstName, LastName;
	char grade;
	int i;
	fstream input;
	input.open("EnKaninOgToKatte.txt");

	for (i = 0; i < 3; ++i) {
		input >> FirstName >> LastName;
		input >> grade;
	}

	input.close();

	return 0;
}
