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
void print_array_elements(int arr[100], int arrlength, string text)
{
	int i = 0;

	cout << text;

	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
void add_array_elements(int number, int arr2[100], int& arr2length)
{
	arr2[arr2length] = number;
	arr2length++;
}
void copy_arr1_to_arr2(int arr1[100], int arr2[100], int arr1length, int &arr2length)
{
	int i = 0;

	while (i < arr1length)
	{
		add_array_elements(arr1[i], arr2, arr2length);
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrlength;

	fill_array_elements(arr, arrlength);
	
	int arr2[100];
	int arr2length = 0;
	copy_arr1_to_arr2(arr, arr2, arrlength, arr2length);
	print_array_elements(arr, arrlength, "Array 1 Elements :\n");
	print_array_elements(arr2, arr2length, "Array 2 Elements After Copy :\n");

	return 0;
}