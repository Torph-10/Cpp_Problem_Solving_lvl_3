#include <iostream>
#include <string>

using namespace std;

void fillarray(int arr[100], int &sourcelength)
{
	sourcelength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
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

bool checkpalindromenumbers(int arr[100], int arrlength)
{
	int i = 0;
	
	 
	while (i < arrlength / 2 )
	{
		if (arr[i] != arr[arrlength-1])
			return 0;
		i++;
		arrlength--;
	}
	return 1;
}
int main()
{
	
	int arrsource[100], sourcelength;

	fillarray(arrsource, sourcelength);

	if (checkpalindromenumbers(arrsource, sourcelength))
		cout << "Yes array is palindrome \n";
	else
		cout << "No the array is not palindrome \n";

	return 0;
}