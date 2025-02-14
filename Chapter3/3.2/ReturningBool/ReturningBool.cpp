#include <iostream>
#include <cstdbool>
using namespace std;

bool AreYouTeenage(unsigned int age);

int main()
{
	unsigned int age;

	cout << "Input your age. : ";
	cin >> age;

	if (AreYouTeenage(age)) {
		cout << "You are a teen, haha. Glad to see you!" << endl;
	} else {
		cout << "You are not a teen...." << endl;
	}

	return 0;
}

bool AreYouTeenage(unsigned int age)
{
	bool teenage;

	if ((age >= 14) && (age < 20)) {
		teenage = true;
	} else {
		teenage = false;
	}

	return teenage;
}
