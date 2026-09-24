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
void fillarray(int arr[100], int &arrlength)
{
	int i = 0;

	cout << "How Many Elemenets :\n";
	cin >> arrlength;

	while (i < arrlength)
	{
		arr[i] = i + 1;
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
	cout << endl;
}
void shuffle_array(int arr[100], int arrlength)
{
	int i = 0;

	while (i < arrlength)
	{
		swap(arr[rand_number(0, arrlength-1)], arr[rand_number(0 , arrlength - 1)]);
		i++;
	}
}
void swap(int& A, int& B)
{
	int temp = 0;

	temp = A;
	A = B;
	B = temp;
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrlength = 0;

	fillarray(arr, arrlength);
	print_array(arr, arrlength, "Array Elements Before Shuffle :\n");

	shuffle_array(arr, arrlength);
	print_array(arr, arrlength, "Array Elements After Shuffle :\n");

	return 0;
}