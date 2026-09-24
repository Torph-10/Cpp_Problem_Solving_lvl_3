#include <iostream>
#include <string>
using namespace std;

int read_N(string text)
{
	int number = 0;

	do
	{
		cout << text;
		cin >> number;
	} while (number <= 0);

	return number;
}
void read_element(int number, int element[100])
{
	int i = 0;

	while (i < number)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> element[i];
		cout << endl;
		i++;
	}

}

void print_value(int number,int element[100])
{
	int i = 0;

	cout << "Original array : ";

	while (i < number)
	{
		cout << element[i] << " ";
		i++;
	}
	cout << endl;

}

int check_repetin_N(int number, int element[100], int check_N)
{
	int i = 0;
	int counter = 0;
	while (i < number)
	{
		if (element[i] == check_N)
			counter++;
		i++;
	}

	return counter;
}

int main()
{
	int number = read_N("How Many Element You Will Enter ?\n");
	int element[100];
	read_element(number, element);
	int check_N = read_N("Enter the number you want to check : ");
	
	print_value(number,element);
	cout << check_N << " is repeted " << check_repetin_N(number, element, check_N) << " Time(s)" << endl;
	
	return 0;
}