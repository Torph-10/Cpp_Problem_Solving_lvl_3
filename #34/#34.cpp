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
	} while (number < 0);

	return number;
}
int rand_number(int from, int to)
{
	int number = rand() % (to - from + 1) + from;

	return number;
}
void fill_array(int arr[100], int arrlength)
{
	int i = 0;

	while (i < arrlength)
	{
		arr[i] = rand_number(1, 100);
		i++;
	}
}
void print_array(int arr[100], int arrlength, string text)
{
	int i = 0;

	cout << text;
	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
}
void search_position_ofthe_N(int arr[100],int arrlength, int number)
{
	int i = 0;

	while (i < arrlength)
	{
		if (arr[i] == number)
		{
			cout << "The Number Found at Position : " << i << endl;
			cout << "The Number Found Its Order : " << i + 1;
		}
		else
		{
			cout << "The Number is not Found :-( \n";
			break;
		}
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrlength = read_number("Enter a How Many Elements :\n");

	fill_array(arr, arrlength);
	print_array(arr, arrlength,"\nArray 1 Elements :\n");
	int search_N = read_number("\nPlease Enter a Number to Search For ?\n");

	cout << "The Number You are Looking For is : " << search_N << endl;

	search_position_ofthe_N(arr, arrlength, search_N);

	return 0;
}