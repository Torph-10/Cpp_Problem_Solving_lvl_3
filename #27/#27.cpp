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
void fill_array(int array[100], int& arr_length)
{
	int i = 0;
	cout << "Enter how many elements ?\n";
	cin >> arr_length;

	while (i < arr_length)
	{
		array[i] = rand_number(1, 100);
		i++;
	}
}
void print_array(int array[100], int arr_length)
{
	int i = 0;

	cout << "Array Elements : ";

	while (i < arr_length)
	{
		cout << array[i] << " ";
		i++;
	}
	cout << endl;
}
int sume_of_allarray_numbers(int arr[100], int arr_length)
{
	int i = 0;
	int sum = 0;

	while (i < arr_length)
	{
		sum = sum + arr[i];
		i++;
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int array[100], arr_length = 0;

	fill_array(array, arr_length);
	print_array(array, arr_length);
	cout << "Average Of All Numbers is : " << (float) sume_of_allarray_numbers(array, arr_length) / arr_length << endl;;

	return 0;
}