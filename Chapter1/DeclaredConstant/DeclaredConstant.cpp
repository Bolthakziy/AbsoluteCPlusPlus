#include <iostream>
using namespace std;

void delay(int _time);
void analogWrite(const int _pin, int pwmValue);

int main()
{
	const int PWM_PIN = 3;
	int delayTime = 5, pwmValue = 128;

	analogWrite(PWM_PIN, 128);
	delay(delayTime);
	analogWrite(PWM_PIN, 255);

	return 0;
}

void delay(int _time)
{
	if (_time <= 1) {
		cout << _time << "second flows." << endl;
	} else {
		cout << _time << "seconds flow." << endl;
	}
}

void analogWrite(const int _pin, int pwmValue)
{
	cout << "In pin" << _pin << ", PWM output value is " << pwmValue << "." << endl;
}
