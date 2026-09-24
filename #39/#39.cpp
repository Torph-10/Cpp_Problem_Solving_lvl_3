#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_number(int from, int to)
{
	int number = rand() % (to - from + 1) + from;
	return number;
}
void fill_array_elements(int arr[100], int &arrlength)
{
	int i = 0;

	cout << "How Many Elements :\n";
	cin >> arrlength;

	while (i < arrlength)
	{
		arr[i] = rand_number(1, 100);
		i++;
	}
}
void printl_array_elements(int arr[100], int arrlength, string text)
{
	int i = 0;

	cout << text;
	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
}
bool is_prime(int number)
{
	int i = 2;

	while (i < number)
	{
		if (number % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void add_numbers_to_elements(int number, int arr2[100], int& arr2length)
{
	arr2[arr2length] = number;
	arr2length++;
}
void check_numbers_is_prime(int arr[100], int arrlength, int arr2[100], int &arr2length)
{
	int i = 0;

	while (i < arrlength)
	{
		if (is_prime(arr[i]) == 1)
			add_numbers_to_elements(arr[i], arr2, arr2length);
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0;
	int arr2[100], arr2length = 0;
	
	fill_array_elements(arr, arrlength);
	check_numbers_is_prime(arr, arrlength, arr2, arr2length);

	printl_array_elements(arr, arrlength, "\nArray 1 Elements :\n");
	printl_array_elements(arr2, arr2length, "\nArray 2 Prime Number :\n");

	return 0;
}