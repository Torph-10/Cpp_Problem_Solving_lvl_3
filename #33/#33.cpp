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

bool print_separator(int i, int j)
{
	if ((i != 4) && (j == 4))
		return 1;
	else
		return 0;
}

string print_capitalletter()
{
	string x = "";
	int i = 1;
	int j = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			x += char(rand_num(65, 90));
			if (print_separator(i, j))
				x += "-";
			j++;
		}
		i++;
	}
	return x;

}

void print_keys(int N_key, string arr[100])
{
	int i = 0;

	while(i <= N_key)
	{
		arr[i] = print_capitalletter();
		i++;
	}
}
void print_array(string arr[100])
{
	int i = 0;

	while (i < 10)
	{
		cout << "Key [" << i << "]: ";
		cout << arr[i] << endl;
		i++;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	string arr[100];
	print_keys(read_number("How many keys you will generate ?\n"), arr);
	print_array(arr);

	return 0;
}