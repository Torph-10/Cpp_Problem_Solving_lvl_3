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

	return (number);
}
void print_letter_pattern(int number)
{
	int i ;
	char c = 'A';
	int j = 1;

	while (j <= number)
	{
		i = 1;
		while (i <= j)
		{
			cout << c;
			i++;
		}
		cout << endl;
		j++;
		c++;
	}
}

int main()
{
	print_letter_pattern(read_number("Please enter a positive number\n"));
}