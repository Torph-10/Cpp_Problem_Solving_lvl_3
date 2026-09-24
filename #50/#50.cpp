#include <iostream>
#include <cmath>
using namespace std;

int readnumber(string text)
{
	int number = 0;

	do
	{
		cout << text;
		cin >> number;
	} while (number < 0);

	return number;
}

int mysqrtfunc(int number)
{
	int i = pow(number, 0.5);
	return i;
}
int main()
{
	int number = readnumber("Enter a number : \n");

	cout << "My Sqrt Result :" << mysqrtfunc(number);
	cout << "C++ Sqrt Resumt :" << sqrt(number);

	return 0;
}