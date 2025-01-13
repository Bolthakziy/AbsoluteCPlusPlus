#include <iostream>
using namespace std;

int main()
{
	int age, pocketMoney;

	cout << "Enter your age. : ";
	cin >> age;
	cout << "Then enter your all money. : ";
	cin >> pocketMoney;

	if ((age >= 20) && (pocketMoney >= 4500)) {
		cout << "You can buy a beer." << endl;
	} else {
		cout << "You can not buy a beer." << endl;
	}

	return 0;
}
