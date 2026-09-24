#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int read_number(string text)
{
	int number = 0;

	do
	{
		cout << text;
		cin >> number;
	} while (number <= 0);

	return number;

}
int random_N(int from, int to)
{
	int number = rand() % ((to - from + 1) + from);

	return number;
}
void read_arr(int number, int arr[100])
{
	int i = 0;

	while (i < number)
	{
		arr[i] = random_N(1, 100);
		i++;
	}
	cout << endl;
}
void print_arr(int number, int arr[100])
{
	int i = 0;

	cout << "Array Elements : ";
	while (i < number)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
int minimum_number(int number, int arr[100])
{
	int i = 0;
	int mini_number = arr[i];

	while (i < number)
	{
		if (arr[i] < mini_number)
			mini_number = arr[i];
		i++;
	}

	return mini_number;
}

int main()
{
	srand((unsigned)time(NULL));

	int number, arr[100];
	number = read_number("Enter the Number of Elements will entred : \n");

	read_arr(number, arr);
	print_arr(number, arr);
	cout << "The Minimum Number is : " << minimum_number(number, arr);

	return 0;
}