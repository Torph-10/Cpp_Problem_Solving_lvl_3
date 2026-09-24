#include <iostream>
#include <cmath>
using namespace std;

float readnumber(string text)
{
	float number = 0;

	cout << text;
	cin >> number;

	return number;
}

int mycielfunc(float number)
{
	int i = number;

	if (number == i)
		return i;
	else if (number > 0)
		return ++i;
	else
		return i;
}
int main()
{
	float number = readnumber("Enter a number :\n");

	cout << "My Ceil Result : " << mycielfunc(number) << endl;
	cout << "C++ Ceil Result : " << ceil(number) << endl;

	return 0;
}