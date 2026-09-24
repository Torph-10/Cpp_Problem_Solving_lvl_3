#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_number(int from, int to)
{
	int number = rand() % (to - from + 1) + 1;

	return number;
}
void fill_array(int array[100], int& arr_length)
{
	int i = 0;

	cout << "Enter how many element will entred ?\n";
	cin >> arr_length;

	while (i < arr_length)
	{
		array[i] = rand_number(1, 100);
		i++;
	}
}
void print_array(int array[100], int arr_length, int arr_elem)
{
	int i = 0;
	
	cout << "Array "<< arr_elem<<" elements :\n";

	while (i < arr_length)
	{
		cout << array[i] << " ";
		i++;
	}
	cout << endl << endl;
}
void copy_array1_to_array2(int array[100],int array2[100], int arr_length)
{
	int i = 0;

	while (i < arr_length)
	{
		array2[i] = array[i];
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int array[100];
	int array2[100];
	int arr_length = 0;

	fill_array(array, arr_length);
	print_array(array, arr_length, 1);
	copy_array1_to_array2(array, array2, arr_length);
	print_array(array2, arr_length, 2);

	return 0;
}