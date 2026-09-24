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
bool check_to_add_more(int number)
{
	return number == 1;
}
void Add_array_elements(int arr[100], int &arrlength, int number)
{
	arr[arrlength] = number;
	arrlength++;
}
void print_array_elements(int arr[100], int arrlength)
{
	int i = 0;
	cout << "Array Elements : ";

	while (i < arrlength)
	{
		cout << arr[i] << " ";
		i++;
	}
}
void input_user_number_inarray(int arr[100], int &arrlength)
{
	do
	{
		Add_array_elements(arr, arrlength, read_number("Please Enter a Number ?\n"));

	} while (check_to_add_more(read_number("Do You Want to Add More Numbers? [0] : No ,[1] : yes\n")));

}
int main()
{
	int arr[100];
	int arrlength = 0;

	input_user_number_inarray(arr, arrlength);
	cout << "Array Length : " << arrlength << endl;
	print_array_elements(arr, arrlength);
	
	return 0;
}