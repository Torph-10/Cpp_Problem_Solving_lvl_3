#include <iostream>
#include <string>
using namespace std;

void print_header()
{
	int i = 1;
	cout << "\t\t\t\t\t  Multiplication Table From 1 to 10\n\n\t ";
	while (i <= 10)
	{
		cout << i << "\t " ;
		i++;
	}
	cout << "\n\n-------------------------------------------------------------------------------------\n";

}
void multiplication_table()
{
	print_header();
	int i = 1;
	int j = 1;
	while (i <= 10)
	{
		if (i == 10)
			cout << i << " |\t ";
		else
			cout << i << "  |\t " ;
		j = 1;
		while (j <= 10)
		{
			cout << i * j << "\t ";
			j++;
		}
		i++;
		cout << endl;
	}
}

int main()
{
	multiplication_table();
}