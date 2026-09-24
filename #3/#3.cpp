#include <iostream>
#include <string>
using namespace std;

int read_number(string mess)
{
	int number = 0;
	cout << mess;
	cin >> number;
	do
	{
		if (number > 0)
			break;
		cout << "Wrong number!! " << mess;
		cin >> number;

	} while (number < 1);
	return (number);
}

int check_perfect_number(int number)
{
	int i = 1;
	double sum = 0;

	while (sum < number)
	{
		if (number % i == 0)
			sum += i;
		i++;
	}
	return (sum);
}
void print_perfect_number(int number)
{
	if ( check_perfect_number(number) == number)
		cout << number << " Is Perfect Number\n";
	else
		cout << number << " Is not Perfect Number\n";
}
int main()
{
	print_perfect_number(read_number("Please enter a positive number ?\n"));
}