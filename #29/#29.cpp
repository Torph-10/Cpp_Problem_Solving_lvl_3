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

bool is_prime(int num)
{
	int i = 2;

	if (num <= 1)
		return 0;
	while (i < num)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void fill_array(int array[100], int& arr_length)
{
	int i = 0;

	cout << "Enter how many elements :\n";
	cin >> arr_length;

	while (i < arr_length)
	{
		array[i] = rand_number(1, 100);
		i++;
	}
	cout << endl;
}
void print_array(int arr1[100], int arr1_len)
{
	int i = 0;
	cout << "Array 1 elements:\n";
	while (i < arr1_len)
	{
		cout << arr1[i] << " ";
		i++;
	}
	cout << "\n";
}
int check_array(int arr1[100], int arr1_length, int arr2[100])
{
	int i = 0;
	int counter = 0;
	cout << "Prime Number in Array 2:\n";

	while (i < arr1_length)
	{
		if (is_prime(arr1[i]))
		{
			arr2[counter] = arr1[i];
			counter++;
		}
		i++;
	}

	return counter;
}
int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr1_l = 0;

	fill_array(arr1, arr1_l);
	print_array(arr1, arr1_l);
	int arr2[100];
	print_array(arr2, check_array(arr1, arr1_l, arr2));
	return 0;
}