#include <iostream>
#include <string>
using namespace std;


string read_number(string mess)
{
	string number = "";
	cout << mess;
	cin >> number;

	return (number);
}
int calculate_lenght_of_string(string num)
{
	int i = 0;
	while (num[i] != '\0')
	{
		i++;
	}
	i --;
	return (i);
}
void print_number_in_reversed(string num)
{
	int i = calculate_lenght_of_string(num);

	while (i >= 0)
	{
		cout << num[i] << endl;
		i--;
	}
}
int main()
{
	print_number_in_reversed(read_number("Please enter a positive number ? \n"));

	return (0);
}