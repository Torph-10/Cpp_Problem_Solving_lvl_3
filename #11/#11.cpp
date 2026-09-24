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
int reversed_number(int number)
{
	int reminder = 0;
	int rev = 0;
	while (number > 0)
	{
		reminder = number % 10;
		number = number / 10;
		rev = rev * 10 + reminder;
	}
	return rev;
}
bool check_palindrome(int number)
{
	int rev = reversed_number(number);
	
	while (number > 0)
	{
		if ((number % 10) != (rev % 10))
			return 0;
		number = number / 10;
		rev  = rev  / 10;
	}
	return 1;
}
int main()
{
	if ((check_palindrome(read_number("Please enter a positive number ?\n"))))
		cout << "Yess";
	else
		cout << "Nooo";

	return (0);
}