#include <iostream>
#include <string>

using namespace std;
void print_letters()
{
	char a = 'A';
	char b = 'A';
	char c = 'A';
	cout << endl;
	while (a <= 'Z')
	{
		b = 'A';
		while (b <= 'Z')
		{
			c = 'A';
			while (c <= 'Z')
			{
				cout << a << b << c;
				c++;
				cout << endl;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	print_letters();
}