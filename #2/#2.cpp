#include <iostream>
using namespace std;

int read()
{
	int i = 0;
	cout << "Please enter a positive number\n";
	cin >> i;
	return (i);
}
bool check(int j)
{
	int i = 2;
	while (j > i)
	{
		if (j % i == 0)
			return (false);
		i++;
	}
	return (true);
}
void print()
{
	int i = 1;
	int j = read();
	while (i < j)
	{
		if (check(i) == 1)
			cout << i << endl;
		i++;
	}
}
int main()
{
	print();

	return (0);
}