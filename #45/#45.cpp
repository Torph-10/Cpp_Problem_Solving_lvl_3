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

void fillarray(int arr[100], int& arrlength)
{
	int i = 0;

	cout << "Enter how many elements:\n";
	cin >> arrlength;

	while (i < arrlength)
	{
		arr[i] = rand_number(-100, 100);
		i++;
	}
}

void printarray(int arr[100], int arrlength, string text)
{
	int i = 0;

	cout << text;

	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n";
}

int isnegativenumbers(int arr[100], int arrlength)
{
	int i = 0;
	int counter = 0;
	while (i < arrlength)
	{
		if (arr[i] < 0)
			counter++;
		i++;
	}
	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0;

	fillarray(arr, arrlength);
	printarray(arr, arrlength, "Array 1 Elements: ");

	cout << "Negative Numbers Count is : " << isnegativenumbers(arr, arrlength) << endl;

	return 0;
}