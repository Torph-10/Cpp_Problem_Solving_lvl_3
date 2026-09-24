#include <iostream>
#include <string>

using namespace std;

int read_positive_number(string mess)
{
	int number = 0;
	do
	{
		cout << mess;
		cin >> number;

	} while (number < 0);
	return number;
}

int reverse_number(int number)
{
	int reminder = 0;
	int number2 = 0;
	while (number > 0)
	{
		reminder = number % 10;
		number /= 10;
		number2 = number2 * 10 + reminder;
	}
	return (number2);
}

void print_number(int number)
{
	while (number > 0)
	{
		cout <<  number % 10 << endl;
		number /=  10;
	}
}

int main()
{
	print_number(reverse_number(read_positive_number("kkk : ")));
}