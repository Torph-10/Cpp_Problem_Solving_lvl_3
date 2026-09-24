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

	} while (number <= 0);

	return (number);
}

void print_positive_number(int number)
{
	int reminder = 0;
	int sum_of_digits = 0;
	while (number > 0)
	{
		reminder = number % 10;
		sum_of_digits += reminder;
		number /= 10;
	}
	cout << "sum of digits = " << sum_of_digits <<endl;
}
int main()
{
	print_positive_number(read_positive_number("Please enter a positive number ?\n"));
	return (0);
}