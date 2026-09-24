#include <iostream>
#include <cmath>

using namespace std;

float read_number(string text)
{
	float number = 0;
	cout << text;
	cin >> number;

	return number;
}
bool isnumberisnegative(float &number)
{
	if (number < 0)
	{
		number *= -1;
		return 1;
	}
	return 0;
}
int my_round_func(float &number)
{
	int j = isnumberisnegative(number);
	int i = number;

	if (number >= i + 0.5)
	{
		if (j == 1)
			return ++i * -1;
		else
			return ++i;
	}
	else
	{
		if (j == 1)
			return i * -1;
		else
			return i;
	}
}
int main()
{
	float number = read_number("Enter a number :\n");

	cout << "My Round Result :" << my_round_func(number) << endl;
	cout << "C++ Round Result :" << round(number) << endl;

	return 0;
}