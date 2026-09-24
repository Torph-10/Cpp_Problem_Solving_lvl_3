#include <iostream>
#include <string>
using namespace std;

string read_password(string mess)
{
	string password = "";
	cout << mess;
	cin >> password;

	return (password);
}
int print_pattern()
{
	string password = read_password("Please enter your password ?\n");
	string word = "";
	int counter = 0;

	for (int a = 65; a <= 90; a++)
	{
		for (int b = 65; b <= 90; b++)
		{
			for (int c = 65; c <= 90; c++)
			{
				word = word + char(a);
				word = word + char(b);
				word = word + char(c);
				counter++;
				if (word == password)
				{
					cout << "password is " << word << endl;
					return (counter);
				}
				cout << word;
				cout << endl;
				word = "";
			}
		}
	}
	return (0);
}
int main()
{
	int counter = print_pattern();
	if (counter > 0)
		cout << "Found After " << counter << " Trial(s)\n";
	else
		cout << "Wrong password, not as conditions says\n";

	return (0);
}