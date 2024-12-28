#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "\\\t\\\\\t\\\\\\\n", str2 = "\'\t\"\"\t\'\'\'\n";

	cout << str1 << str2;

	return 0;
}
