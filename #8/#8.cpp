#include <iostream>
#include <string>

using namespace std;

int read_digit(string mess)
{
	int i = 0;
	cout << mess;
	cin >> i;

	return(i);
}
void check_digit()
{
	int digit = read_digit("Please enter a digit ?\n");
	int number = read_digit("Please enter a number ?\n");
	int sum = 0, reminder = 0;
	while (digit > 0)
	{
		reminder = digit % 10;
		digit = digit / 10;
		if (reminder == number)
			sum++;
	}
	cout << "digit " << number << " Frequency is " << sum << " Time(s)\n";
}
int main()
{
	check_digit();

	return (0);
}