#include <iostream>
using namespace std;

int read_number(string text)
{
	int number = 0;

	do
	{
		cout << text;
		cin >> number;
	} while (number > 0);

	return number;
}

int MyAbs(int number)
{
	int AbsN = number * -1;
	return AbsN;
}

int main()
{
	int number = read_number("Enter a Negative number :\n");
	cout << "My abs Result : " << MyAbs(number) << endl;
	cout << "C++ abs Result : " << abs(number) << endl;

	return 0;
}