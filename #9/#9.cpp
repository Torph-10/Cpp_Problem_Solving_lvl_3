#include <iostream>
#include <string>
using namespace std;

int read_number(string mess)
{
	int num = 0;
	do {
		cout << mess;
		cin >> num;

	} while (num <= 0);
	return (num);
}

int	counter_digits(int num, int digit)
{
	int counter = 0;
	int remander = 0;
	while (num)
	{
		remander = num % 10;
		if (digit == remander)
			counter++;
		num = num / 10;
	}
	return counter;
}

void printFrequency(int num)
{
	int  i = 1;
	while (i <= 9)
	{
		if (counter_digits(num, i))
			cout << "Digit " << i << " Frequency is " << counter_digits(num, i) << " Time(s)" << endl;
		i++;
	}
}
int main()
{
	printFrequency(read_number("please enter number \n"));

	return (0);
}