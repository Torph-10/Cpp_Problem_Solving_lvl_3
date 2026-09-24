#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_number(int from, int to)
{
	int rand_num = rand() % (to - from + 1) + from;

	return rand_num;
}
void fill_array_elements(int arr[100], int& arrlength)
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
void print_array_elements(int arr[100], int arrlength, string text)
{
	int i = 0;

	cout << text;

	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
}
void add_array_elements(int number, int arr2[100], int &arrlength)
{
	arr2[arrlength] = number;
	arrlength++;
}
void copy_odd_numbers(int arr1[100], int arr2[100], int arr1length, int& arr2length)
{
	int i = 0;

	while (i < arr1length)
	{
		if (arr1[i] % 2 == 1)
			add_array_elements(arr1[i], arr2, arr2length);
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	arrlength = 0;

	fill_array_elements(arr, arrlength);
	int arr2[100], arr2length;
	arr2length = 0;
	copy_odd_numbers(arr, arr2, arrlength, arr2length);
	print_array_elements(arr, arrlength, "Array 1 Elements :\n");
	print_array_elements(arr2, arr2length, "\nArray 2 Odd Elements :\n");

	return 0;
}