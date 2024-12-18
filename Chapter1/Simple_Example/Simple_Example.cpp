#include <iostream>
using namespace std;

int main()
{
	int numberOfMembers;

	cout << "How many members in your team? : ";
	cin >> numberOfMembers;

	if (numberOfMembers < 3) {
		cout << "Too short. You can not make your perfect team...." << endl;
	} else if (numberOfMembers == 3) {
		cout << "Oh, great! then you belong to \'En kanin og to katte\'!" << endl;
	} else {

	}

	return 0;
}
