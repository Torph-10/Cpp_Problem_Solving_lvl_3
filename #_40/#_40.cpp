#include <iostream>

using namespace std;

void fillarray(int arr[100], int& arrlength)
{
	arrlength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void printarray(int arr[100], int arrlength)
{
	int i = 0;

	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << "\n";
}

short findnumberpositioninarray(int number, int arr[100], int arrlength)
{
	int i = 0;

	while (i < arrlength)
	{
		if (arr[i] == number)
			return i;
		i++;
	}
	return -1;
}

bool isnumberinarray(int number, int arr[100], int arrlength)
{
	return findnumberpositioninarray(number, arr, arrlength) != -1;
}

void addarrayelement(int number, int arr[100], int& arrlength)
{
	arr[arrlength] = number;
	arrlength++;
}

void copydistinctnumberstoarray(int arrsource[100], int arrdest[100], int sourcelength, int& destlength)
{
	int i = 0;

	while (i < sourcelength)
	{
		if (!isnumberinarray(arrsource[i], arrdest, destlength))
			addarrayelement(arrsource[i], arrdest, destlength);
		i++;
	}
}

int main()
{
	int arrsource[100], sourcelength = 0, arrdest[100], destlength = 0;
	fillarray(arrsource, sourcelength);

	cout << "\nArray 1 Elements :\n";
	printarray(arrsource, sourcelength);
	copydistinctnumberstoarray(arrsource, arrdest, sourcelength, destlength);

	cout << "\n Array 2 Elements :\n";
	printarray(arrdest, destlength);

	return 0;
}