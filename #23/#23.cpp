#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int read_number(string mess)
{
	int i = 0;

	do {
		cout << mess;
		cin >> i;
	} while (i <= 0);

	return i;
}


int random_number(int from, int to)
{
	int number = rand() % (to - from + 1) + from;
	return number;
}

void read_array(int arr[100], int arr_length)
{
	int i = 0;

	while (i < arr_length)
	{
		arr[i] = random_number(1, 100);
		i++;
	}
}
void print_array(int arr[100], int arr_length)
{
	int i = 0;

	cout << "Array Elemenet : ";
	while (i < arr_length)
	{
		cout << arr[i] << " ";
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arr_length = read_number("Enter a length of array \n");

	read_array(arr, arr_length);
	print_array(arr, arr_length);

	return 0;
}