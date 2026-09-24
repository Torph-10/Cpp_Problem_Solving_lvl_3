#include <iostream>
#include <string>

using namespace std;

int read_number(string mess)
{
	int number = 0;
	do
	{
		cout << mess;
		cin >> number;

	} while (number <= 0);

	return number;
}

void print_inverted_pattern(int number)
{
	int i = 1;
	int j = 1;
	while (number >= i)
	{
		j = 1;
		while (i >= j)
		{
			cout << i;
			j++;
		}
		cout << endl;
		i++;
	}
}

int main()
{
	print_inverted_pattern(read_number("Please enter a positive number ?\n"));

	return 0;
}