#include <iostream>
#include <string>
using namespace std;

int read_positive_number()
{
	int number = 0;
	do
	{
		cout << "Please enter a positive number ?\n";
		cin >> number;
	} while (number <= 0);

	return (number);
}
int check_perfect_number(int number)
{
	int sum = 0;
	int i = 1;
	while (number > i)
	{
		if (number % i == 0)
			sum += i;
		i++;
	}

	return (sum);
}
void print_number(int number)
{
	int i = 1;
	while (i <= number)
	{
		if (check_perfect_number(i) == i)
			cout << i << endl;
		i++;
	}
}

int main()
{
	print_number(read_positive_number());

	return (0);
}
