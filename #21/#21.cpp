#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int read_number(string mess)
{
	int number = 0;

	do
	{
		cout << mess;
		cin >> number;
	} while (number <= 0);

	return number;
}

int rand_num(int from, int to)
{
	int num = rand() % (to - from + 1) + from;
	return num;
}

void print_separator(int i, int j)
{
	if ((i != 4) && (j == 4))
		cout << "-";
}

void print_capitalletter()
{
	int i = 1;
	int j = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			cout << char(rand_num(65, 90));
			print_separator(i, j);
			j++;
		}
		i++;
	}
}

void print_keys(int N_key)
{
	int i = 1;

	while(i <= N_key)
	{
		if (i >= 10)
			cout << "Key [" << i << "]: ";
		else
			cout << "Key [" << i << "] : ";
		print_capitalletter();
		cout << endl;
		i++;
	}
}





int main()
{
	srand((unsigned)time(NULL));
	
	print_keys(read_number("How many keys you will generate ?\n"));


	return 0;
}