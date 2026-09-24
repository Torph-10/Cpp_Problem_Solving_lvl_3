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
void fill_array(int arr[100], int &arr_l)
{
	int i = 0;

	cout << "How Many Elements :\n";
	cin >> arr_l;

	while (i < arr_l)
	{
		arr[i] = rand_number(1, 100);
		i++;
	}
}
void print_array(int arr[100], int arr_l, string text)
{
	int i = 0;

	cout << "\n" << text;

	while (i < arr_l)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
void reverse_array(int arr[100], int arr_l,int arr2[100])
{
	int i = 0;
	
	while (arr_l >= i)
	{
		arr2[i] = arr[arr_l-1-i];
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr_l;
	arr_l = 0;
	int arr2[100];

	fill_array(arr, arr_l);
	reverse_array(arr, arr_l, arr2);
	print_array(arr, arr_l, "Array Elements :\n");
	print_array(arr2, arr_l, "Array 2 Elements After Copying Array 1 In Reverse Order :\n");

	return 0;
}