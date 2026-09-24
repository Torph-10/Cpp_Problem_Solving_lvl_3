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
void reverse_number(int number)
{
	int reminder = 0;
	int sum = 0;
	while (number > 0)
	{
		reminder = number % 10;
		sum = sum * 10 + reminder;
		number = number / 10;
	}
	cout << "Reverse is : " << sum << endl;
}
int main()
{
	reverse_number(read_positive_number("Please enter a positive number ?\n"));

	return (0);
}