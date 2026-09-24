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
void fill_array(int arr[100], int &arr_length, int elem)
{
	int i = 0;

	if (elem <= 1)
	{
		cout << "\nEnter how many elements:\n";
		cin >> arr_length;
	}

	while (i < arr_length)
	{
		arr[i] = rand_number(1, 100);
		i++;
	}
}
void sum_two_arrays(int arr1[100], int arr2[100],int arr3[100], int arr_length)
{
	int i = 0;
	
	while (i < arr_length)
	{
		arr3[i] = arr1[i] + arr2[i];
		i++;
	}
	cout << endl;
}
void print_array_elements(int arr[100], int arr_length, string text)
{
	int i = 0;

	cout << text;

	while (i < arr_length)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr1_l = 0;
	int arr2[100];

	fill_array(arr1, arr1_l, 1);
	fill_array(arr2, arr1_l, 2);
	print_array_elements(arr1, arr1_l, "Array 1 elements:\n");
	print_array_elements(arr2, arr1_l, "Array 2 elements:\n");
	int arr3[100];
	sum_two_arrays(arr1, arr2, arr3, arr1_l);
	print_array_elements(arr3, arr1_l, "Sum if array 1 and array 2 elemen:\n");
	
	return 0;
}