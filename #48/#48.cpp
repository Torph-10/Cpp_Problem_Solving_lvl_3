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

int myfloorfunc(float number)
{
	int i;
	i = number;
	if (number == i)
		return i;
	else if (number > 0)
		return i;
	else
		return --i;
}
int main()
{
	float number = readnumber("Enter a number :\n");

	cout << "My Floor Function :" << myfloorfunc(number) << endl;
	cout << "C++ Floor Result :" << floor(number) << endl;

	return 0;
}