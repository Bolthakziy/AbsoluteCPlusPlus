#include <iostream>
using namespace std;

typedef enum DYR
{
	KAT = 7,
	KANIN = 3,
	AKTO,
	AND = 10
} dyr;

int main()
{
	dyr cat = KAT, rabbit = KANIN, duck = AND, devil = AKTO;

	cout << "KAT : " << cat << endl;
	cout << "KANIN : " << rabbit << endl;
	cout << "AND : " << duck << endl;
	cout << "AKTO : " << devil << endl;

	return 0;
}
