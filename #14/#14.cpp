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
void print_inverted_pattern(int number)
{
	char c = 'A';
	int i = 1;
	c = c + number;
	c--;

	while (number >= 1)
	{
		i = 1;
		
		while (i <= number)
		{
			cout << c ;
			i++;
		}
		cout << endl;
		c--;
		number--;
	}
}
int main()
{
	print_inverted_pattern(read_number("Please enter a number ?\n"));

	return (0);
}